#include <stdio.h>
#include <stdlib.h>

// Define a structure to store student information

struct Student {
    char name[50];
    int id;
    float grades[5]; // Assuming 5 courses
};
// Function to input grades for a student
void enterGrades(struct Student *student) {
    printf("Enter grades for each course:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Course %d: ", i + 1);
        scanf("%f", &student->grades[i]);
    }
}

// Function to calculate and display the GPA

void calculateGPA(struct Student *student) {
    float total = 0.0;
    for (int i = 0; i < 5; ++i) {
        total += student->grades[i];
    }
    float gpa = total / 5.0;
    printf("GPA: %.2f\n", gpa);
}

int main() {
    struct Student student;
// Input student details
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter student ID: ");
    scanf("%d", &student.id);
 // Enter grades
enterGrades(&student);
 // Display grades
    printf("\n%s's Grades:\n", student.name);
    for (int i = 0; i < 5; ++i) {
        printf("Course %d: %.2f\n", i + 1, student.grades[i]);
    }
 // Calculate and display GPA
calculateGPA(&student);
  return 0;
}