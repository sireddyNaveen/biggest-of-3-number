#include<stdio.h>
#include<conio.h>
main()
{ 
int i,j,k;
printf("enter the 3 numbers");
scanf("%d%d%d",&i,&j,&k);
if(i>j)
{
 if(i>k)
  printf("i is the greatest");
else
  printf("k is the largest");
}
else
{
        if(j>k)
            printf("j is the largest number.");
        else
            printf("k is the largest number.");
}
getch();
}
