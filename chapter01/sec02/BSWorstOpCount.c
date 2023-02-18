#include <stdio.h>

int BSearch(int arr[], int len, int target) {
    int start = 0;
    int end = len - 1;
    int mid = (start + end) / 2;
    int opCount = 0;

    while(start <= end) {
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] <= target)
            end = mid - 1;
        else
            start = mid + 1;
        opCount ++;
    }
    printf("비교연산횟수: %d \n", opCount);
    return -1;
}

int main() {
    int arr1[500] = {0,};
    int arr2[5000] = {0, };
    int arr3[50000] = {0, };
    int idx;

    idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
    if(idx == -1)
        printf("탐색 실패 \n");
    else
        printf("타겟 저장 인덱스: %d \n", idx);
    
    idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
    if(idx == -1) 
        printf("탐색 실패 \n");
    else
        printf("타겟 저장 인덱스: %d \n", idx);
    
    idx = BSearch(arr1, sizeof(arr3) / sizeof(int), 1);
    if(idx == -1)
        printf("탐색 실패 \n");
    else
        printf("타겟 저장 인덱스: %d \n", idx);

    return 0;
}