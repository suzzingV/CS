#include <stdio.h>

int BSearchRecur(int arr[], int target, int start, int end) {
    int mid = (start + end) / 2;
    
    if(start > end)
        return -1;
    if(arr[mid] == target) 
        return mid;
    else if(arr[mid] > target)
        return BSearchRecur(arr, target, 0, mid - 1);
    else
        return BSearchRecur(arr, target, mid + 1, end);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = BSearchRecur(arr, 7, 0, sizeof(arr) / sizeof(int) - 1);
    if(idx == -1)
        printf("Ž�� ���� \n");
    else   
        printf("Ÿ�� ���� �ε���: %d \n", idx);
    
    idx = BSearchRecur(arr, 4, 0, sizeof(arr) / sizeof(int) - 1);
    if(idx == -1)
        printf("Ž�� ���� \n");
    else   
        printf("Ÿ�� ���� �ε���: %d \n", idx);
    return 0;
}