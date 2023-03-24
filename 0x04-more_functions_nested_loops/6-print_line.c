#include "main.h"

/**
 * print_line - Prints a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
    int i;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
            _putchar('_');
    }
    _putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);

    return (0);
}

