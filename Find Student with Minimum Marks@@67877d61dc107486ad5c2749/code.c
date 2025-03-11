#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Read the number of students
    scanf("%d", &n);
    
    struct Student students[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }

    // Initialize min_index to track the student with the lowest marks
    int min_index = 0;
    
    // Find the student with the lowest marks
    for (int i = 1; i < n; i++) {
        if (students[i].marks < students[min_index].marks) {
            min_index = i;
        }
    }

    // Output the student with the minimum marks
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", 
           students[min_index].rollno, students[min_index].name, students[min_index].marks);

    return 0;
}
