// As a part of learning using pointers and deferencing operator in c to understand how the pass by pointers work when passing an array to a function and perform some operations.

#include <stdio.h>
void myFunc(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(*(arr + i) == 4)
        *(arr + i) = 0;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    myFunc(arr, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
