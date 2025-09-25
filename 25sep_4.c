#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, is_palindrome = 1; 

    printf("Enter a string: ");
    gets(str);

    length = strlen(str); 

   
    for (i = 0; i < length / 2; i++) {

        if (str[i] != str[length - 1 - i]) {
            is_palindrome = 0; 
            break; 
        }
    }

    if (is_palindrome == 1) {
        printf("The string IS a palindrome.\n");
    } else {
        printf("The string IS NOT a palindrome.\n");
    }

    return 0;
}