#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

// Define a struct for a student
struct Student {
    char name[MAX_NAME_LENGTH];
    int id;
    int assignmentGrade;
    int classAttended;
    int numClasses;
    float testGrade;
    float studentExamGrade;
    float attendanceGrade;
    float finalGrade;
};

// Define a function to calculate the final grade
float calculateFinalGrade(int assignmentGrade, int classAttended, int numClasses, float testGrade, float studentExamGrade, float attendanceGrade) {
    float finalGrade = (assignmentGrade * 0.1) + (classAttended * 1.0 / numClasses * 0.1) + (testGrade * 0.3) + (studentExamGrade * 0.5) + (attendanceGrade * 0.1);
    return finalGrade;
}

// Define a function to print out the information for a student
void printStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    printf("Assignment Grade: %d\n", student.assignmentGrade);
    printf("Class Attended: %d\n", student.classAttended);
    printf("Number of Classes: %d\n", student.numClasses);
    printf("Test Grade: %.2f\n", student.testGrade);
    printf("Student Exam Grade: %.2f\n", student.studentExamGrade);
    printf("Attendance Grade: %.2f\n", student.attendanceGrade);
    printf("Final Grade: %.2f\n\n", student.finalGrade);
}

int main() {
    struct Student students[MAX_STUDENTS];
    char courseName[50];
    int numStudents,level;

    printf("Enter Course Name : ");
    scanf(" %49[^\n]", courseName);
    
    printf("Enter Student Level : ");
    scanf(" %d", &level);
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Loop through each student and get their information
    for (int i = 0; i < numStudents; i++) {
        printf("\n\n===== STUDENT %d =====\n\n", i+1);

        printf("Enter the student's name: ");
        scanf("%s", students[i].name);

        printf("Enter the student's ID: ");
        scanf("%d", &students[i].id);

        printf("Enter the assignment grade (out of 100): ");
        scanf("%d", &students[i].assignmentGrade);

        printf("Enter the number of classes attended: ");
        scanf("%d", &students[i].classAttended);

        printf("Enter the total number of classes: ");
        scanf("%d", &students[i].numClasses);

        printf("Enter the test grade (out of 100): ");
        scanf("%f", &students[i].testGrade);

        printf("Enter the student exam grade (out of 100): ");
        scanf("%f", &students[i].studentExamGrade);

        printf("Enter the attendance grade (out of 100): ");
        scanf("%f", &students[i].attendanceGrade);

        // Calculate the final grade
        students[i].finalGrade = calculateFinalGrade(students[i].assignmentGrade, students[i].classAttended, students[i].numClasses, students[i].testGrade, students[i].studentExamGrade, students[i].attendanceGrade);
    }

    // Print out the information for each student
    printf("\n\n===== %s STUDENT GRADES FOR %d LEVEL =====\n\n", courseName, level);
    for (int i = 0; i < numStudents; i++) {
    printStudent(students[i]);
    }
    return 0;
}