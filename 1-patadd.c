#include "main.h"

void patadd(void)
{
	patient data;
	FILE *fp;
	char next;

	do
	{
		system("clear");
		printf("\n\t\t\t\t====== Add Patient Info ======\n\n");
		fp = fopen("patient_info", "a");
		printf("\n\n\t\tEnter First Name	: ");
		scanf("%s", &data.firstname);
		printf("\n\n\t\tEnter Last Name		: ");
		scanf("%s", &data.lastname);
		printf("\n\n\t\tEnter Hospital Num	: ");
		scanf("%d", &data.hospNo);
		printf("\n\n\t\tEnter Age		: ");
		scanf("%d", &data.age);
		printf("\n\n\t\tEnter Diagnosis		: ");
		scanf("%s", &data.diagnosis);
		printf("\n\n\t\tEnter Location		: ");
		scanf("%s", &data.location);
		printf("\n\n\t\t________________________________________________\n");

		if (fp == NULL)
		{
			fprintf(stderr, "\n\t\t\t\tCannot Open File\n");
		}
		else
		{
			printf("\n\t\t\t\tRecord Sucessfully Added\n");
		}

		printf("\t\t________________________________________________\n");
		
		fwrite(&data, sizeof(patient),1,fp);
		fclose(fp);

		printf("\n\t\tDo you want to add another record?(y/n) : ");
		scanf(" %c", &next);

	}while (next == 'y' || next == 'Y');
}
