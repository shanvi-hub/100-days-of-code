Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    // Open the file in read mode
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        // Track lines (count every newline character)
        if (ch == '\n') {
            lines++;
        }

        // Track words (sequence of non-space characters)
        if (isspace((unsigned char)ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n') {
        
    }

    if (characters > 0 && lines == 0) {
        lines = 1;
    } else if (characters > 0 && ch != '\n') {
        
    }
    
    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
