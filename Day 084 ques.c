Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

  #include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    UNKNOWN
} Status;

Status get_status_from_string(const char *str) {
    if (strcmp(str, "SUCCESS") == 0) return SUCCESS;
    if (strcmp(str, "FAILURE") == 0) return FAILURE;
    if (strcmp(str, "TIMEOUT") == 0) return TIMEOUT;
    return UNKNOWN;
}

int main() {
    char input[20];
    
    if (scanf("%19s", input) != 1) {
        return 1;
    }
    
    Status current_status = get_status_from_string(input);
    
    switch (current_status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
            break;
    }
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
