#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include "struct.h"
#include<string.h>

// name struct node
typedef struct name;

int main(void)
{
    char *namE = NULL;

    while (true)
    {   // Get user input
        name *n = get_string("Enter a name : ");

        // Check EOF
        if (n = INT_MAX)
        {
            break;
        }
        // Allocate memory
        name *namel = malloc(sizeof(name));

        // Check for error if no memory
        if (!namel)
        {
            return 1;
        }

        // Assign name inside the node
        namel->names = n;
        namel->nptr = NULL;

        if (namE)
        {
            // If user inputted then make new node called 'name'
            for (name *ptr = namE; ptr != NULL; ptr = ptr->nptr)
            {
                if (!ptr->nptr)
                {
                    ptr->nptr = namel;
                    break;
                }
            }
        }
        else
        {
            namE = namel;
        }
    }

    // Print the names
    for (name *ptr = namE; ptr->nptr != NULL;; ptr = ptr->nptr)
    {
        printf("%s", ptr->*names);
    }
}

typedef struct name
{
    char *names;
    struct name *nptr = NULL;
}name;