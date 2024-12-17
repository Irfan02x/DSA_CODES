#include <iostream>
#include <vector>
#include <string>

using namespace std;

void addContact(vector<pair<string, string>>& contacts, const string& name, const string& number) {
    contacts.push_back(make_pair(name, number));
}

int partition(vector<pair<string, string>>& contacts, int low, int high) {
    string pivot = contacts[high].first;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (contacts[j].first < pivot) {
            i++;
            swap(contacts[i], contacts[j]);
        }
    }
    swap(contacts[i + 1], contacts[high]);
    return i + 1;
}

void quickSortContacts(vector<pair<string, string>>& contacts, int low, int high) {
    if (low < high) {
        int pi = partition(contacts, low, high);

        quickSortContacts(contacts, low, pi - 1);
        quickSortContacts(contacts, pi + 1, high);
    }
}

void displayContacts(const vector<pair<string, string>>& contacts) {
    cout << "Contacts (sorted alphabetically):\n";
    for (const auto& contact : contacts) {
        cout << "Name: " << contact.first << ", Number: " << contact.second << endl;
    }
}

int main() {
    vector<pair<string, string>> contacts;

    addContact(contacts, "Varun", "9512365785");
    addContact(contacts, "Tarun", "9479513575");
    addContact(contacts, "Parul", "9873256987");
    addContact(contacts, "Anjali", "9876543210");
    addContact(contacts, "Kiran", "9456781234");

    quickSortContacts(contacts, 0, contacts.size() - 1);

    displayContacts(contacts);

    return 0;
}
