#define _CRT_SECURE_NO_WARNINGS
#pragma warning(suppress : 4996)
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// Arrays created to break equations into chracters
char line1[20];
char line2[20];
char line3[20];
int n = 3; // number of variables

// Arrays created to check whether variables are in the equation 
bool stateline1[3] = {false, false, false}; 
bool stateline2[3] = {false, false, false};
bool stateline3[3] = {false, false, false};
bool stateline4[3] = {false, false, false};

bool Isalphabet(char t);
void add1(int n, char array[], int position);
void add_n(int n, char array[], int position, char d);

int main()
{
    char letter1 = 'x';
    char letter2 = 'y';
    char letter3 = 'z';
    FILE *fp;
    fp = fopen("eq.txt", "r");

    fscanf(fp, "%s\n", line1);
    fscanf(fp, "%s\n", line2);
    fscanf(fp, "%s\n", line3);

    // Printing "1" of coefficients in front of those with ones, and Printing zero to coefficients of the variables 
    for (int i = 0; i < 20; i++)
    {
        if (Isalphabet(line1[i]) && (line1[i - 1] == '+' || line1[i - 1] == '-' || line1[i - 1] == '\0'))
        {
            add1(sizeof(line1), line1, i + 1);
        }
        for (int i = 0; i < sizeof(line1); i++)
        {
            if (line1[i] == letter1)
            {
                stateline1[0] = true;
            }
            if (line1[i] == letter2)
            {
                stateline1[1] = true;
            }
            if (line1[i] == letter3)
            {
                stateline1[2] = true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (stateline1[i] == false)
            {
                if (i == 0)
                {
                    if (line1[0] == '-')
                    {
                        add_n(sizeof(line1), line1, 1, 'x');
                        add_n(sizeof(line1), line1, 1, '0');
                    }
                    else
                    {
                        add_n(sizeof(line1), line1, 1, '+');
                        add_n(sizeof(line1), line1, 1, 'x');
                        add_n(sizeof(line1), line1, 1, '0');
                    }
                }
                else if (i == 1)
                {
                    for (int i = 0; i < sizeof(line1); i++)
                    {
                        if (line1[i] == 'x')
                        {

                            add_n(sizeof(line1), line1, i + 2, 'y');
                            add_n(sizeof(line1), line1, i + 2, '0');
                            add_n(sizeof(line1), line1, i + 2, '+');
                            break;
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < sizeof(line1); i++)
                    {
                        if (line1[i] == 'y')
                        {

                            add_n(sizeof(line1), line1, i + 2, 'z');
                            add_n(sizeof(line1), line1, i + 2, '0');
                            add_n(sizeof(line1), line1, i + 2, '+');
                            break;
                        }
                    }
                }
            }
        }
    }

    // Printing "1" of coefficients in front of those with ones, and Printing zero to coefficients of the variables 
    for (int i = 0; i < 20; i++)
    {
        if (Isalphabet(line2[i]) && (line2[i - 1] == '+' || line2[i - 1] == '-' || line2[i - 1] == '\0'))
        {
            add1(sizeof(line2), line2, i + 1);
        }
        for (int i = 0; i < sizeof(line2); i++)
        {
            if (line2[i] == letter1)
            {
                stateline2[0] = true;
            }
            if (line2[i] == letter2)
            {
                stateline2[1] = true;
            }
            if (line2[i] == letter3)
            {
                stateline2[2] = true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (stateline2[i] == false)
            {
                if (i == 0)
                {
                    if (line2[0] == '-')
                    {
                        add_n(sizeof(line2), line2, 1, 'x');
                        add_n(sizeof(line2), line2, 1, '0');
                    }
                    else
                    {
                        add_n(sizeof(line2), line2, 1, '+');
                        add_n(sizeof(line2), line2, 1, 'x');
                        add_n(sizeof(line2), line2, 1, '0');
                    }
                }
                else if (i == 1)
                {
                    for (int i = 0; i < sizeof(line2); i++)
                    {
                        if (line2[i] == 'x')
                        {

                            add_n(sizeof(line2), line2, i + 2, 'y');
                            add_n(sizeof(line2), line2, i + 2, '0');
                            add_n(sizeof(line2), line2, i + 2, '+');
                            break;
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < sizeof(line2); i++)
                    {
                        if (line2[i] == 'y')
                        {

                            add_n(sizeof(line2), line2, i + 2, 'z');
                            add_n(sizeof(line2), line2, i + 2, '0');
                            add_n(sizeof(line2), line2, i + 2, '+');
                            break;
                        }
                    }
                }
            }
        }
    }

    // Printing "1" of coefficients in front of those with ones, and Printing zero to coefficients of the variables 
    for (int i = 0; i < 20; i++)
    {
        if (Isalphabet(line3[i]) && (line3[i - 1] == '+' || line3[i - 1] == '-' || line3[i - 1] == '\0'))
        {
            add1(sizeof(line3), line3, i + 1);
        }
        for (int i = 0; i < sizeof(line3); i++)
        {
            if (line3[i] == letter1)
            {
                stateline3[0] = true;
            }
            if (line3[i] == letter2)
            {
                stateline3[1] = true;
            }
            if (line3[i] == letter3)
            {
                stateline3[2] = true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (stateline3[i] == false)
            {
                if (i == 0)
                {
                    // printf("add 0x\n");
                    if (line3[0] == '-')
                    {
                        add_n(sizeof(line3), line3, 1, 'x');
                        add_n(sizeof(line3), line3, 1, '0');
                    }
                    else
                    {
                        add_n(sizeof(line3), line3, 1, '+');
                        add_n(sizeof(line3), line3, 1, 'x');
                        add_n(sizeof(line3), line3, 1, '0');
                    }
                }
                else if (i == 1)
                {
                    for (int i = 0; i < sizeof(line3); i++)
                    {
                        if (line3[i] == 'x')
                        {
                            printf("i=%d\n", i);

                            add_n(sizeof(line3), line3, i + 2, 'y');
                            add_n(sizeof(line3), line3, i + 2, '0');
                            add_n(sizeof(line3), line3, i + 2, '+');
                            break;
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < sizeof(line3); i++)
                    {
                        if (line3[i] == 'y')
                        {
                            printf("i=%d\n", i);

                            add_n(sizeof(line3), line3, i + 2, 'z');
                            add_n(sizeof(line3), line3, i + 2, '0');
                            add_n(sizeof(line3), line3, i + 2, '+');
                            break;
                        }
                    }
                }
            }
        }
    }
    fclose(fp);

    fp = fopen("eq.txt", "r+");
    fprintf(fp, "%s\n", line1);
    fprintf(fp, "%s\n", line2);
    fprintf(fp, "%s\n", line3);
    fclose(fp);

    int j, i, k, n = 3;
    double x[10];
    float A[20][20], c;
    fp = fopen("eq.txt", "r");

    for (i = 1; i <= n; i++)
    {

        fscanf(fp, "%fx%fy%fz%*[=]%f", &A[i][1], &A[i][2], &A[i][3], &A[i][4]); /// add %fn for 4 variables n:variable name
    }
    fclose(fp);

    // Application of Gauss-jordan Elimination method
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

    // Calculation of the results
    printf("\nThe solution is: ");
    for (i = 1; i <= n; i++)
    {
        x[i] = A[i][n + 1] / A[i][i];
        printf("\n x%d=%f\n", i, x[i]);
    }

    return 0;
}

// A function that checks whether the data that is is in the chracter format is in letters 
bool Isalphabet(char t)
{

    int state = isalpha(t);
    if (state == 1024)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// A function that allows you to add "1" in front of variables with a coefficent of one. 
void add1(int n, char array[], int position)
{

    for (int c = n - 1; c >= position - 1; c--)
    {
        array[c + 1] = array[c];
    }
    array[position - 1] = '1';
}

// A function that allows you to add the desired character before/after variables 
void add_n(int n, char array[], int position, char d)
{

    for (int c = n - 1; c >= position - 1; c--)
    {
        array[c + 1] = array[c];
    }
    array[position - 1] = d;
}
