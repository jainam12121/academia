# Upload Attendance 
#include <stdio.h> 
#include <string.h> 
struct Student { 
    char name[50]; 
    int isPresent; // 1 for present, 0 for absent 
}; 
int main() { 
    int numStudents; 
    printf("Enter the number of students: "); 
    scanf("%d", &numStudents); 
    struct Student students[numStudents]; 
    for (int i = 0; i < numStudents; i++) { 
        printf("Enter the name of student %d: ", i + 1); 
        scanf("%s", students[i].name); 
        students[i].isPresent = 0; // Initialize as absent 
    } 
    printf("Mark attendance:\n"); 
    for (int i = 0; i < numStudents; i++) { 
        printf("Is %s present? (1 for yes, 0 for no): ", students[i].name); 
        scanf("%d", &students[i].isPresent); 
    } 
    printf("\nAttendance Records:\n"); 
    for (int i = 0; i < numStudents; i++) { 
                                 (Permanently Affiliated to University of Mumbai)  
                                DEPARTMENT OF COMPUTER ENGINEERING 
12 
 
        printf("%s: %s\n", students[i].name, students[i].isPresent ? "Present" : "Absent"); 
    } 
    return 0; 
} 
 
Description: 
 
 Struct Student (Name, isPresent) function allows an Attendance to be uploaded with a 
Name and isPresent as variable of student. 
 
#Search Filter Student Attendance 
#include <stdio.h> 
#include <string.h> 
struct Student { 
    char name[50]; 
    int isPresent; // 1 for present, 0 for absent 
}; 
void searchAttendance(struct Student students[], int numStudents, char searchName[]) { 
    int found = 0; // Flag to track if the student is found 
    for (int i = 0; i < numStudents; i++) { 
        if (strcmp(students[i].name, searchName) == 0) { 
            found = 1; 
  printf("%s's attendance: %s\n", students[i].name, students[i].isPresent ? "Present" : 
"Absent"); 
            break; // Exit the loop once the student is found 
        } 
    } 
    if (!found) { 
        printf("Student with name '%s' not found in the attendance records.\n", searchName); 
    } 
} 
int main() { 
    int numStudents; 
    printf("Enter the number of students: "); 
    scanf("%d", &numStudents); 
    struct Student students[numStudents]; 
    for (int i = 0; i < numStudents; i++) { 
        printf("Enter the name of student %d: ", i + 1); 
        scanf("%s", students[i].name); 
        students[i].isPresent = 0; // Initialize as absent 
    } 
    printf("Mark attendance:\n"); 
    for (int i = 0; i < numStudents; i++) { 
        printf("Is %s present? (1 for yes, 0 for no): ", students[i].name); 
        scanf("%d", &students[i].isPresent); 
    } 
    char searchName[50]; 
    printf("\nEnter the name of the student you want to search for: "); 
    scanf("%s", searchName); 
    searchAttendance(students, numStudents, searchName); 
                                 (Permanently Affiliated to University of Mumbai)  
                                DEPARTMENT OF COMPUTER ENGINEERING 
13 
 
    return 0; 
}
