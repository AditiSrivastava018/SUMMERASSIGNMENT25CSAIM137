#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Title: ");
                scanf("%s", b[n].title);

                printf("Enter Author Name: ");
                scanf("%s", b[n].author);

                printf("Enter Quantity: ");
                scanf("%d", &b[n].quantity);

                n++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nID\tTitle\tAuthor\tQuantity\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%s\t%d\n",
                               b[i].id,
                               b[i].title,
                               b[i].author,
                               b[i].quantity);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (b[i].id == id)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Title     : %s\n", b[i].title);
                        printf("Author    : %s\n", b[i].author);
                        printf("Quantity  : %d\n", b[i].quantity);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}