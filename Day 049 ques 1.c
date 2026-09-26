Q97: Print the initials of a name.

  #include <stdio.h>
   int main(){

    char first, last;

    scanf("%c", &first);      

    while (getchar() != ' '); 

    scanf("%c", &last);      

    printf("%c.%c.", first, last);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
