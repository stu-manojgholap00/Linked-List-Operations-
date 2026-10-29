#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void display();
 void insertbeg();
 void insertend();

typedef struct node
{
    int data;
    struct node *next;
}node;
node *head,*p,*q;

int main()
{
  int n,i=0;
  printf("\nenter number of nodes:");
  scanf("%d",&n);
  
  head=malloc((struct node*)sizeof(node));
  printf("\n enter data:");
  scanf("%d",&head->data);
  p=head;
  head->next=NULL;

  for(i=1;i<n;i++)
  {
    p->next=malloc((struct node*)sizeof(node));
    p=p->next;
      printf("\n enter data:");
      scanf("%d",&p->data);
      p->next=NULL;
  }

  printf("\nbefore insertion\n");
  display();
   insertbeg();
   printf("\nafter insertion\n");
 display();

 insertend();
 printf("\nafter insertion at end");
 display();
  return 0;
}

void display()
{
    if(head==NULL)
    {
        printf("list is empty");
        exit(0);
    }
    else
  {
        p=head;
    
    while(p->next!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("%d",p->data);
  }
}

void insertbeg()
{
    p=malloc((struct node*)sizeof(node));
    printf("\nenter data:");
    scanf("%d",&p->data);
    p->next=head;
    head=p;
}
void insertend()
{
 q=malloc((struct node*)sizeof(node));
 printf("\nenter data:");
 scanf("\n%d",&q->data);
p=head;
 while(p->next!=NULL)
 {
   p=p->next;
 }
 p->next=q;
 q->next=NULL;
}
