#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
int main()
{
	int choice;
	while(1)
	{
        	printf("1.insert 2.delete 3.display 4.exit\n");
        	scanf("%d",&choice);
		switch(choice)
		{	
		case 1: insert();
		break;
		case 2: delete();			
		break;	
		case 3: display();			
		break;	
		case 4: exit(0);			
		break;	
		default:printf("wrong choice");
		}
	}
}
        
        void insert()
	{
	int add_item;
	if(rear==MAX-1)
	printf("queue overflow");
	else
	{
                if(front==-1)
		front=0;
		printf("insert element in queue:");
		scanf("%d",&add_item);
		rear+=1;
		queue_array[rear]=add_item;
	}
	}

    void delete()
    {
	
	if(front==-1||front>rear)
	{
		printf("queue underflow");
	}
	else
	{
	printf("%d delete from queue:",queue_array[front]);
	front+=1;
	}
      }
     void display()
	{
	int i;
	if(front==-1)
	{
		printf("queue is empty");
	}
	else
	{
	printf("queue is:");
	for(i=front;i<=rear;i++)
	{
		printf("%d",queue_array[i]);
	}
	}

	}

	
