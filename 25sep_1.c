#include <stdio.h> 

int main() {
    char sentence[100]; 
    int i, word_count = 0;

    printf("Enter a sentence: ");
    gets(sentence); 


    if (sentence[0] != '\0' && sentence[0] != ' ') {
        word_count = 1;
    }

  
    for (i = 0; sentence[i] != '\0'; i++) {
       
        if (sentence[i] == ' ' && sentence[i+1] != ' ' && sentence[i+1] != '\0') {
            word_count++;
        }
    }

    printf("The sentence has %d words.\n", word_count);

    return 0;
}