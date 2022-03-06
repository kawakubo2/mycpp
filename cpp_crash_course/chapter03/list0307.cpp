#include <stdio.h>

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    char *upper_ptr = &upper[0];
    printf("%c\n", *upper_ptr);

    *(lower + 3) = 'd';
    *(upper + 3) = 'D';

    printf("lower=%s\n", lower);
    printf("upper=%s\n", upper);

    printf("%c\n", *(lower + 3));
    printf("%c\n", *(upper + 3));
}
