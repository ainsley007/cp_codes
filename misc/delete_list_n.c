#include<stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
//insert at end.
void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    //if the list is empty
    if(head == NULL)
    {
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    else
    {
        struct Node* temp2;
        temp2 = head;//pointer stores head address
        while(temp2->next != NULL)
        temp2 = temp2->next;//traverse till end of list
       
        //update last node of previous node with address
        //of to be inserted node
        //update next part of new node to null.
        temp->data = x;
        temp2->next = temp;
        temp->next = NULL;
    }
    
}
//delete at position x.
void Delete(int x)
{
    struct Node* temp = head;
    //if to be deleted node is first node
    //update head with address of 2nd node
    //(either null or add of 2nd node)
    if(x==1)
    {
        head = temp->next;
        free(temp);
    }
    else
    {
        struct Node* t1 = head;//(n-1)

        for(int i=0;i<x-2;i++)
            t1 = t1->next;//traverse till (n-1)th node
        
        struct Node* t2 = t1->next;//nth node

        t1->next = t2->next;//t2->next points to node after t2(n+1)th node.
        //so update (n-1)th node with address of (n+1)th node.
        free(t2);
    }
}
//delete value x.
void Delete_Val(int x)
{
    struct Node* temp = head;
    //if value is present in first node, update head with address
    //of 2nd node and free memory of first node.
    if(temp->data == x)
    {
        head = temp->next;
        free(temp);
        return;
    }
    while(temp->next->data != x)
        temp = temp->next;
    //temp stores address of node before value x (n-1)th node.
    struct Node* t1 = temp->next;
    //t1 stores address of value x.
    temp->next = t1->next;
    //update the next part of (n-1)th node with 
    //next part of t1, which points to the node after value x
    //effectively deleting value x
    free(t1);
}
//print list
void Print()
{
	struct Node* temp = head;
	printf("the list:\n");
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    Delete(4);
    Print();
    Delete(2);
    Print();
    Delete_Val(2);
    Print();
    return 0;
}