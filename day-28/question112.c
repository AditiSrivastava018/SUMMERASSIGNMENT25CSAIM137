#include <stdio.h>
#include<string.h>
struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c[100];
    int n = 0, choice, i, found;
    char searchName[50];

    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Name: ");
                scanf("%s", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                printf("Enter Email: ");
                scanf("%s", c[n].email);

                n++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No contacts found.\n");
                }
                else
                {
                    printf("\nName\tPhone\t\tEmail\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%s\t%s\t%s\n",
                               c[i].name,
                               c[i].phone,
                               c[i].email);
                    }
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf("%s", searchName);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (strcmp(c[i].name, searchName) == 0)
                    {
                        printf("\nContact Found!\n");
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                        printf("Email : %s\n", c[i].email);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");
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