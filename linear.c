#include<stdio.h>
int  main()
{
  int a[10],n,key,i;
  printf("enter number of elements:");
  scanf("%d",&n);
  printf("enter elements of array");
  for(i=0;i<n;i++)
  {
	  scanf("%d",&a[i]);
  }
  printf("enter key:");
  scanf("%d",&key);
  for(i=0;i<n;i++)
	 if(a[i]==key)
	 {
		 printf("key is found");
		 break;
	}
	
	 if(i==n){
		 printf("key is not found");
	 }
 }


 

