//
// Created by 35861 on 24-10-1.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void strlower(char *a) {
    for (int i = 0; a[i]; i++) {
        a[i] = tolower(a[i]);
    }
}

int main() {
    char destination[1000001], source[11];
    char *p, *q;
    bool flag = false;
    int ans = 0, ans1 = -1;

    fgets(source, sizeof(source), stdin);
    fgets(destination, sizeof(destination), stdin);

    source[strcspn(source, "\n")] = 0;
    destination[strcspn(destination, "\n")] = 0;

    strlower(destination);
    strlower(source);

    int len = strlen(source);
    p = destination;

    while ((q = strstr(p, source)) != NULL) {
        if ((q == destination || *(q - 1) == ' ') &&
            (*(q + len) == '\0' || *(q + len) == ' ')) {
            ans++;
            if (!flag) {
                flag = true;
                ans1 = q - destination;
            }
        }
        p = q + len;
    }

    if (flag)
        printf("%d %d\n", ans, ans1);
    else
        printf("%d\n", ans1);

    return 0;
}