#include <stdio.h>
#include <string.h>

int main()
{
    char input[100]; // Assuming a maximum input length of 100 characters
    printf("Enter a string: ");
    scanf("%s", input);

    // Calculate the length of the input string
    int length = strlen(input);

    // Reverse the string in-place
    for (int i = 0; i < length / 2; i++)
    {
        char temp = input[i];
        input[i] = input[length - i - 1];
        input[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", input);

    return 0;
}
