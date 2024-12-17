#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

// Class definition for Task
class Task {
public:
    string name;
    string date;
    int priority;
    string details;

    // Constructor for Task class
    Task(string n, string d, int p, string det) : name(n), date(d), priority(p), details(det) {}

    // Overloading operator< for priority comparison
    bool operator<(const Task& t) const {
        return priority < t.priority;
    }
};

// Data structures for task management
unordered_map<string, Task*> taskMap;   // Hash map for fast task retrieval by name
priority_queue<Task> taskQueue;         // Priority queue for task scheduling
vector<Task> taskList;                  // Vector to store tasks for sorting

// Function to add a task
void addTask(string name, string date, int priority, string details) {
    Task* newTask = new Task(name, date, priority, details);  // Create new task
    taskMap[name] = newTask;  // Add task to hash map
    taskQueue.push(*newTask);  // Add task to priority queue
    taskList.push_back(*newTask);  // Add task to vector for sorting
}

// Function to search for a task by name
void searchTask(string name) {
    auto it = taskMap.find(name);  // Look for task in the hash map
    if (it != taskMap.end()) {
        Task task = *(it->second);  // Retrieve task
        cout << "Task found: " << endl;
        cout << "Name: " << task.name << endl;
        cout << "Date: " << task.date << endl;
        cout << "Priority: " << task.priority << endl;
        cout << "Details: " << task.details << endl;
    } else {
        cout << "Task not found." << endl;
    }
}

// Function to sort tasks by date
void sortTasksByDate() {
    sort(taskList.begin(), taskList.end(), [](Task a, Task b) { return a.date < b.date; });
}

// Function to display all tasks
void displayTasks() {
    cout << "Tasks:" << endl;
    for (auto& task : taskList) {
        cout << task.name << " - " << task.date << " - " << task.priority << " - " << task.details << endl;
    }
}

// Main function
int main() {
    // Adding tasks to the system
    addTask("Task1", "2024-06-30", 2, "Details of Task1");
    addTask("Task2", "2024-07-01", 1, "Details of Task2");
    addTask("Task3", "2024-06-29", 3, "Details of Task3");

    // Display tasks unsorted
    cout << "Displaying tasks unsorted:" << endl;
    displayTasks();

    // Sort tasks by date
    cout << "\nSorting tasks by date:" << endl;
    sortTasksByDate();
    displayTasks();

    // Search for a specific task by name
    cout << "\nSearching for Task2:" << endl;
    searchTask("Task2");

    return 0;
}
