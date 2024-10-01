// turn wwwrrrttt into w3r3t3                
#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    printf("Enter a string: ");
    scanf("%s", s); // No need for & with arrays

    int len = strlen(s);
    char a = s[0];
    int count = 1;

    for (int i = 1; i < len; i++) {
        if (a == s[i]) {
            count++;
        } else {
            printf("%c%d", a, count);
            a = s[i];
            count = 1;
        }
    }

    // Print the last character and its count
    printf("%c%d", a, count);

    return 0;
}