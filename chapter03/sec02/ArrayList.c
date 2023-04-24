#include <stdio.h>
#include "ArrayList.h"

void ListInit(List *plist) {
    (plist -> numOfData) = 0;
    (plist -> curPosition) = -1; //�ƹ��͵� ����Ű�� ���� ����
}

void LInsert(List *plist, LData pdata)
{
    if((plist -> curPosition) >= LIST_LEN) //������Ͽ��� define�� �� �״�� �� �� ����
        puts("���̻� ������ ������ �����ϴ�.");
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