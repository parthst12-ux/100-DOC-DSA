#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int isDigitLog(char *log) {
    while (*log != ' ') log++;
    return isdigit(*(log + 1));
}

int cmp(const void *a, const void *b) {
    char *x = *(char **)a;
    char *y = *(char **)b;

    char *cx = strchr(x, ' ') + 1;
    char *cy = strchr(y, ' ') + 1;

    int r = strcmp(cx, cy);
    return r ? r : strcmp(x, y);
}

int main() {
    char *logs[] = {
        "dig1 8 1 5 1",
        "let1 art can",
        "dig2 3 6",
        "let2 own kit dig",
        "let3 art zero"
    };

    int n = 5;
    char *let[10], *dig[10];
    int l = 0, d = 0;

    for(int i=0;i<n;i++)
        isDigitLog(logs[i]) ? (dig[d++] = logs[i]) : (let[l++] = logs[i]);

    qsort(let, l, sizeof(char*), cmp);

    for(int i=0;i<l;i++) printf("%s\n", let[i]);
    for(int i=0;i<d;i++) printf("%s\n", dig[i]);

    return 0;
}

