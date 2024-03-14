#include <stdio.h>
int Length(char str[]) {
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


int main() {
    char str[100];
    int i, flag = 0;

    printf("Enter the string: ");
    gets(str);

    int len=Length(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("String is a palindrome.\n");
    } else {
        printf("String is not a palindrome.\n");
    }

    return 0;
}
