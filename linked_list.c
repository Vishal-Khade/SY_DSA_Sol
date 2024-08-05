#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int info;
    struct node *next;
};

struct node *create(struct node *head)
{
    int n,count;
    struct node * last,*newnode;
    printf("how many nodes :");
    scanf("%d",&n);
    last =head;
    for ( count = 0;count<=n; count++)
    {
        newnode=(struct node *) malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("\nEnter the node data:");
        scanf("%d",&newnode->info);
        last->next=newnode;
        last = newnode;
    }

    return (head);
    
}

void display(struct node *head){
  struct node *temp =NULL;
  temp=head->next;

  do
  {
    printf("%d\t",temp->info);
    temp=temp->next;
  } while (temp!=NULL);
  
    
}

void main(){

    struct node *head=NULL;
    struct node *createlist();
    void display();

    int ch,q=0;
    head=(struct node *)malloc (sizeof(struct node));
    head->next=NULL;

    do
    {
        printf("\n1.create\n2.Display\n3.exit");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
               head=create(head);
            break;
        
        case 2:
               display(head);
            break;

        case 3:
               q=1;
               break;
        }
    } while (q==0);
    

}
