#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int number;
    struct node *next;
} node;

int main()
{
    node *head = NULL;
    //첫 노드 생성(헤드)
    node *n = malloc(sizeof(node));
    n -> number = 1;
    n -> next = NULL;
    head = n;
    printf("head num: %d \n", head -> number);
    //노드 2 생성
    n = malloc(sizeof(node));
    n -> number = 2;
    n -> next = NULL;
    head -> next = n;

    for(node *tmp = head; tmp != NULL; tmp = tmp -> next) {
        printf("%d ", tmp -> number);
    }
    printf("\n");
    //1과 2 사이에 3 추가
    n = malloc(sizeof(node));
    n -> number = 3;
    n -> next = NULL;
    for(node *tmp = head; tmp != NULL; tmp = tmp -> next) {
        if(tmp -> number == 1) {
            n -> next = tmp -> next;
            tmp -> next = n;
            break;
        }
    }
    for(node *tmp = head; tmp != NULL; tmp = tmp -> next) {
        printf("%d ", tmp -> number);
    }

    //3 삭제
    for(node *tmp = head; tmp != NULL; tmp = tmp -> next) {
        if(tmp -> next -> number == 3) {
            node *t = tmp -> next;
            tmp -> next = tmp -> next -> next;
            free(t);
            break;
        }
    }
    for(node *tmp = head; tmp != NULL; tmp = tmp -> next) {
        printf("%d ", tmp -> number);
    }
    
    while(head != NULL) {
        node *tmp = head -> next;
        free(head);
        head = tmp;
    }
}