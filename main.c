#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr = 8;
    int *pNbr = &nbr;

    printf("Le nombre est %d avec les pointeurs V2", *pNbr);

    return 0;
}