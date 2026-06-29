#include <stdio.h>

struct Ticket
{
    int ticketId;
    char name[50];
    char destination[50];
    float fare;
};

int main()
{
    struct Ticket t[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n===== Ticket Management System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Ticket ID: ");
                scanf("%d", &t[n].ticketId);

                printf("Enter Passenger Name: ");
                scanf("%s", t[n].name);

                printf("Enter Destination: ");
                scanf("%s", t[n].destination);

                printf("Enter Fare: ");
                scanf("%f", &t[n].fare);

                n++;
                printf("Ticket booked successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No tickets booked.\n");
                }
                else
                {
                    printf("\nTicket ID\tName\tDestination\tFare\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("%d\t\t%s\t%s\t\t%.2f\n",
                               t[i].ticketId,
                               t[i].name,
                               t[i].destination,
                               t[i].fare);
                    }
                }
                break;

            case 3:
                printf("Enter Ticket ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (t[i].ticketId == id)
                    {
                        printf("\nTicket Found!\n");
                        printf("Ticket ID   : %d\n", t[i].ticketId);
                        printf("Passenger   : %s\n", t[i].name);
                        printf("Destination : %s\n", t[i].destination);
                        printf("Fare        : %.2f\n", t[i].fare);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Ticket not found.\n");
                break;

            case 4:
                printf("Enter Ticket ID to Cancel: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (t[i].ticketId == id)
                    {
                        int j;
                        for (j = i; j < n - 1; j++)
                        {
                            t[j] = t[j + 1];
                        }
                        n--;
                        printf("Ticket cancelled successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Ticket not found.\n");
                break;

            case 5:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}