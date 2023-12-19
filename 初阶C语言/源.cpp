#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Fun(int n)
{
    if (n < 3)
    {
        return n;
    }
    else
    {
        return Fun(n - 1) + (n - 3);
    }
}
int main()
{
    int n = 0;
    while (scanf("%d", &n) && n)
    {
        int ret = Fun(n);
        printf("%d\n", n);
    }
    return 0;
}
