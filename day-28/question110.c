#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b[100];
    int n = 0, choice, accNo, i, found;
    float amount;

    while (1)
    {
        printf("\n===== Bank Account Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &b[n].accNo);

                printf("Enter Account Holder Name: ");
                scanf("%s", b[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &b[n].balance);

                n++;
                printf("Account created successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No accounts found.\n");
                }
                else
                {
                    printf("\nAcc No\tName\tBalance\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%.2f\n",
                               b[i].accNo,
                               b[i].name,
                               b[i].balance);
                    }
                }
                break;

            case 3:
                printf("Enter Account Number to Search: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (b[i].accNo == accNo)
                    {
                        printf("\nAccount Found!\n");
                        printf("Account Number : %d\n", b[i].accNo);
                        printf("Name           : %s\n", b[i].name);
                        printf("Balance        : %.2f\n", b[i].balance);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
                break;

            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (b[i].accNo == accNo)
                    {
                        printf("Enter Amount to Deposit: ");
                        scanf("%f", &amount);

                        b[i].balance += amount;

                        printf("Deposit Successful!\n");
                        printf("Updated Balance: %.2f\n", b[i].balance);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
                break;

            case 5:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (b[i].accNo == accNo)
                    {
                        printf("Enter Amount to Withdraw: ");
                        scanf("%f", &amount);

                        if (amount <= b[i].balance)
                        {
                            b[i].balance -= amount;
                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance: %.2f\n", b[i].balance);
                        }
                        else
                        {
                            printf("Insufficient Balance!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}