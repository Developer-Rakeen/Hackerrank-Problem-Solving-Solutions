#include<stdio.h>
#include<stdlib.h>
struct SinglyLinkedListNode
{
	int data;
	struct SinglyLinkedListNode* next;
};
struct SinglyLinkedListNode* head=NULL;
typedef struct SinglyLinkedListNode SinglyLinkedListNode;
void addatbegin()
{
	SinglyLinkedListNode* temp;
	temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
	printf("Enter node data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
void display()
{
	SinglyLinkedListNode* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int i,n;
	printf("Enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		addatbegin();
	}
	display();
	return 0;
}