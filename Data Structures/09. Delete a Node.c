#include<stdio.h>
#include<stdlib.h>
struct SinglyLinkedListNode
{
	int data;
	struct SinglyLinkedListNode* next;
};
struct SinglyLinkedListNode* head=NULL;
typedef struct SinglyLinkedListNode SinglyLinkedListNode;
void append()
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
		SinglyLinkedListNode* p;
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}
void deletion()
{
	SinglyLinkedListNode* temp;
	int position;
	printf("Enter position to delete:");
	scanf("%d",&position);
	if(position==0)
	{
		temp=head;
		head=temp->next;
		temp->next=NULL;
		free(temp);
	}
	else
	{
		SinglyLinkedListNode* p=head,*q;
		int i=0;
		while(i<position-1)
		{
			p=p->next;
			i++;
		}
		q=p->next;
		p->next=q->next;
		q->next=NULL;
		free(q);
	}
}
void display()
{
	SinglyLinkedListNode* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
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
		append();
	}
	deletion();
	display();
	return 0;
}