#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TURE    1
#define FALSE   0

#define LIST_LEN    100
typedef int LData; //����Ʈ�� int�� �������� ���� ���� ����

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List; //List�� �ٸ� �̸� �ο��ϴ� �͸����ε� ����Ʈ�� ���� �ٲ� �� ����
//typedef LinkedList List;

void ListInit(List *plist);
void LInsert(List *plist, LData pdata);

int LFirst(List *plist, LData pdata);
int LNext(List *plist, LData pdata);

LData LRemovd(List *plist);
int LCount(List *plist);

#endif