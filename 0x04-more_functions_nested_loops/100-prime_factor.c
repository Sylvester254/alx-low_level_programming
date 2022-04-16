#include <stdio.h>

long int func1(long int n)

{

    if (n == 1)

    {

        return(0);
    }

    int num = 2;

    while (n % num != 0)

        num++;

    printf("%d\n", num);

    func1(n / num);
}

int main(void)
{

    long int a;
    int s;

    a = 612852475143;

    s = func1(a);

    printf("%d", s);

    return 0;
}