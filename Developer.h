#ifndef REPLY_DEVELOPER_H
#define REPLY_DEVELOPER_H

#include <stdio.h>

typedef struct Developer* developer;
developer readDeveloper(FILE *fp);
char* getSocieta(developer m);
int getBonus(developer m);
void freeDev(developer d);

#endif //REPLY_DEVELOPER_H
