#include <stdio.h>

int main() {
    int n, marks;
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;
    int highest = 0, lowest = 100;
    int sum = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of students.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("Enter marks of student %d (0-100): ", i);
        scanf("%d", &marks);

        if (marks < 0 || marks > 100) {
            printf("Invalid marks! Please enter marks between 0 and 100.\n");
            i--;
            continue;
        }

        sum += marks;

        if (marks > highest)
            highest = marks;

        if (marks < lowest)
            lowest = marks;

        // Assign grades
        if (marks >= 90)
            gradeA++;
        else if (marks >= 75)
            gradeB++;
        else if (marks >= 60)
            gradeC++;
        else if (marks >= 40)
            gradeD++;
        else
            gradeF++;
    }

    average = (float)sum / n;

    printf("\n========== Grade Analysis ==========\n");
    printf("Number of students with Grade A: %d\n", gradeA);
    printf("Number of students with Grade B: %d\n", gradeB);
    printf("Number of students with Grade C: %d\n", gradeC);
    printf("Number of students with Grade D: %d\n", gradeD);
    printf("Number of students with Grade F: %d\n", gradeF);

    printf("\nHighest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
