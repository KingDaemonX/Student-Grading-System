# STUDENT GRADING SYSTEM CLI TOOL

This program is designed to calculate the final grade for each student based on their assignment grade, class attendance, test grade, exam grade, and attendance grade. The program accepts student information such as name, student ID, assignment grade, class attended, number of classes, number of students, test grade, student exam grade, and attendance grade as inputs.

## Prerequisites

To run this program, you need to have a C compiler installed on your machine, such as gcc or clang.

### How To Compile Student Grading System

    1. Open a terminal or command prompt.
    2. Navigate to the directory containing the program files.
    3. Run the following command to compile the program:
        Type **make build** to compile the program.
        Press Enter.

#### If Compilation Is Successful : 

To run the program, follow these steps:

    Type "make run" in the terminal.
    Press Enter.

- The program will start running and will prompt you to enter the number of students in the class and the information for each student.
- Once all the student information is entered, the program will calculate the final grade for each student and display it on the screen.

#### Inputs

The program accepts the following inputs for each student:

- Name (string)
- Student ID (integer)
- Assignment grade (integer, out of 100)
- Class attendance (integer)
- Total number of classes for the course (integer)
- Test grade (float, out of 100)
- Student exam grade (float, out of 100)
- Attendance grade (float, out of 100)

#### Outputs

The program will output the following for each student:

- Name (string)
- Student ID (integer)
- Assignment grade (integer, out of 100)
- Class attendance (integer)
- Test grade (float, out of 100)
- Student exam grade (float, out of 100)
- Attendance grade (float, out of 100)
- Final grade (float, calculated based on the weighted average of the assignment grade, class attendance, test grade, student exam grade, and attendance grade)

### EXAMPLE

````
Enter the number of students: 2

Enter information for student 1:
Name: John Doe
ID: 12345
Assignment grade: 80
Class attendance: 10
Total number of classes: 15
Test grade: 75.5
Student exam grade: 85.5
Attendance grade: 90

Enter information for student 2:
Name: Jane Smith
ID: 67890
Assignment grade: 90
Class attendance: 12
Total number of classes: 15
Test grade: 85.5
Student exam grade: 90
Attendance grade: 85

Final grades:
John Doe (ID: 12345): 82.75
Jane Smith (ID: 67890): 88.45

````

Note: Before running the program, make sure you have the latest version of GCC installed on your computer. If you don't have GCC installed, you can download it from the official GCC website.