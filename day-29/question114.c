#include <stdio.h>

int main()
{
    int arr[100], n = 0, i, choice;
    int key, found, max, min;

    while (1)
    {
        printf("\n===== Menu Driven Array Operations =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Array Elements: ");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    max = arr[0];
                    for (i = 1; i < n; i++)
                    {
                        if (arr[i] > max)
                            max = arr[i];
                    }
                    printf("Maximum Element = %d\n", max);
                }
                break;

            case 4:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    min = arr[0];
                    for (i = 1; i < n; i++)
                    {
                        if (arr[i] < min)
                            min = arr[i];
                    }
                    printf("Minimum Element = %d\n", min);
                }
                break;

            case 5:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Enter element to search: ");
                    scanf("%d", &key);

                    found = 0;
                    for (i = 0; i < n; i++)
                    {
                        if (arr[i] == key)
                        {
                            printf("Element found at index %d\n", i);
                            found = 1;
                            break;
                        }
                    }

                    if (!found)
                        printf("Element not found.\n");
                }
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