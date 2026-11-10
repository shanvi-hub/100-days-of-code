Q138: Print all enum names and integer values using a loop.

  #include <stdio.h>
  
enum Color {
    RED,
    YELLOW,
    GREEN,
    COLOR_COUNT 
};

int main() {
   
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("%s=%d ", colorNames[i], i);
    }
    printf("\n");

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
