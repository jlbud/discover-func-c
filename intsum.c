#include <stdio.h>

long sum(long n)
{
    int i;
    long result = 0;
    for (i = 1; i <= n; i++)
    {
        //嵌套调用
        result += factorial(i);
    }
    return result;
}

int main()
{
    printf("1!+2!+...+9!+10! = %ld\n", sum(10));
    return 0;
}
