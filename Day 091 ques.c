Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

  #include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s1;

    printf("Name: ");
    scanf("%49s", s1.name);

    printf("Roll: ");
    scanf("%d", &s1.roll_no);

    printf("Marks: ");
    scanf("%d", &s1.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s1.name, s1.roll_no, s1.marks);

    return 0;

  
}


/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
