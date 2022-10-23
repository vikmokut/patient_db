#include "main.h"

/**
 * main - entry point
 * Description: runs the patient's database management system
 * Return: 0
 */
int main(void)
{
	int act = 0;

	system("clear");
	putchar('\n');

	while (act != 5)
	{
		printf("\t\t\t===== PATIENT DATABASE MANAGEMENT SYSTEM =====\n\n");
		printf("\n\t\t\t\t1. Add Patient Record\n");
		printf("\n\t\t\t\t2. Patient Records\n");
		printf("\n\t\t\t\t3. Search Patient\n");
		printf("\n\t\t\t\t4. Delete Record\n");
		printf("\n\t\t\t\t5. Exit\n\n");

		printf("\t\t\t\t___________________________________\n\n");
		printf("\t\t\t\t>>> ");
		scanf(" %d", &act);

		switch (act)
		{
			case 1:
				system("clear");
				patadd();
				system("clear");
				break;
			case 2:
				system("clear");
				patrecord();
				printf("\t\t\t\tPress any key to exit\n");
				getchar();
				system("clear");
				break;
			case 3:
				break;

		}

	}
	return (0);
}
