Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    file = fopen("text.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file text.txt\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
      
        if (isalpha(ch)) {
          
            char lower_ch = tolower(ch);

            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
                lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
               
                consonants++;
            }
        }
    }

    fclose(file);
  
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
