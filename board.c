#include "board.h"
#include <stdio.h>
#include <stdlib.h>
char **loadBoard(FILE *fin)
{
    char **b;
    int W,H;
    int i,j;
    fscanf(fin,"%d %d",&W,&H);
    b=malloc(W*sizeof(char*));
    for(i=0;i<W;i++)
        b[i]=malloc(H*sizeof(char));
    for(i=0;i<W;i++)
        for(j=0;j<H;j++)
            fscanf(fin,"%s",b[i]);
    return b;
}
