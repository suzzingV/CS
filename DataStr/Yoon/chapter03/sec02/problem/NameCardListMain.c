#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main() 
{
    List list;
    NameCard* pos;

    ListInit(&list);

    pos = MakeNameCard("¿”ºˆ¡¯", "01012345678");
    LInsert(&list, pos);

    pos = MakeNameCard("¿Â¿±ºÆ", "01012345678");
    LInsert(&list, pos);

    pos = MakeNameCard("¿”æ∆∂Ï", "01012345678");
    LInsert(&list, pos);

    if(LFirst(&list, &pos))
    {
        if(!NameCompare(pos, "¿Â¿±ºÆ"))
        {
            ShowNameCardInfo(pos);
        }

        while(LNext(&list, &pos))
        {
            if(!NameCompare(pos, "¿Â¿±ºÆ"))
        {
            ShowNameCardInfo(pos);
        }
        }
    }

    if(LFirst(&list, &pos))
    {
        if(!NameCompare(pos, "¿”æ∆∂Ï"))
        {
            ChangePhoneNum(pos, "01011112222");
        }

        while(LNext(&list, &pos))
        {
            if(!NameCompare(pos, "¿”æ∆∂Ï"))
        {
            ChangePhoneNum(pos, "01011112222");
        }
        }
    }

    if(LFirst(&list, &pos))
    {
        if(!NameCompare(pos, "¿”ºˆ¡¯"))
        {
            pos = LRemove(&list);
            free(pos);
        }

        while(LNext(&list, &pos))
        {
            if(!NameCompare(pos, "¿”ºˆ¡¯"))
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