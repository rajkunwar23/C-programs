#include <stdio.h>

#define MAX_SIZE 100

// Function to find the frequency of characters in the string
void findCharacterFrequency(const char *str)
 {
    int frequency[256] = {0}; // Assuming ASCII characters
    int i;

    // Count the frequency of each character in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        frequency[(int)str[i]]++;
    }

    // Display the frequency of characters
    printf("Character Frequency:\n");
    for (i = 0; i < 256; i++)
     {
        if (frequency[i] > 0)
        {
            printf("%c: %d\n", (char)i, frequency[i]);
        }
    }
}

int main()
 {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    // Remove the newline character from the end of the input
    if (str[strlen(str) - 1] == '\n')
     {
        str[strlen(str) - 1] = '\0';
    }

    findCharacterFrequency(str);

    return 0;
}
