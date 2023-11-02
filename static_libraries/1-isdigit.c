#include "main.h"

/**
 * _isdigit - check for a digit
 *@c : integer
 * Return: Always 0.
 */
int _isdigit(int c)
{
if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
{
return (1);

}

else
{

return (0);

}
}
