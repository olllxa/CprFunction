#include <stdio.h>
#include <string.h>

int indexOf(char text[], char word[]) 
{
    int wordCount = 0; 
    int i = 0;

    while (text[i] != '\0') {
        while (text[i] == ' ') {
            i++;
        }
        if (text[i] == '\0') break;

        wordCount++; 

        int j = 0;
        int k = i;
        while (word[j] != '\0' && text[k] != '\0' && text[k] == word[j]) {
            k++;
            j++;
        }

        if (word[j] == '\0' && (text[k] == ' ' || text[k] == '\0')) {
            return wordCount;  
        }

        while (text[i] != ' ' && text[i] != '\0') {
            i++;
        }
    }

    return -1;  
}

int main()
{
    int result = indexOf("the cat sat on the mat", "cat");
    printf("The word is under number: %d\n", result);
    return 0;
}
