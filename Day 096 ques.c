Q146: Create Employee structure with nested Date structure for joining date and print details.

  #include <stdio.h>

 struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    printf("Enter Name, ID, and Joining Date (DD MM YYYY): ");
    scanf("%s %d %d %d %d", emp.name, &emp.id, 
          &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
           emp.name, emp.id, 
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;

  
}


/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
