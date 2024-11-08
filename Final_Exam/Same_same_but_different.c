#include <stdio.h>
#include <string.h>

int main() {
    char s[101],t[101],r[101];
    int len,o= 0;

    scanf("%s %s %s",s,t,r);

    len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == t[i] && t[i] == r[i]) {
            continue;
        } else if (s[i] == t[i] || t[i] == r[i] || s[i] == r[i]) {
            o += 1;
        } else {
            o += 2;
        }
    }

    printf("%d\n",o);

    return 0;
}
