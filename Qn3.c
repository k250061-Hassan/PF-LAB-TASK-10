#include <stdio.h>
#include <string.h>

int main(){

    char text[] = "Hello World 123! Programming is fun.";
    int vowels = 0, letters = 0, consonants = 0, digits = 0, spaces = 0, special = 0;

    for(int i=0; text[i] != '\0'; i++){

        if(text[i] >= '0' && text[i] <= '9') digits++;
        if(text[i] == ' ') spaces++;
        if((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
            letters++;
        }
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U'){
            vowels++;
        }
        
    }
    special = strlen(text)-letters-digits-spaces;
    consonants = strlen(text)-vowels-digits-spaces-special;

    printf("=====STATISTICS=====\n");
    printf("Total Characters: %d\n", strlen(text));
    printf("Digits: %d\n", digits);
    printf("Vowels: %d\n", vowels);
    printf("Spaces: %d\n", spaces);
    printf("Consonants = %d\n", consonants);


    return 0;
}