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
void addatloc()
{
	int loc,i;
	SinglyLinkedListNode* temp,*p;
	temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
	printf("Enter node data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	printf("Enter loc to add:");
	scanf("%d",&loc);
	if(loc==0)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		p=head;
		i=0;
	    while(i<loc-1)
	    {
	    	p=p->next;
	    	i++;
	    }
	    temp->next=p->next;
	    p->next=temp;
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
	addatloc();
	display();
	return 0;
}