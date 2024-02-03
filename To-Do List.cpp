#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back(Task(description));
        cout << "Task added: " << description << endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        } else {
            cout << "Task List:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i].description;
                if (tasks[i].completed) {
                    cout << " (Completed)";
                }
                cout << endl;
            }
        }
    }

    void markAsCompleted(size_t index) {
        if (index > 0 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed: " << tasks[index - 1].description << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask(size_t index) {
        if (index > 0 && index <= tasks.size()) {
            cout << "Task removed: " << tasks[index - 1].description << endl;
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    TodoList todoList;

    while (true) {
        cout << "\n===== TODO LIST MENU =====" << endl;
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskDescription;
                cout << "Enter task description: ";
                cin.ignore();  // Clear the input buffer
                getline(cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                size_t taskIndex;
                cout << "Enter the index of the task to mark as completed: ";
                cin >> taskIndex;
                todoList.markAsCompleted(taskIndex);
                break;
            }
            case 4: {
                size_t taskIndex;
                cout << "Enter the index of the task to remove: ";
                cin >> taskIndex;
                todoList.removeTask(taskIndex);
                break;
            }
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
