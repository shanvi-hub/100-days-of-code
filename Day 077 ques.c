Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>
 
int main() {
    FILE *inputFile, *outputFile;
    int ch;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
      
        fputc(toupper(ch), outputFile);
    }

   
    fclose(inputFile);
    fclose(outputFile);

    printf("File conversion completed successfully.\n");

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
