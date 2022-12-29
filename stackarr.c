#include<stdio.h>
int stack[100],choice,n,top = -1,x,i;
void push();
void pop();
void display();
int main(){
	printf("enter size of stack");
	scanf("%d",&n);
	do
	{
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
	}while(choice!=4);
}
void push(){
	if(top >=n-1)
		printf("stack overflow");
	else
		printf("enter value to push");
	        scanf("%d",&x);
		top++;
		stack[top]=x;
}
void pop()
{
	if(top == -1)
		printf("stack underflow");
	else 
		printf("poped element is %d",stack[top]);
	top--;
}
void display()
{
	int i;
	if(top>=-1)
	{
		printf("elements in stack are:");
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
	}
	else
		printf("stack is empty");
}

