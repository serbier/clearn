#include <stdio.h>

#define MAX 10000  // large enough buffer for multi-line input

void escape(char s[], const char t[]);
void unescape(char s[], const char t[]);

int main() {
    char input[MAX], escaped[MAX], unescaped[MAX];
    int c, i = 0;

    printf("Enter your text (Ctrl+D to end input):\n");

    // Read until EOF
    while ((c = getchar()) != EOF && i < MAX - 1) {
        input[i++] = c;
    }
    input[i] = '\0';  // null-terminate the string

    escape(escaped, input);
    printf("\nEscaped:\n%s\n", escaped);

    unescape(unescaped, escaped);
    printf("\nUnescaped:\n%s\n", unescaped);

    return 0;
}

void escape(char s[], const char t[]) {
    int i, j;
    for (i = 0, j = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\b':
                s[j++] = '\\';
                s[j++] = 'b';
                break;
            case '\\':
                s[j++] = '\\';
                s[j++] = '\\';
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}

void unescape(char s[], const char t[]) {
    int i, j;
    for (i = 0, j = 0; t[i] != '\0'; i++) {
        if (t[i] == '\\') {
            switch (t[++i]) {
                case 'n':
                    s[j++] = '\n';
                    break;
                case 't':
                    s[j++] = '\t';
                    break;
                case 'b':
                    s[j++] = '\b';
                    break;
                case '\\':
                    s[j++] = '\\';
                    break;
                default:
                    s[j++] = '\\';
                    s[j++] = t[i];
                    break;
            }
        } else {
            s[j++] = t[i];
        }
    }
    s[j] = '\0';
}
