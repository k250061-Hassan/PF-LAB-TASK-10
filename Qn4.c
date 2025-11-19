#include<stdio.h>
#include <string.h>

int main(){

    char text[100], encrypted[100], decrypted[100];
    
    printf("Enter Text: ");
    gets(text);

    printf("Encrypted message: ");
    for(int i=0 ; text[i] != '\0'; i++){
        encrypted[i] = text[i] + 3;
        if(text[i] == ' ') encrypted[i] = ' ';
        printf("%c", encrypted[i]);
    }
    printf("\nDecrypted message: ");
    for(int i=0 ; text[i] != '\0'; i++){
        decrypted[i] = encrypted[i] - 3;
        if(encrypted[i] == ' ') decrypted[i] = ' ';
        printf("%c", decrypted[i]);
    }



    return 0;
}