#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* file;
    char line[100];
    file = fopen("data.txt", "r");
    while (fgets(line, sizeof(line), file) != NULL) {
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == '1') {
                printf("*");
            }
            else if (line[i] == '0') {
                printf(" ");
            }
        }
        printf("\n");
    }

    fclose(file);

    return 0;
}