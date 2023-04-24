#include <stdio.h>
#include "ArrayList.h"

void ListInit(List *plist) {
    (plist -> numOfData) = 0;
    (plist -> curPosition) = -1; //아무것도 가리키고 있지 않음
}

void LInsert(List *plist, LData pdata)
{
    if((plist -> curPosition) >= LIST_LEN) //헤더파일에서 define한 거 그대로 쓸 수 있음
        puts("더이상 저장할 공간이 없습니다.");
    plist -> arr[(plist -> curPosition)] = pdata;
    (plist -> curPosition) ++;
}

int LFirst(List *plist, LData *pdata)
{
    if((plist -> numOfData) == 0) {
        return FALSE;
    }

    (plist -> curPosition) = 0;
    *pdata = plist -> arr[0];
    return TRUE;
}

int LNext(List *plist, LData *pdata)
{
    if((plist -> curPosition) >= (plist -> numOfData) - 1)
    {
        return FALSE;
    }
    
    (plist -> curPosition) ++;
    *pdata = (plist -> arr[(plist -> curPosition)]);
    return TRUE;
}

LData LRemoved(List *plist)
{
    LData rdata = plist -> arr[(plist -> curPosition)];

    for(int i = (plist -> curPosition); i < (plist -> numOfData) - 1; i++)
    {
        plist -> arr[i] = plist -> arr[i + 1];
    }

    (plist -> numOfData) --;
    (plist -> curPosition) --;
    return rdata;
}

int Lcount(List *plist)
{
    return plist -> numOfData;
}