#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct patient
{
	char firstname[10];
	char lastname[10];
	int hospNo;
	int age;
	char diagnosis[10];
	char location[10];
} patient;

void patadd(void);
void patrecord(void);
void patsearch(void);
void patdelete(void);

#endif /*MAIN_H*/
