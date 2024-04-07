#include <stdio.h>

int sumall(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else 
    {
        return n + sumall(n - 1);
    }
}

int main(void)
{
    int s = sumall(5);
}