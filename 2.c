#include <stdio.h>

int indexOf(char text[], char word[]) 
{
    int textLength = 0;
    int targetLength = 0;

    while (text[textLength] != '\0') {
        textLength++;
    }

    while (word[targetLength] != '\0') {
        targetLength++;
    }

    int foundIndex = -1;
    for (int i = 0; i <= textLength - targetLength; i++) {
        int match = 1;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != word[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            foundIndex = i;
            break;
        }
    }

    return foundIndex;
}

int main ()
{
    int result = indexOf("the cat sat on the mat", "cat");
    printf("The word is under number: %d\n", result);
    return 0;
}
