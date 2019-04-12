#include "stdio.h"
int main()
{
    int N;
    int i = 1;
    scanf("%d", &N);
    for (; i <= 9; i++)
    {
        printf("%d * %d = %d\n", N, i, N * i);
    }
    return 0;
}