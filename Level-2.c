#define _CRT_SECURE_NO_WARNINGS
#pragma warning(suppress : 4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
    int j, i, k, n = 3;
    double x[10];
    float A[20][20], c;
    FILE *fp = fopen("eq.txt", "r");

    for (i = 1; i <= n; i++)
    {
        //fscanf(fp, "%s[^\n]", line[i])
        fscanf(fp, "%fx%fy%fz%*[=]%f", &A[i][1], &A[i][2], &A[i][3], &A[i][4]);
        printf("%f %f %f %f", A[i][1], A[i][2], A[i][3], A[i][4]);
        //printf("%f", A[]])
    }
    fclose(fp);

    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            if (i != j)
            {
                c = A[i][j] / A[j][j];
                for (k = 1; k <= n + 1; k++)
                {
                    A[i][k] = A[i][k] - c * A[j][k];
                }
            }
        }
    }

    printf("\nThe solution is: ");
    for(i=1; i<=n ;i++)
    {
        x[i]=A[i][n+1]/A[i][i];
        printf("\n x%d=%f\n",i,x[i]);
        /*float solution = A[i][n+1]/A[i][i];
        printf("x: %f", solution);*/
    }

    return (0);
}