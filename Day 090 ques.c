Q140: Define a struct with enum Gender and print person's gender.

  #include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[50];

    if (scanf("%s", input) != 1) {
        return 1;
    }

    char *val = strchr(input, '=');
    if (val != NULL) {
        val++;
    } else {
        val = input;
    }

    if (strcmp(val, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(val, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else {
        p.gender = OTHER;
    }

    if (p.gender == MALE) {
        printf("Male\n");
    } else if (p.gender == FEMALE) {
        printf("Female\n");
    } else {
        printf("Other\n");
    }

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
