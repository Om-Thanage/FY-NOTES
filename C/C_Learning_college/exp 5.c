//16010123217 Om Thanage
#include <stdio.h>
#include <string.h>

int main() {
    // Declare an array to store the input string
    char str[100];

    // Prompt the user to input the string
    printf("String: ");

    // Read the string until a newline character is encountered
    scanf("%[^\n]", str);  // Read until newline character

    // Declare an array to store the input substring
    char SubString[100];

    // Prompt the user to input the substring
    printf("\nSubstring: ");

    // Read the substring until a newline character is encountered
    scanf(" %[^\n]", SubString);  // Notice the space before %[^\n]

    // Find the substring in the string
    char *result;
    result = strstr(str, SubString);

    // Check if the substring is found
    if (result == NULL)
        printf("\nIndex: -1\n");
    else
        // Print the index of the first occurrence of the substring in the string
        printf("\nIndex: %d\n", (int)(result - str));

    return 0;
}

//16010123217 Om Thanage
/*#include <stdio.h>
#include <string.h>

int main() {
    // Declare arrays to store the input strings
    char str1[100];
    char str2[100];

    // Prompt the user to input the strings
    printf("String 1: ");
    scanf("%s", str1);

    printf("String 2: ");
    scanf("%s", str2);

    // Check if the lengths of the strings are different
    if (strlen(str1) != strlen(str2)) {
        printf("No\n");
        return 0;
    }

    // Concatenate str1 with itself to check for rotation
    strcat(str1, str1);

    // Check if str2 is a substring of the concatenated str1
    if (strstr(str1, str2) != NULL)
        printf("Yes\n"); // str2 is a rotation of str1
    else
        printf("No\n"); // str2 is not a rotation of str1

    return 0;
}
*/

//16010123217 Om Thanage
/*#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");

    // Use scanf to read the string until a newline character is encountered
    scanf("%[^\n]", str);  // Read until newline

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Toggle the case of alphabetic characters
        if (islower(str[i])) {
            str[i] = toupper(str[i]);  // Convert lowercase to uppercase
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);  // Convert uppercase to lowercase
        }
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}*/













