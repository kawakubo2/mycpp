#include <cstdio>


char read_from(char *str, int pos, int size); 
void write_to(char *str, int pos, int size, char c);
char read_from(char *str, int pos, int size) {
    if (pos >= 0 && pos < size) {
        return str[pos];
    }
    return '\0';
}

void write_to(char *str, int pos, int size, char c) {
    if (pos >= 0 && pos < size && c >= 'A' && c <= 'Z') {
        str[pos] = c;
    }
}

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    printf("read_from(lower, 2, 5): %c\n", read_from(lower, 2, 5));
    write_to(upper, 3, 5, 'D');
    printf("upper[3]:%c\n", upper[3]);
}