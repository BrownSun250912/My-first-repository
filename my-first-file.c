#include <stdio.h>
int func(int n);
int func(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * func(n - 1);
    }
}
int main()
{
    int num, des;
    printf("This program is to give the value of n!\n");
    printf("So now give me the number you want to compute.");

    scanf("%d", &num);

    des = func(num);

    printf("%d! is %d", num, des);
}