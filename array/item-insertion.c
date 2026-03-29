#include <stdio.h>
void at_the_beginning(int arr[10], int n, int item) {
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = item;
    n++;

    printf("Insertion at the beginning: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void at_the_end(int arr[10], int n, int item) {
    printf("\nInsertion at the end: ");
    arr[n] = item;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr1[10],arr2[10], n, item;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("Enter the item to insert at the beginning: ");
    scanf("%d", &item);

    at_the_beginning(arr1, n, item);
    at_the_end(arr2, n, item);
    
    return 0;
}
