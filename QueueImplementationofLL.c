#include <stdio.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void enqueue(int data)
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
void dequeue()
{
    struct node *temp;
    temp=head;
    printf("%d ",temp->data);
    head=temp->next;
}
int main(void) {
	// your code goes here
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	dequeue();
	return 0;
}

