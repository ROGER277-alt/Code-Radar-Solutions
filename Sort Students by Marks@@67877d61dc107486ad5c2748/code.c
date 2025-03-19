#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    int marks;
};

// Comparison function for sorting based on marks
int compareMarks(const void *a, const void *b) {
    // Cast the void pointers to the Student pointers
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    
    // Return the comparison result (ascending order)
    return studentA->marks - studentB->marks;
}

int main() {
    int n;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student data (name and marks)
    for (int i = 0; i < n; i++) {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Sort the students by marks using qsort
    qsort(students, n, sizeof(struct Student), compareMarks);

    // Print the sorted list of students
    printf("\nSorted list of students by marks:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}