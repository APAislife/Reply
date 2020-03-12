#include "Set.h"
#include <stdlib.h>

struct set{
    char **c;
    int N;
};

SET SETinit(FILE* fp, int maxN){
    SET s = malloc(sizeof *s);
    s->c=malloc(maxN* sizeof(char));

}