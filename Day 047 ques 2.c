Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
 int main() {
  
    char sentence[100];
    char word[50];
    char longestWord[50] = "";
    int position = 0;
    int charsRead;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    while (sscanf(sentence + position, "%s%n", word, &charsRead) == 1) {
        if (strlen(word) > strlen(longestWord)) {
            strcpy(longestWord, word);
        }
        position += charsRead;
    }

    printf("Output: %s\n", longestWord);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
