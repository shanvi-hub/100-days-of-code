Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    JAN, FEB, MAR, APR, MAY, JUN, 
    JUL, AUG, SEP, OCT, NOV, DEC, 
    INVALID
} Month;

Month get_month_from_string(const char *str) {
    char uppercase[4];
    
    for (int i = 0; i < 3 && str[i] != '\0'; i++) {
        uppercase[i] = toupper((unsigned char)str[i]);
    }
    uppercase[3] = '\0';

    if (strcmp(uppercase, "JAN") == 0) return JAN;
    if (strcmp(uppercase, "FEB") == 0) return FEB;
    if (strcmp(uppercase, "MAR") == 0) return MAR;
    if (strcmp(uppercase, "APR") == 0) return APR;
    if (strcmp(uppercase, "MAY") == 0) return MAY;
    if (strcmp(uppercase, "JUN") == 0) return JUN;
    if (strcmp(uppercase, "JUL") == 0) return JUL;
    if (strcmp(uppercase, "AUG") == 0) return AUG;
    if (strcmp(uppercase, "SEP") == 0) return SEP;
    if (strcmp(uppercase, "OCT") == 0) return OCT;
    if (strcmp(uppercase, "NOV") == 0) return NOV;
    if (strcmp(uppercase, "DEC") == 0) return DEC;
    
    return INVALID;
}

void print_days(Month month) {
    switch (month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month entered.\n");
            break;
    }
}

int main() {
    char input[10];
    
    if (scanf("%9s", input) == 1) {
        Month selected_month = get_month_from_string(input);
        print_days(selected_month);
    }
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
