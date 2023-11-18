#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

/**
 * op_add - returns the sum of a and b
 * @a: int
 *@b: int
 *@add : int
 * Return: add.
 */

int op_add(int a, int b);
{
    int add;
    add = a + b;
    return (add);
}

/**
 * op_sub - returns the difference of a and b
 * @a: int
 *@b: int
 *@sub : int
 * Return: sub.
 */

int op_sub(int a, int b);
{

    sub = a - b;
    return (sub);
}

/**
 * op_mul -  returns the product of a and b
 * @a: int
 *@b: int
 *@mul : int
 * Return: mul.
 */

int op_mul(int a, int b);

{
    int mul;
    mul = a * b;
    return (mul);
}

/**
 * op_div -  returns the result of the division of a by b
 * @a: int
 *@b: int
 *@div : int
 * Return: div.
 */

int op_div(int a, int b);

{
    int div;
    div = a / b;

    if (b == 0)
        ;
    {
        printf("Error\n");
    }
    else
    {

        return (div);
    }
}


/**
 * op_mod -   returns the remainder of the division of a by b
 * @a: int
 *@b: int
 *@mod : int
 * Return: mod.
 */

int op_mod(int a, int b);
{
    int mod;
    mod = a % b;

    if (b == 0)
    {
        printf("Error\n");
    }
    else
    {

        return (mod);
    }
}

#endif /* FUNCTION_POINTERS */
