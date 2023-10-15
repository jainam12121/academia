#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    int rollNumber;
    float marks[3]; // Assuming 3 subjects
    float totalMarks;
    float percentage;
};

// Function to input student details
void inputStudentDetails(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter marks for 3 subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student->marks[i]);
    }
}

// Function to calculate total marks and percentage
void calculateResult(struct Student *student) {
    student->totalMarks = 0;
    for (int i = 0; i < 3; i++) {
        student->totalMarks += student->marks[i];
    }
    student->percentage = (student->totalMarks / 3.0);
}

// Function to display student result
void displayResult(struct Student *student) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: %.2f\n", i + 1, student->marks[i]);
    }
    printf("Total Marks: %.2f\n", student->totalMarks);
    printf("Percentage: %.2f%%\n\n", student->percentage);
}

int main() {
    struct Student student;

    inputStudentDetails(&student);
    calculateResult(&student);
    displayResult(&student);

    return 0;
}
