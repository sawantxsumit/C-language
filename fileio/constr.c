#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
    char str1[50], str2[50], result[100];

    printf("Enter the first string: ");
    fgets(str1, 50, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline if entered

    printf("Enter the second string: ");
    fgets(str2, 50, stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline if entered

    // Concatenate the strings manually:
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[j] = str1[i];
        i++;
        j++;
    }

    while (str2[i - strlen(str1)] != '\0') {
        result[j] = str2[i - strlen(str1)];
        i++;
        j++;
    }

    result[j] = '\0'; // Add null terminator at the end

    printf("Concatenated string: %s\n", result);

    return 0;
}
