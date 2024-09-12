//
// Created by 35861 on 24-9-18.
//
#include <stdio.h>

int main() {
    char *str = "#include <stdio.h>%c%cint main() {%c    char *str = %c%s%c;%c    printf(str, 10, 10, 10, 34, str, 34, 10);%c    return 0;%c}%c";
    printf(str, 10, 10, 10, 34, str, 34, 10);
    return 0;
}
