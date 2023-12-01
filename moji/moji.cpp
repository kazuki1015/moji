#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* file;

   
    file = fopen("data.txt", "r");

    

   
    char c;
    while ((c = fgetc(file)) != EOF) {
        if (c == '1') {
            printf("*");
        }
        else if (c == '0') {
            printf(" ");
        }
        else if (c == '\n') {
            printf("\n");
        }
    }

    
    fclose(file);

    return 0;
}