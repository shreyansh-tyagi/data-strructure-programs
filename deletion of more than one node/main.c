#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
void main()
{
    struct node *temp=NULL,*root=NULL,*ptr=NULL;
    int n,i;
    printf("enter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the %d element into linked list: ",i);
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(root==NULL)
        { 
            root=temp;

        }
        else{
            ptr=root;
            while(ptr->link!=NULL)
            {
                printf("%d  ",ptr->data);
                ptr=ptr->link;
            }
        }
    }
}
