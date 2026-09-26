Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main(){

    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
          
            int j = i + 1;
            while (name[j] != '\0' && name[j] != '\n')
                j++;

            if (j == i + 1)
                continue;

            int k = i + 1;
            while (name[k] != '\0' && name[k] != ' ' && name[k] != '\n')
                k++;

            if (name[k] == '\n' || name[k] == '\0')
                break;

            printf("%c.", name[i + 1]);
        }
    }

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            int j = i + 1;
            while (name[j] != '\0' && name[j] != ' ')
                j++;

            if (name[j] == '\0' || name[j] == '\n')
            {
                printf(" %.*s", j - i - 1, name + i + 1);
                break;
            }
        }
    }

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
