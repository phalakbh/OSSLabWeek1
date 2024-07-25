#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    float avg = 0;
    for (int i = 0; i < n; i++)
    {
        avg += arr[i];
    }
    avg /= n;
    printf("Average is %f\n", avg);
    return 0;
}
