 #include "main.h"

/**
 * print_sign - Prints sign
 * @n: Variable
 * Return: Retruns 0
 */

int print_sign(int n)
{
switch ((int) (n > 0))
{

case 1:
_putchar('+');
return (1);
break;

case  0:
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}

}
return (0);
}
