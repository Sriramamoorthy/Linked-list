#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void insert_at_end(int value)
{
    struct node *temp,*temp1;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    if(head==NULL)
    {
        temp->next=NULL;
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
void sort()
{
    int tempr;
    struct node *temp,*ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        temp = head;
        while(temp!=NULL)
        {
            if(ptr->data < temp->data)
            {
                tempr = temp->data;
                temp->data = ptr->data;
                ptr->data = tempr;
            }
            temp=temp->next;
        }
        ptr=ptr->next;
    }
}
void display()
{
    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    insert_at_end(2);
    insert_at_end(3);
    insert_at_end(1);
    insert_at_end(4);
    display();
    sort();
    display();
}
