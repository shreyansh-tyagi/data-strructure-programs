#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  push(int,int,int);
int isfull(int,int);
void main()
{
    int i,n,ele,top=-1;
    printf("\n\nenter the size of stack: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the %d value into stack: ");
        scanf("%d",&ele);
        top=push(n,ele,top);
    }

}
int isfull(int top,int n)
{
    if(top==n-1)
    return 1;
    else
    return 0;
}
int push(int n,int ele,int top)
{
    int stack[50];
    if(isfull(top,n))
    {
        
    }
    else{
        top++;
        stack[top]=ele;
        printf("\n inserted: stack[%d]= %d",top,ele);

    }

}