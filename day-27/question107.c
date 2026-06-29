#include <stdio.h>

struct Salary {
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main() {
    struct Salary emp[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display All Records\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basicSalary);

                emp[n].hra = 0.20 * emp[n].basicSalary; // 20% HRA
                emp[n].da = 0.10 * emp[n].basicSalary;  // 10% DA
                emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

                printf("Salary record added successfully!\n");
                n++;
                break;

            case 2:
                if (n == 0) {
                    printf("No salary records found.\n");
                } else {
                    printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");

                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                               emp[i].id,
                               emp[i].name,
                               emp[i].basicSalary,
                               emp[i].hra,
                               emp[i].da,
                               emp[i].grossSalary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        printf("\nEmployee Found!\n");
                        printf("ID            : %d\n", emp[i].id);
                        printf("Name          : %s\n", emp[i].name);
                        printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
                        printf("HRA           : %.2f\n", emp[i].hra);
                        printf("DA            : %.2f\n", emp[i].da);
                        printf("Gross Salary  : %.2f\n", emp[i].grossSalary);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee record not found.\n");
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}