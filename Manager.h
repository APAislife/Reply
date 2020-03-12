#ifndef REPLY_MANAGER_H
#define REPLY_MANAGER_H
#include <stdio.h>

typedef struct Manager* manager;
manager readManager(FILE *fp);
char* getSocieta(manager m);
int getBonus(manager m);
void freeManager(manager m);

#endif //REPLY_MANAGER_H
