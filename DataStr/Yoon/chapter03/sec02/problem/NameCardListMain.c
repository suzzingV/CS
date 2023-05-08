#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main() 
{
    List list;
    NameCard* pos;

    ListInit(&list);

    pos = MakeNameCard("�Ӽ���", "01012345678");
    LInsert(&list, pos);

    pos = MakeNameCard("������", "01012345678");
    LInsert(&list, pos);

    pos = MakeNameCard("�Ӿƶ�", "01012345678");
    LInsert(&list, pos);

    if(LFirst(&list, &pos))
    {
        if(!NameCompare(pos, "������"))
        {
            ShowNameCardInfo(pos);
        }

        while(LNext(&list, &pos))
        {
            if(!NameCompare(pos, "������"))
        {
            ShowNameCardInfo(pos);
        }
        }
    }

    if(LFirst(&list, &pos))
    {
        if(!NameCompare(pos, "�Ӿƶ�"))
        {
            ChangePhoneNum(pos, "01011112222");
        }

        while(LNext(&list, &pos))
        {
            if(!NameCompare(pos, "�Ӿƶ�"))
        {
            ChangePhoneNum(pos, "01011112222");
        }
        }
    }

    if(LFirst(&list, &pos))
    {
        if(!NameCompare(pos, "�Ӽ���"))
        {
            pos = LRemove(&list);
            free(pos);
        }

        while(LNext(&list, &pos))
        {
            if(!NameCompare(pos, "�Ӽ���"))
        {
            pos = LRemove(&list);
            free(pos);
        }
        }
    }

    if(LFirst(&list, &pos))
    {
            ShowNameCardInfo(pos);

        while(LNext(&list, &pos))
        {
            ShowNameCardInfo(pos);
        }
    }
}