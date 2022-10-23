#include "main.h"

/**
 * main - entry point
 * Description: runs the patient's database management system
 * Return: 0
 */
void main(void)
{
	int act = 0;

	while (act != 5)
	{
		printf("\t\t\t=====PATIENT DATABASE MANAGEMENT SYSTEM=====\n\n");
		printf("\t\t\t\t\t1. Add Patient Record\n");
		printf("\t\t\t\t\t2. Patient Records");
		printf("\t\t\t\t\t3. Search Patient\n");
		printf("\t\t\t\t\t4. Delete Record\n");
		printf("\t\t\t\t\t5. Exit\n");

		printf("\t\t\t\t\t--------------------------------");
		printf("\t\t\t\t\t>>>   \n");
		scanf(" %d", &act);
	}
	return (0);
}
