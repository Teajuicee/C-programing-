#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], longest_word[50];
    int i = 0, current_len = 0, max_len = 0, start_index = 0, longest_start_index = 0;

    printf("Enter a sentence: ");
    gets(sentence);


    while (sentence[i] != '\0') {

        if (sentence[i] == ' ' || sentence[i] == '\0') {

            if (current_len > max_len) {
                max_len = current_len;
                longest_start_index = start_index; 
            }
            current_len = 0; 
            start_index = i + 1; 
        } else {
            current_len++; 
        }
        i++;
    }
    

    if (current_len > max_len) {
        max_len = current_len;
        longest_start_index = start_index;
    }


    strncpy(longest_word, sentence + longest_start_index, max_len);
    longest_word[max_len] = '\0'; 

    printf("The longest word is: %s\n", longest_word);
    
    return 0;
}