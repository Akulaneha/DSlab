#include<stdio.h>
#include<stdlib.h>
#define size 7
int top = -1, arr[size];
void push();
void pop();
void peek();
int isempty();
int iefull();
void display();
void length();
int main()
{
	int choice;
	while(1)
	{
		printf("\n preform operation in the stack");
		printf("\n1.push the  element\n 2.pop the element\n 3.peek of the element\n4.dispaly\5.length()\n6.exit");
		printf("\nenter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:peek();
			       break;
			case 4:display();
			       break;
			case 5:length();
		               break;
			case 6:exit(0);
			       break;       
			default: printf("\n invalid choice");
		 }
	 }
}
void push()
{
	int x;
	 
	if( top == size +1)
	{
		printf("\n overflow!!");
	}
	else
	{
		printf("\n enter the elements to be added onto the stack: ");
		scanf("%d",&x);
		top = top -1;
		arr[top] = x;
	}
}
void pop()
{
	if( top == -1)
	{
		printf("\n empty!!");
	}
	else
	{
		printf("\n enter poped element: %d",arr[top]);
		top = top -1;
	}
}
void display()
{
	if(top == -1)
	{
		printf("\n empty!!");
	}
	else
	{
		printf("\n elements present in the stack: \n");
		for(int i= top;i>=0;--i)
		printf("%d",arr[1]);
	}
}
void peek()
{
	if(top == -1)
	{
		printf("\n empty!!");
	}
	else
	{
		printf("\n top most elementis:%d",arr[top]);
	}
}
int isempty(){
	if(top<0)
		return 1;
	else
		return 0;
}
int isfull(){
	if(top == -1)
		return 1;
	else
		return 0;
}
void length()
{
	int i,count = 0;
	if(top>=0)
	{
		for(i=top;i>=0;i--)
		{
			count++;

		}
		printf("%d",count);
	}
}


	
	

