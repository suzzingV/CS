#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard* MakeNameCard(char* name, char* phone)
{
    NameCard* newCard;
    newCard = (NameCard*) malloc(sizeof(NameCard));
    strcpy(newCard -> name, name);
    strcpy(newCard -> phone, phone);
    return newCard;
}

void ShowNameCardInfo(NameCard* pcard)
{
    printf("[이름] %s \n", pcard -> name); //주소값으로 요소에 접근
    printf("[번호] %s \n\n", pcard -> phone);
}

int NameCompare(NameCard* pcard, char* name)
{
    return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard* pcard, char* phone)
{
    strcpy(pcard -> phone, phone);
}