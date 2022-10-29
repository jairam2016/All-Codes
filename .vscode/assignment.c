#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* insert_at_front(struct node *head_ptr)
{
    int value;
    printf("\nENTER THE DATA YOU WANT TO INSERT AT FRONT: ");
    scanf("%d",&value);
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=value;
    head->next=head_ptr;
    head_ptr=head;
    return head_ptr;
}
int search_element(struct node *head_ptr,int key)
{
    int c=0;
    struct node *temp=head_ptr;
    struct node *end=(struct node*)malloc(sizeof(struct node));
    end=NULL;
    if(head_ptr==NULL)
    {
        return 0;
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                c=c+1;
                // return temp;
            }
            temp=temp->next;
        }
        if(c>=1)
        {
            return c;
        }
       return 0;
    }
}
void printing(struct node *head_ptr)
{
    struct node *temp=head_ptr;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void replace(struct node *head_ptr,int val,int rep,int choice)
{
    struct node *temp=head_ptr;
    while(temp->next!=NULL)
    {
        if(temp->data==val)
        {
            temp->data=rep;
            if(choice==0)
            {
                return;
            }
        }
        temp=temp->next;
    }
}
int main()
{
    struct node *head_ptr=(struct node*)malloc(sizeof(struct node));
    head_ptr=NULL;
    int search;
    int choice;
    do
    {
        printf("\n1.INSERT AT THE BEGINNING: ");
        printf("\n2.SERACH THE ELEMENT: ");
        printf("\n3.PRINT THE LIST: ");
        printf("\n4.REPLACE THE VALUE IN THE LINKED LIST");
        printf("\n5.EXIT THE PROGRAM");
        printf("\nENTER YOUR CHOICE PLEASE: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            head_ptr=insert_at_front(head_ptr);
        }
        if(choice==2)
        {
            printf("\nENTER THE ELEMENT TO BE SEARCHED :");
            scanf("%d",&search);
            int LOC=search_element(head_ptr,search);
            if(LOC!=0)
            {
                printf("\nYES!! THE ELEMENT EXSISTS IN THE LINKED LIST.\n");
            }
            else
            {
                printf("\nELEMENT NOT FOUND\n");
            }
        }
        if(choice==3)
        {
            printing(head_ptr);
        }

        if(choice==4)
        {
            int val=0,rep=0,choice=0;
            printf("\nENTER THE VALUE YOU WANT TO REPLACE: ");
            scanf("%d",&val);
            int LOC=search_element(head_ptr,val);
            if(LOC!=0)
            {
                printf("\nENTER THE VALUE YOU WANT TO REPLACE WITH: ");
                scanf("%d",&rep);
                if(LOC>1)
                {
                    printf("\nDO YOU WANT TO REPLACE ALL THE OCCURANCES OF %d . PRESS '1' OR '0' ",val);
                    scanf("%d",&choice);
                    replace(head_ptr,val,rep,choice);
                    printf("\nTHE REPLACEMENT HAS BEEN DONE\n");
                }
                else
                {
                    replace(head_ptr,val,rep,choice);
                    printf("\nTHE REPLACEMENT HAS BEEN DONE\n");
                }
            }
            else
            {
                printf("\nELEMENT NOT FOUND.");
            }
        }
    }while(choice!=5);
}