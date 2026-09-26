Q95: Check if one string is a rotation of another.

  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>

int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    char *temp = (char *)malloc(len1 * 2 + 1);
    if (temp == NULL) {
        return 0; 
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    char *ptr = strstr(temp, str2);

    free(temp);

    return ptr != NULL;
}

 int main() {
    char str1[] = "abcde";
    char str2[] = "deabc";

    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
   
}


/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
