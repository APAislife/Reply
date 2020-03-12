#include "Manager.h"
#include <stdlib.h>
#define L 30

struct Manager{
    char societa[L+1];
    int bonus;
};

manager readManager(FILE *fp){
    manager m = malloc(sizeof(*m));
    fscanf(fp,"%s %d",m->societa, &m->bonus);
    return m;
}

char* getSocieta(manager m){
    return m->societa;
}

int getBonus(manager m){
    return m->bonus;
}

void freeManager(manager m){
    free(m);
}