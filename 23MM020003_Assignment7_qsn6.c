#include<stdio.h>

int main() {
    char real[100], sub[100];
    int i, j, found = 0;

    printf("Enter the real string: ");
    gets(real);

    printf("Enter the substring you want to search: ");
    gets(sub);

    for (i = 0; real[i] != '\0'; i++) {
        found = 1; 

        for (j = 0; sub[j] != '\0'; j++) {
            if (real[i + j] != sub[j]) {
                found = 0; 
                break; 
            }
        }

        if (found == 1) {
            break; 
        }
    }

    if (found == 1) {
        printf("Substring '%s' is present in string '%s'\n", sub, real);
    } else {
        printf("Substring '%s' is not present in string '%s'\n", sub, real);
    }

    return 0;
}
