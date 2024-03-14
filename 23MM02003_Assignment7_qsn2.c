#include<stdio.h>
int main()
{
    char real[100], updated[100];
    int i,j;
    printf("Enter a string: ");
    gets(real);
    for (i = 0; real[i] != '\0'; i++){
        if((real[i]>='a' && real[i]<='z')|| real[i]>='A'&& real[i]<='Z'){
            updated[j++] = real[i];
        }



    }
    updated[j] = '\0';;
    printf("The updated string is %s",updated);
    return 0;

}