#include <stdio.h>

void first_item_del(int arr[10], int n) {
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

    printf("Removed 1st item: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void last_item_del(int arr[10], int n) {
    n--;
    printf("Removed last item: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr1[10], arr2[10], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    first_item_del(arr1, n);
    last_item_del(arr2, n);
    
    return 0;
}