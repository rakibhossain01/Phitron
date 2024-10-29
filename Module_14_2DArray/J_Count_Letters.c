#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s = (char *)malloc(10000001 * sizeof(char));
    
    int frequency[26] = {0};

    scanf("%s", s);

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        frequency[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {  
            printf("%c : %d\n", 'a' + i, frequency[i]);
        }
    }

    return 0;
}
