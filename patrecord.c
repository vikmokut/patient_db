#include "main.h"

void patrecord(void)
{
	patient data;
	FILE *fp;
	fp = fopen("patient_info", "r");

	printf("\n\t\t\t\t====== Patient Records ======\n\n");

	if (fp == NULL)
	{
		fprintf(stderr, "\t\t\t\tCan Not Open File\n");
	}
	else
	{		
		printf("\n\t\t\t\tRegistered Patients\n");
		printf("\n\t\t\t\t______________________________________________\n");
	}

	while (fread(&data, sizeof(patient),1,fp))
	{
		printf("\n\n\t\t\t\tPatient Name		: %s %s", data.firstname, data.lastname);
		printf("\n\n\t\t\t\tHospital Number		: %d", data.hospNo);
		printf("\n\n\t\t\t\tPatient Age		: %d", data.age);
		printf("\n\n\t\t\t\tDiagnosis		: %s", data.diagnosis);
		printf("\n\n\t\t\t\tLocation		: %s", data.location);
		printf("\n\t\t\t\t______________________________________________\n");

	}

	fclose(fp);
	getchar();
}
