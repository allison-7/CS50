#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n = 0;
    char ch = '#';
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    char *value_to_print = (char *) malloc(n * sizeof(char)); // Create dynamic array
    int max_width = n;
    for (int i = 0; i < n; i++)
    {
        strncat(value_to_print, &ch, 1);
        printf("%*s\n", max_width, value_to_print);
    }
}
