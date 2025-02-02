#include <stdio.h>
#include <string.h>

char S[1000001];

int main() {
    scanf("%s", S);

    int sum = 0;
    for (int i = 0; i < strlen(S); i++) {
        sum += S[i] - '0';  // Convert character to integer
    }

    printf("%d\n", sum);
    return 0;
}





