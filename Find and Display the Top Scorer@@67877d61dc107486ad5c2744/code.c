// Your code here...
#include<stdio.h>
struct students {
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    int N;
    scanf("No of students: %d",N);
    for(int i=0;i<=n;i++){
        scanf("%d %d %d",&students[i].rollno, students[i]name ,students[i]marks);
        if(i==0|| students[i]> topscorer.marks){topscorer = students[i];}
    }
    printf("topscorer: Roll Number: %d, Name: %s, Marks: %.2f",topscorer.rollno, topscorer.name, topscorer.marks)
    return 0;
}