Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
#include <stdlib.h>

int main() {
    char source_file[100], dest_file[100];
    FILE *src, *dst;
    int ch;

    printf("Enter the source filename: ");
    scanf("%s", source_file);

    printf("Enter the destination filename: ");
    scanf("%s", dest_file);

    src = fopen(source_file, "r");
    if (src == NULL) {
        printf("Error: Could not open source file '%s'.\n", source_file);
        return 1;
    }

    dst = fopen(dest_file, "w");
    if (dst == NULL) {
        printf("Error: Could not open destination file '%s'.\n", dest_file);
        fclose(src);
        return 1;
    }
  
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("File copied successfully to %s.\n", dest_file);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
