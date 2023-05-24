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
    //ù ��� ����(���)
    node *n = malloc(sizeof(node));
    n -> number = 1;
    n -> next = NULL;
    head = n;
    printf("head num: %d \n", head -> number);
    //��� 2 ����
    n = malloc(sizeof(node));
    n -> number = 2;
    n -> next = NULL;
    head -> next = n;

    for(node *tmp = head; tmp != NULL; tmp = tmp -> next) {
        printf("%d ", tmp -> number);
    }
    printf("\n");
    //1�� 2 ���̿� 3 �߰�
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

    //3 ����
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