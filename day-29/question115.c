#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice;

    while (1)
    {
        printf("\n===== Menu Driven String Operations =====\n");
        printf("1. Enter String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate Strings\n");
        printf("5. Compare Strings\n");
        printf("6. Reverse String\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter First String: ");
                scanf("%s", str1);

                printf("Enter Second String: ");
                scanf("%s", str2);
                break;

            case 2:
                printf("Length of First String = %lu\n", strlen(str1));
                printf("Length of Second String = %lu\n", strlen(str2));
                break;

            case 3:
                strcpy(temp, str1);
                printf("Copied String = %s\n", temp);
                break;

            case 4:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated String = %s\n", temp);
                break;

            case 5:
                if (strcmp(str1, str2) == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 6:
            {
                int i, len;
                char rev[100];

                len = strlen(str1);

                for (i = 0; i < len; i++)
                {
                    rev[i] = str1[len - i - 1];
                }
                rev[len] = '\0';

                printf("Reversed String = %s\n", rev);
                break;
            }

            case 7:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}