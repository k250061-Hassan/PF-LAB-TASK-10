#include <stdio.h>
#include <string.h>

void extractDomain(const char *email) {
    const char *atSymbol = strchr(email, '@');
    printf("Email: %s -> Domain: ", email);

    if (atSymbol != NULL && atSymbol[1] != '\0') {
        printf("%s\n", atSymbol + 1);
    } else {
        printf("Invalid email\n");
    }
}

int main() {
	
	char email[30];
	printf("Enter your Email: ");
	scanf("%s", email);
    extractDomain(email);
   
    return 0;
}
