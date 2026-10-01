Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

  #include <stdio.h>
   int main() {
  
    char input[12];
    int day, year;
  
    printf("Enter date (dd/04/yyyy): ");
    scanf("%11s", input);

    sscanf(input, "%d/%*d/%d", &day, &year);

    printf("Output: %02d-Apr-%d\n", day, year);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
