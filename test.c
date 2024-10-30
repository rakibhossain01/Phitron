#include <stdio.h>
#include <string.h>

int main() {
    char s[10000001];
    int frequency[26] = {0};


    scanf("%s", s);

    // Calculate the frequency of each letter in the string
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        frequency[s[i] - 'a']++;  // Map 'a' to index 0, 'b' to index 1, etc.
    }

    // Print the frequency of each letter that appears in the string
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {  // Only print letters that appear in the string
            printf("%c : %d\n", 'a' + i, frequency[i]);
        }
    }

    return 0;
}
