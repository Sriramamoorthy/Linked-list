#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void push(int data)
{
    struct node *temp,*temp1;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    if(head==NULL)
    {
        temp->next = NULL;
        head=temp;
    }
    else
    {
        temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp->next=NULL;
        temp1->next=temp;
    }
}
void pop()
{
    struct node *temp1;
    temp1=head;
    while(temp1->next->next!=NULL)
    {
        temp1=temp1->next;
    }
    printf("%d ",temp1->next->data);
    temp1->next=NULL;
    free(temp1->next);
    
}
int main(void) {
	// your code goes here
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	pop();
	pop();
	
	return 0;
}

