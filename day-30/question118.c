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
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", b[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);

                printf("Enter Quantity: ");
                scanf("%d", &b[n].quantity);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    printf("\n----- Book List -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Title     : %s\n", b[i].title);
                        printf("Author    : %s\n", b[i].author);
                        printf("Quantity  : %d\n", b[i].quantity);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Title     : %s\n", b[i].title);
                        printf("Author    : %s\n", b[i].author);
                        printf("Quantity  : %d\n", b[i].quantity);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        if(b[i].quantity > 0)
                        {
                            b[i].quantity--;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book Not Available!\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        b[i].quantity++;
                        printf("Book Returned Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}