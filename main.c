#include <stdio.h>

int main() {
    int num_students, i;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    int scores[num_students];
    for (i = 0; i < num_students; i++) {
        printf("Enter the score for student %d: ", i+1);
        scanf("%d", &scores[i]);
    }

    printf("\nGrades:\n");
    for (i = 0; i < num_students; i++) {
        if (scores[i] >= 90) {
            printf("Student %d: A\n", i+1);
        } else if (scores[i] >= 80) {
            printf("Student %d: B\n", i+1);
        } else if (scores[i] >= 70) {
            printf("Student %d: C\n", i+1);
        } else if (scores[i] >= 60) {
            printf("Student %d: D\n", i+1);
        } else {
            printf("Student %d: F\n", i+1);
        }
    }

    return 0;
}
