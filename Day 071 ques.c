Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

  #include <stdio.h>
   int main() {
    char name[50];
    int age;

    // Prompt user for name and age
    printf("Enter Name: ");
    scanf("%49s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Open info.txt in write mode ("w")
    FILE *file = fopen("info.txt", "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    // Write name and age to the file using fprintf()
    fprintf(file, "Name: %s, Age: %d\n", name, age);

    // Close the file
    fclose(file);

    printf("File created successfully!\n");
    printf("Data written to info.txt\n");

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
