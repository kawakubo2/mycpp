#include <cstdio>

int main() {
    long double x = 1.234567890123456789012345678e308;
    printf("long double number: %Le %Lf %Lg\n", x, x, x);
    double an = 6.0221409e23;
    printf("Avogadro's Number: %le %lf %lg\n", an, an, an);
    float hp = 9.75;
    printf("Hogwarts' Platform: %e %f %g\n", hp, hp, hp);
}
