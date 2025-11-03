//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 #include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256]; // store last index of every character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; i < n; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1; // move start after duplicate
        }
        lastIndex[(int)s[i]] = i;
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d", maxLen);
    return 0;
}
