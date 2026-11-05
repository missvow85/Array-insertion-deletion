#include <stdio.h>

int main()
{
    int arr[100], n, i, choice;
    int pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n--- ARRAY OPERATIONS ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                if(n == 100)
                {
                    printf("Array is full!\n");
                    break;
                }

                printf("Enter position to insert: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n + 1)
                {
                    printf("Invalid position!\n");
                    break;
                }

                printf("Enter value: ");
                scanf("%d", &value);

                for(i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                printf("Element inserted successfully!\n");
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n)
                {
                    printf("Invalid position!\n");
                    break;
                }

                for(i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                printf("Element deleted successfully!\n");
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
