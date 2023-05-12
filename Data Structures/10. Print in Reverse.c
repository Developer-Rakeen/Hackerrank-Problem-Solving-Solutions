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
void reverse_print()
{
	int i,j,len=0,k,temporary;
	SinglyLinkedListNode *p,*q,*temp;
	i=0;
	temp=head;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	j=len-1;
	p=q=head;
	while(i<j)
	{
	   	k=0;
        while(k<j)
	    {
	    	q=q->next;
		    k++;
	    }
	    temporary=p->data;
	    p->data=q->data;
	    q->data=temporary;
	    i++;
	    j--;
	    p=p->next;
	    q=head;
    }
    temp=head;
    while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int i,j,n,t;
	printf("Enter number:");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		printf("Enter size:");
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			append();
		}
		reverse_print();
		head=NULL;
	}
	return 0;
}