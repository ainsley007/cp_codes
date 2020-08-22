#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};//node structure with 3 fields: pointer to prev,data,pointer to next

struct Node* head;//globally declared head pointer of the list.

//function printing forward
void PrintForward()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
    return;
}//end

//function printing backward
void PrintReverse()
{
    struct Node* temp = head;
    while(temp->next!=NULL)
        temp = temp->next;
    
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
    return;
}//end

//create new node
struct Node* CreateNewNode(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}//end

//inserting at beginning of list
void InsertAtHead(int x)
{
    struct Node* newNode = CreateNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        newNode->prev = NULL;
        newNode->next = NULL;
        return;
    }
    newNode->data = x;
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}//end

//inserting at end of list
void InsertAtTail(int x)
{
    struct Node* temp = head;
    struct Node* newNode = CreateNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}//end

int main()
{
    //
    head = NULL;
    InsertAtHead(1);
    InsertAtHead(2);
    InsertAtHead(3);
    InsertAtHead(4);
    PrintForward();
    PrintReverse();
    InsertAtTail(1);
    InsertAtTail(2);
    InsertAtTail(3);
    InsertAtTail(4);
    PrintForward();
    PrintReverse();
}