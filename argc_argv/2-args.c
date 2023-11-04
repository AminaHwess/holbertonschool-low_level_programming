#include <stdio.h>

/**
 * main - prints the name of a file
 * @argv: string
 * @argc: int
 * Return: always 0.
 */

int main(int argc, char *argv[])
{

int i;

while (i < argc )

{ 
    printf("%s\n" , argv[i]);
    i++;
    
    }


return (0);
}