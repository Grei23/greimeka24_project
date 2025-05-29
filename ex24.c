#include <stdio.h>
#include <stdlib.h>

void readArray(double n[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%lf", &n[i]);
    }
}
void reverseArray(double n[], int size)
{
    int j = size - 1;
    double a;
    for (int i = 0; i < size / 2; i++)
    {
        a = n[i];
        n[i] = n[j];
        n[j] = a;
        j--;
    }
}
int main()
{
    int size;
    printf("\nEnter size of the array: ");
    scanf("%d", &size);
    double num[size];
    readArray(num, size);
    printf("\norder of numbers: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.1lf ", num[i]);
    }
    reverseArray(num, size);
    printf("\nreverse order of numbers: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.1lf ", num[i]);
    }

    return 0;
}