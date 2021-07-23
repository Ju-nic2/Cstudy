#include <stdio.h>

int main()
{
    int arr[3];
    char arr1[3];
    long long arr2[3];
    printf("%ld %ld %ld\n",&arr, &arr[0], &arr[1]);
    printf("%ld %ld %ld\n",&arr1, &arr1[0], &arr1[1]);
     printf("%ld %ld %ld\n",&arr2, &arr2[0], &arr2[1]);
}