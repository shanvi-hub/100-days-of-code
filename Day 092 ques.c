Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
   
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %49[^\n]", students[i].name); 
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    printf("--------------------------------------------------\n");
    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-20s %-15d %-10.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    printf("--------------------------------------------------\n");

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
