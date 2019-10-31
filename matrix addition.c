#include<stdio.h>
#include<conio.h>
int count;
void main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j;
    clrscr();
       printf("\nEnter no of rows : ");
       scanf("%d",&m);
       printf("\nEnter no of columns : ");
      scanf("%d",&n);
          //matrix 1
            printf("\n Matrix 1\n");



            for(i=0;i<m;i++)
               {
                    for(j=0;j<n;j++)
	            {
                            printf(" Enter element : ");
	               scanf("%d",&a[i][j]);
	           }
     }
   for(i=0;i<m;i++)
        {
  	for(j=0;j<n;j++)
       	   {
		printf(" %d ",a[i][j]);
      	    }
             printf("\n");
         }
    //matrix 2
    printf("\n Matrix 2\n");
    for(i=0;i<m;i++)
         {
               for(j=0;j<n;j++)
	        {
	             printf(" Enter element : ");
	             scanf("%d",&b[i][j]);
	         }
            }
   for(i=0;i<m;i++)
          {
                 for(j=0;j<n;j++)
                     {
                       	printf(" %d ",b[i][j]);
	}
	 printf("\n");
     }
    //Sum of matrices		
      for(i=0;i<m;i++)
           {
               count=count+1;
               for(j=0;j<n;j++)
	        {
	         	count=count+1;
	  	c[i][j]=a[i][j]+b[i][j];
	  	count=count+1;
	          }
                 count=count+1;
            }
       count=count+1;
         printf("\n Matrix 3\n");
	for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
printf(" %d ",c[i][j]);
                printf("\n ");
             }
printf("Count = %d",count);
      

   
getch();
}

