#include<stdio.h>
#include<cs50.h>

int swap(char *x, char *y);

int main(void)
{
    int m;
    // Get user input
    int n = get_int("Enter the no. of Alphabets: ");
     char t[n];
    printf("Enter the Alphabets: ");
    for (int i = 0; i < n; i++)
    {
    scanf("%s\n", t[i])
    }

    printf("The Alphabets in sorted list: ");

    // Bubble sort algorithm
    while (n > 0)
    {
       for (int i = 0; i <= n; i++)
       {
            for (int i = 0; i <= n; i++)
            {
                // Covert to ascii
                int t[i] = (int) t[i];

                    if (t[i] > t[i + 1])
                    {
                        swap(&t[i], &t[i + 1]);
                    }
                    else
                    (
                        m++;
                    )
            }
       }
    }

    // Print the alphabets in sorted order
    for (int i = 0; i < n; i++)
    {
        printf("%s\t", t[i]);
    }
    return 0;
}

// Make swap fucntion
int swap(char *x, char *y)
{
    char *tmp;
    *tmp = *x;
    *x = *y;
    *y = *tmp;
}