#ifndef REPLY_SET_H
#define REPLY_SET_H

#include <stdio.h>

typedef struct set* SET;
SET SETinit(FILE*fp, int maxN);
SET SETunion(SET s1, SET s2);
SET SETintersection(SET s1, SET s2);
int SETsize(SET s);



#endif //REPLY_SET_H
