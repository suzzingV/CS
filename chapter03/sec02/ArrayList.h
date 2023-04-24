#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TURE    1
#define FALSE   0

#define LIST_LEN    100
typedef int LData; //리스트에 int형 데이터의 저장 위한 선언

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List; //List에 다른 이름 부여하는 것만으로도 리스트의 종류 바꿀 수 있음
//typedef LinkedList List;

void ListInit(List *plist);
void LInsert(List *plist, LData pdata);

int LFirst(List *plist, LData pdata);
int LNext(List *plist, LData pdata);

LData LRemovd(List *plist);
int LCount(List *plist);

#endif