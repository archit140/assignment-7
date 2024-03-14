#include<stdio.h>
int main(){
    
    char str[100], ch;
    int i, frequency = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (ch == str[i]) {
            frequency++;
        }
    }

    printf("Frequency of %c is: %d\n", ch, frequency);

    return 0;
}

