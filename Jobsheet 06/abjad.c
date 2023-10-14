#include <stdio.h>

int main() {
    char alfabet;

    alfabet = 'A';

    do {
        printf("%c", alfabet);
        alfabet++;
    } while (alfabet <= 'Z');

    return 0;
}
