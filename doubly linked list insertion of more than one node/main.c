#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
void display(struct node *,int );
struct node * insert_more_than_one(struct node * ,int );
void reverse(struct node *,int);
void main()
{
    int n,i;
    struct node *temp=NULL,*root=NULL,*p=NULL;
    printf("\n\nenter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the %d element into linked list: ",i);
        scanf("%d",&temp->data);
        temp->left=NULL;
        temp->right=NULL;
        if(root==NULL)
        {
            root=temp;
        }
        else{
            
        }
    }

}