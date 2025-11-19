#include <stdio.h>
#include <string.h>
#include <ctype.h>

int UpperCase(char *password){
    for(int i=0; password[i] != '\0'; i++){
        if(password[i] >= 'A' && password[i] <= 'Z') return 1;
    }
    return 0;
}

int Digit(char *password){
    for(int i=0; password[i] != '\0'; i++){
        if(password[i] >= '0' && password[i] <= '9') return 1;
    }
    return 0;
}

int Special_Character(char *password){
    for(int i=0; password[i] != '\0'; i++ ){
        if(password[i] == '!' || password[i] == '$' || password[i] == '@' || password[i] == '%' || password[i] == '#') return 1;
    }
    return 0;
}

int main(){

  
    char password[20];
    printf("Enter password: ");
    gets(password);

    if(strlen(password) < 8){
        printf("Password must be 8 characters long.");
    }
    else{

        if(!UpperCase(password)){
            printf("password must contain atleast 1 uppercase letter.");
        }
        else{
            if(!Digit(password)){
                printf("Password must contain atleast 1 digit.");
            }
            else{
               if(!Special_Character(password)){
                printf("Password must contain atleast 1 special character (!, @, #, $, %%)");
               }
               else{
                printf("Password Validated!");
               }
            }
        }
        
    }

    return 0;
}