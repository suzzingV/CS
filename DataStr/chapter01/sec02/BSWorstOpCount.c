#include <stdio.h>

int BSearch(int arr[], int len, int target) {
    int start = 0;
    int end = len - 1;
    int mid;
    int opCount = 0;

    while(start <= end) {
        mid = (start + end) / 2;
        if(arr[mid] == target)
            return mid;
        else 
        {
            if(arr[mid] < target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        opCount++;
    }
    printf("ºñ±³¿¬»êÈ½¼ö: %d \n", opCount);
    return -1;
}

int main() {
    int arr1[500] = {0,};
    int arr2[5000] = {0, };
    int arr3[50000] = {0, };
    int idx;

    idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
    if(idx == -1)
        printf("Å½»ö½ÇÆĞ \n");
    else
        printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
    
    idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
    if(idx == -1) 
        printf("Å½»ö½ÇÆĞ \n");
    else
        printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
    
    idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 1);
    if(idx == -1)
        printf("Å½»ö ½ÇÆĞ \n");
    else
        printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);

    return 0;
}