#include <stdio.h>
#include <string.h>

void reverseSentence(const char *text) {
    if (*text == '\\0') {
        return;
    }
    reverseSentence(text + 1);
    putchar(*text);
}

int main(void) {
    char sentence[500];

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 1;
    }
    sentence[strcspn(sentence, "\\n")] = '\\0';

    printf("Reversed sentence: ");
    reverseSentence(sentence);
    putchar('\\n');

    return 0;
}
