#include<stdio.h>
#include<conio.h>
int count;
void main()
{
    int a[10],i,flag=0,item;
    clrscr();
       printf("\n Enter elements for array: \n");
       for(i=0;i<10;i++)
             {
	    printf("Enter element = "); 	
                scanf("%d",&a[i]);
             }
      for(i=0;i<10;i++)
           {
                     printf("%d ",a[i]);
          }
  // linear search
        printf("\n Enter item to be searched : ");
       
        count=count+1;
        if(!flag)
             printf("\n element not found");
             count=count+1;
        printf("\n Count= %d ",count);
 getch();
}
