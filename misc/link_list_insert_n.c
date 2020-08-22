#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
//insert at position n
void Insert(int data, int n)
{
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = data;
	temp1->next = NULL;
	if(n==1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}

	struct Node* temp2 = head;
	for(int i=0;i<n-2;i++)
		temp2 = temp2->next;

	temp1->next = temp2->next;
	temp2->next = temp1;  
}
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
void del_wo_head(struct Node* add)
{
	struct Node* temp = add;
	while(temp->next!=NULL)
	{
		temp->data = temp->next->data;
	}
	
}
struct Node* address_node(int n)
{
	struct Node* temp = head;
	int i=0;
	while(i!=n-1)
	{
		temp = temp->next;
		i++;
	}
	return temp;
}
int main()
{
	head = NULL;
	Insert(2,1);
	Insert(3,2);
	Insert(4,1);
	Insert(5,2);
	Print();
	struct Node* add;
	add = address_node(3);
	printf("%d",add);

	return 0;
}