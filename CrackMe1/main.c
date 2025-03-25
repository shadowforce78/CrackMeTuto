#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char password[20];
    int access_granted = 0;
    
    while (!access_granted) {
        printf("Enter the password: ");
        fgets(password, sizeof(password), stdin);
        // Remove the newline character from the input
        password[strcspn(password, "\n")] = 0;
        
        if (strcmp(password, "1234") == 0) {
            printf("Access granted\n");
            access_granted = 1;
        } else {
            printf("Access denied\n");
        }
    }
    
    return 0;
}