#include <stdio.h>
#include<conio.h>
int count;
int Binary_Search(int a[10], int l , int u , int item)
   {
	 int mid =(l+u)/2,flag=0;
	   if(l>u)
	      return -1;
	    if(a[mid]==item)
			 return mid;
	  else if(a[mid]<item)
			return Binary_Search(a,mid+1,u,item);
	  else
			return Binary_Search(a,l,mid-1,item);
	
	    if(!flag)
		     printf("\n item not found ");
		      return -1;
 }
void main()
{
   int i,j ,arr[10],temp=0,l,u,mid,n,item,flag,pos;
   clrscr();
   flag=0;
      printf("\nEnter size of array elemnts : ");
      scanf("%d",&n);
      printf("\nEnter array elements : \n");
        for(i=0;i<n;i++)
            {
		printf("Enter element : ");
		scanf("%d",&arr[i]);
            }
    printf("Sorted Array\n");
    for(i=0;i<n;i++)
	printf("%d ",arr[i]);
  //Binary  Search
    l=0;
    u=n-1;
    mid=(l+u)/2;

            printf("\n Enter item to be searched: ");
    scanf("%d",&item);
    	pos=Binary_Search(arr,l,u,item);
    	printf("\nElement found at position = %d",pos+1);
  getch();
}
