#include<stdio.h>
#include<stdlib.h>
struct Node
{
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
}//end

void Reverse()
{
    struct Node *current,*prev,*next;
    current = head;
    prev = NULL;

    while(current!=NULL)
    {
        next = current->next;//next stores add of next node to move forward
                            //the control after link is reversed for 
                            //the current node
        current->next = prev;//update current node(next part) with add 
                             //of prev node,
                            //starting with NULL
        prev = current;     //stores the current node add so that when
                            //control moves to next node, it can point to
                            //prev node to reverse the linking
        current = next;     //move the control to next node.
    }
    head = prev;        //update old head with prev at last,prev will 
                        //contain add of the last node of original list,
                        //which will become new head of the reversed list
}//end

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
}//end

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    Reverse();
    Print();

    return 0;
}