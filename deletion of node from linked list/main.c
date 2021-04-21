#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *link;
};
struct node * delete(struct node *,int);
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL,*q=NULL;
  int n,i;
  printf("\nenter the size of linked list: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      temp=(struct node*)malloc(sizeof(struct node));
      printf("enter the %d data into linked list: ",i);
      scanf("%d",&temp->data);
      temp->link=NULL;
      if(root==NULL)
      {
          root=temp;
          q=temp;
      }
      else{
          p=root;
          while(p->link!=NULL)
          {
              p=p->link;
          }
          p->link=temp;
      }
  }
  while(q->link!=NULL)
  {
      printf("%d  ",q->data);
      q=q->link;
  }
  printf("%d",q->data);
  free(q);
  root=delete(root,n);
  
  for(i=1;i<n-1;i++)
  {
      if(root->link!=NULL)
      {
      printf("%d  ",root->data);
      root=root->link;
      }
      else
      {
          printf("%d  ",root->data);
      }
  }
}
struct node * delete(struct node *root,int n)
{
    struct node *temp=NULL;
  printf("\n\nafter deletion from first position:\n\n");
  temp=root;
  root=temp->link;
  printf("\n\nfirst node deleted\n\n");
  free(temp);
  return root;
}