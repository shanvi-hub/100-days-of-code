Q96: Reverse each word in a sentence without changing the word order.

  #include <stdio.h>
  #include <string.h>

void reverse(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char* word_start = str;
    char* temp = str;

    while (*temp) {
        if (*temp == ' ') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }
    
    reverse(word_start, temp - 1);

    printf("Output: %s\n", str);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
