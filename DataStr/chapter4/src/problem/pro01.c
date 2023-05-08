#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node* next;
} Node;

int main(void) 
{
    Node* head = NULL;
    Node* cur = NULL;
    Node* tail = NULL;

    Node* newNode = NULL;
    int readData;

    //������ �б�
    while(1)
    {
        printf("�ڿ��� �б�: ");
        scanf("%d", &readData);
        if(readData < 1)
            break;
        
        newNode = (Node*) malloc(sizeof(Node));
        newNode -> data = readData;
        newNode -> next = NULL;

        if(head == NULL)
            tail = newNode;
        else
            newNode -> next = head;
        
        head = newNode;
    }
    printf("\n");

    //������ ��ȸ
    printf("�Է¹��� �������� ��ü ���! \n");
    if(head == NULL)
        printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
    else 
    {
        cur = head;
        printf("%d ", cur -> data);
        
        while(cur -> next != NULL)
        {
            cur = cur -> next;
            printf("%d ", cur -> data);
        }
    }
    printf("\n\n");

    //�޸� ����
    if(head == NULL)
        return 0;
    else
    {
        Node* delNode = head;
        Node* delNextNode = head -> next;

        printf("%d��(��) �����մϴ�. \n", delNode -> data);
        free(delNode);

        while(delNextNode != NULL)
        {
            delNode = delNextNode;
            delNextNode = delNode -> next;

            printf("%d��(��) �����մϴ�. \n", delNode -> data);
            free(delNode);
        }
    }
    return 0;
}