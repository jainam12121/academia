#include <stdio.h>
#include <string.h>

// Function to simulate a login
int login(char username[], char password[]) {
    // Replace this with actual login logic (e.g., database lookup)
    if (strcmp(username, "user") == 0 && strcmp(password, "password") == 0) {
        return 1; // Login successful
    } else {
        return 0; // Login failed
    }
}

// Function to simulate user registration
void registerUser() {
    // Replace this with actual registration logic (e.g., database storage)
    printf("Registration Successful!\n");
}

// Function to display attendance module
void attendanceModule() {
    // Replace with actual attendance module code
    printf("Attendance Module\n");
}

// Function to display result module
void resultModule() {
    // Replace with actual result module code
    printf("Result Module\n");
}

int main() {
    int loggedIn = 0;
    char username[50], password[50];

    printf("Welcome to Student Management System\n");

    // Log in or register
    while (!loggedIn) {
        printf("Choose an option:\n");
        printf("1. Log in\n");
        printf("2. Register\n");
        printf("3. Exit\n");
        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter your username: ");
            scanf("%s", username);
            printf("Enter your password: ");
            scanf("%s", password);

            loggedIn = login(username, password);

            if (loggedIn) {
                printf("Login successful!\n");
            } else {
                printf("Login failed. Try again or register.\n");
            }
        } else if (choice == 2) {
            printf("Enter a username for registration: ");
            scanf("%s", username);
            printf("Enter a password for registration: ");
            scanf("%s", password);
            registerUser();
        } else if (choice == 3) {
            printf("Goodbye!\n");
            return 0;
        }
    }

    // Once logged in, the user can access modules
    while (loggedIn) {
        printf("Choose an option:\n");
        printf("1. Attendance Module\n");
        printf("2. Result Module\n");
        printf("3. Log out\n");
        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            attendanceModule();
        } else if (choice == 2) {
            resultModule();
        } else if (choice == 3) {
            printf("Logged out. Goodbye!\n");
            loggedIn = 0;
        }
    }

    return 0;
}
