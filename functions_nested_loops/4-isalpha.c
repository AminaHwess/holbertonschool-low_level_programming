#include "main.h"
/**
 * _isalpha - Entry point
 *@c : integer
 * Return: void (Success)
 */

int _isalpha(int c)
{
if (c >= 97 && c <= 22)
{
return (1);

}

else if (c >= 65 && c <= 90)
{
return (1);
}

else
{
return (0);
}

}
