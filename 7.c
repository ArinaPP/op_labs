// 7 laba pochtiii
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
fill(int n, int m, int A[][m])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            A[i][j] = rand() % 11 - 5;
}

void
write1(int n, int m, int A[][m], int B[][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%6d", A[i][j]);
            B[j][i] = A[i][j];
        }
        printf("\n");
    }
}

void
write2(int n, int m, int B[][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%6d", B[i][j]);
        printf("\n");
    }
}

void
pro(int n, int m, int A[][m], int B[][n], int C[n][n])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            C[i][j] = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                C[i][j] += A[i][k] * B[k][j];
}

void
write3(int n, int m, int C[n][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%6d", C[i][j]);
        printf("\n");
    }
}

int main()
{
    srand(time(NULL));
    int n, m;
    printf("n -> ");
    scanf("%d", &n);
    printf("m -> ");
    scanf("%d", &m);
    printf("\n");
    int A[n][m], B[m][n], C[n][n];
    fill(n, m, A);
    printf("matrica\n");
    write1(n, m, A, B);
    printf("transponirovannaya\n");
    write2(n, m, B);
    printf("proizvedenie\n");
    pro(n, m, A, B, C);
    write3(n, m, C);
    return 0;
}
