#include <stdio.h>

int BSearch(int arr[], int len, int target) {
    int start = 0;
    int end = len - 1;
    int mid;

    while(start <= end) {
        mid = (start + end) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] <= target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = BSearch(arr, sizeof(arr)/sizeof(int), 7);
    if(idx == -1) 
        printf("Å½»ö ½ÇÆĞ \n");
    else
        printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
    
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 4);
    if(idx == -1)
        printf("Å½»ö ½ÇÆĞ \n");
    else   
        printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
}