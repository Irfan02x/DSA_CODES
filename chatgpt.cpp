#include <iostream>
#include <string>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

// Helper function to write the data to a string
size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

std::string getGptResponse(const std::string& api_key, const std::string& prompt) {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if(curl) {
        struct curl_slist* headers = nullptr;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        headers = curl_slist_append(headers, ("Authorization: Bearer " + api_key).c_str());

        json request_body = {
            {"model", "gpt-3.5-turbo"}, // Specify the model you want to use
            {"messages", json::array({{ {"role", "user"}, {"content", prompt} }})},
            {"max_tokens", 150}
        };

        std::string request_data = request_body.dump();

        curl_easy_setopt(curl, CURLOPT_URL, "https://api.openai.com/v1/chat/completions");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, request_data.c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        res = curl_easy_perform(curl);

        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);
        curl_slist_free_all(headers);
    }

    curl_global_cleanup();

    return readBuffer;
}

int main() {
    std::string api_key = "YOUR_API_KEY_HERE";
    std::string prompt = "Hello, how are you?";

    std::string response = getGptResponse(api_key, prompt);

    // Parse the JSON response
    auto json_response = json::parse(response);
    std::string gpt_output = json_response["choices"][0]["message"]["content"];

    std::cout << "GPT Response: " << gpt_output << std::endl;

    return 0;
}
