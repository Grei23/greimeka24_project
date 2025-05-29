#include <stdio.h>
#include <stdlib.h>

int digitConv(int num)
{
    int digit, reversed = 0;
    while (num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}
int findRev(int digit, int reversed)
{
    int rev;
    rev = reversed * 10 + digit;
    return rev;
}
int main()
{
    int num, reversed;
    scanf("%d", &num);

    reversed = digitConv(num);
    num /= 10;

    printf("%d", reversed);
    return 0;
}