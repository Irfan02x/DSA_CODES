#include <iostream>
#include <string>
#include <list>
#include <unordered_map>
#include <queue>
#include <algorithm>

using namespace std;


struct Task {
    string name;
    string date;
    int priority;
    string details;

    Task(string n, string d, int p, string dt) : name(n), date(d), priority(p), details(dt) {}

   
    bool operator<(const Task& other) const {
        return priority < other.priority; 
    }
};


class PersonalOrganizer {
private:
    list<Task> taskList; 
    unordered_map<string, list<Task>::iterator> taskMap; 
    priority_queue<Task> taskQueue; 

public:
    
    void addTask(string name, string date, int priority, string details) {
        Task newTask(name, date, priority, details);
        taskList.push_back(newTask);
        taskMap[name] = --taskList.end();
        taskQueue.push(newTask);
        cout << "Task added successfully." << endl;
    }

    void deleteTask(string name) {
        auto it = taskMap.find(name);
        if (it != taskMap.end()) {
            taskList.erase(it->second);
            taskMap.erase(it);
            cout << "Task deleted successfully." << endl;
        } else {
            cout << "Task not found." << endl;
        }
    }

    void searchTask(string name) {
        auto it = taskMap.find(name);
        if (it != taskMap.end()) {
            Task task = *(it->second);
            cout << "Task found: " << endl;
            cout << "Name: " << task.name << endl;
            cout << "Date: " << task.date << endl;
            cout << "Priority: " << task.priority << endl;
            cout << "Details: " << task.details << endl;
        } else {
            cout << "Task not found." << endl;
        }
    }


    void displayTasks() {
        cout << "All tasks:" << endl;
        for (const Task& task : taskList) {
            cout << "Name: " << task.name << ", Date: " << task.date << ", Priority: " << task.priority << ", Details: " << task.details << endl;
        }
    }

    void displayTasksByPriority() {
        cout << "Tasks by priority:" << endl;
        priority_queue<Task> tempQueue = taskQueue;
        while (!tempQueue.empty()) {
            Task task = tempQueue.top();
            tempQueue.pop();
            cout << "Name: " << task.name << ", Date: " << task.date << ", Priority: " << task.priority << ", Details: " << task.details << endl;
        }
    }
};

int main() {
    PersonalOrganizer organizer;
    int choice;
    string name, date, details;
    int priority;

    while (true) {
        cout << "\n1. Add Task\n2. Delete Task\n3. Search Task\n4. Display All Tasks\n5. Display Tasks by Priority\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter task name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter task date (YYYY-MM-DD): ";
            getline(cin, date);
            cout << "Enter task priority: ";
            cin >> priority;
            cout << "Enter task details: ";
            cin.ignore();
            getline(cin, details);
            organizer.addTask(name, date, priority, details);
            break;
        case 2:
            cout << "Enter task name to delete: ";
            cin.ignore();
            getline(cin, name);
            organizer.deleteTask(name);
            break;
        case 3:
            cout << "Enter task name to search: ";
            cin.ignore();
            getline(cin, name);
            organizer.searchTask(name);
            break;
        case 4:
            organizer.displayTasks();
            break;
        case 5:
            organizer.displayTasksByPriority();
            break;
        case 6:
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}