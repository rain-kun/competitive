#include <stdio.h>

int main()
{
    // Syntax is same as getchar()
    char c = getchar_unlocked();

    putchar_unlocked(c);

    return 0;
}
