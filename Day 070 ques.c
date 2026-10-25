Q120: Write a program to take a string input. Change it to sentence case.

  #include <stdio.h>
  #include <ctype.h>

void toTitleCase(char *str) {
    int i = 0;
    int newWord = 1; 

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            newWord = 1; // 
        } else if (newWord) {
            if (isalpha(str[i])) {
                str[i] = toupper(str[i]);
                newWord = 0; 
            }
        } else {
            
        }
        i++;
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
   
    fgets(str, sizeof(str), stdin); 

    toTitleCase(str);

    printf("Output: %s", str);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
