#include <stdio.h>
#define MAX 100
int main() {
    int arr[MAX], size = 0, choice, element, position, i;
    while (1) {
        printf("\nArray Operations Menu:\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            if (size == 0) {
                printf("Array is empty.\n");
            } else {
                printf("Array elements: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        } else if (choice == 2) {
            if (size >= MAX) {
                printf("Array is full. Cannot insert element.\n");
                continue;
            }
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the position (0-based index): ");
            scanf("%d", &position);
            if (position < 0 || position > size) {
                printf("Invalid position.\n");
            } else {
                for (i = size; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = element;
                size++;
                printf("Element inserted successfully.\n");
            }
        } else if (choice == 3) {
            if (size == 0) {
                printf("Array is empty. Cannot delete element.\n");
                continue;
            }
            printf("Enter the position (0-based index) of the element to delete: ");
            scanf("%d", &position);
            if (position < 0 || position >= size) {
                printf("Invalid position.\n");
            } else {
                for (i = position; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
                printf("Element deleted successfully.\n");
            }
        } else if (choice == 4) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
