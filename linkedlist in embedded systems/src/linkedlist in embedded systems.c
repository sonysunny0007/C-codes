#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Task {
    int taskId;
    int priority;
    struct Task* next;
};

// Function to create a new task node
struct Task* createTask(int taskId, int priority) {
    struct Task* newTask = (struct Task*)malloc(sizeof(struct Task));
    newTask->taskId = taskId;
    newTask->priority = priority;
    newTask->next = NULL;
    return newTask;
}

// Function to insert a task at the end of the list
void insertTask(struct Task** head, int taskId, int priority) {
    struct Task* newTask = createTask(taskId, priority);
    if (*head == NULL) {
        *head = newTask;
        return;
    }
    struct Task* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newTask;
}

// Function to remove a task from the list by taskId
void removeTask(struct Task** head, int taskId) {
    struct Task* temp = *head;
    struct Task* prev = NULL;

    while (temp != NULL && temp->taskId != taskId) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Task not found\n");
        return;
    }

    if (prev == NULL) {
        *head = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
    printf("Task removed\n");
}

// Function to print the task list
void printTasks(struct Task* head) {
    struct Task* temp = head;
    while (temp != NULL) {
        printf("Task ID: %d, Priority: %d\n", temp->taskId, temp->priority);
        temp = temp->next;
    }
}

int main() {
    struct Task* taskList = NULL;

    // Insert tasks into the task list
    insertTask(&taskList, 1, 10);
    insertTask(&taskList, 2, 20);
    insertTask(&taskList, 3, 30);

    // Print all tasks
    printf("All tasks:\n");
    printTasks(taskList);

    // Remove a task
    printf("\nRemoving task with ID 2:\n");
    removeTask(&taskList, 2);

    // Print all tasks after removal
    printf("\nAll tasks after removal:\n");
    printTasks(taskList);

    // Free remaining tasks
    struct Task* temp;
    while (taskList != NULL) {
        temp = taskList;
        taskList = taskList->next;
        free(temp);
    }

    return 0;
}
