#include "Developer.h"
#include "Set.h"
#include <stdlib.h>
#define L 30

struct Developer{
    char societa[L+1];
    int bonus;
    SET skills;
};

developer readDeveloper(FILE *fp){
    developer d = malloc(sizeof(*d));
    int n;
    fscanf(fp,"%s %d",d->societa, &d->bonus);
    fscanf(fp,"%d",&n);


    return d;
}

char* getSocieta(developer d){
    return d->societa;
}

int getBonus(developer d){
    return d->bonus;
}

void freeDev(developer d){
    free(d);
}