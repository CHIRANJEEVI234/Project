#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void design();
void allprogram();    // function declaration
void prime();void odd();void even();void fact();void fibo();void flo();void arm();void sum();void pas();
void main()
{
clrscr();
allprogram(); // function calling
getch();
}
void allprogram()
{
int option;
printf("\n*************** Menus*****************\n");
printf("1. Odd Number Generation\n");
printf("2. Even Number Generation\n");
printf("3. Prime Number Generation\n");
printf("4. Armstrong Number Generation\n");
printf("5. Fibonacci Number Generation\n");
printf("6. Pascal Design Generation\n");
printf("7. Flody Design Generation\n");
printf("8. Factorial Number Generation\n");
printf("9. Sum Of Series Generation\n");
printf("0. For Exit\n");
printf("Please Select Your Choice\n");
scanf("%d",&option);
switch(option)
{
case 1: odd();
break;
case 2: even();
break;
case 3: prime();
break;
case 4:  arm();
break;
case 5:  fibo();
break;
case 6:  pas();
break;
case 7:  flo();
break;
case 8:  fact();
break;
case 9:  sum();
break;
case 0: printf("***** Thank You **** ByE!!!!\n");
getch();
exit(1);
break;
default: printf("Sorry !!! Invalid option\n");
	allprogram();
}
}
		//ODD NUMBER
void odd()
{
int i,n;
design();
setbkcolor(7);
printf("Please enter nth term\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	if(i%2==1)
	{
		printf("%d\t",i);
	}
}
		    //EVEN NUMBER
printf("\n***********************\n");
allprogram();
}
void even()
{
int i,n;
design();
setbkcolor(6);

printf("Please enter nth term\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	if(i%2==0)
	{
		printf("%d\t",i);
	}
}
		  //PRIME NUMBER
printf("\n***********************\n");
allprogram();
}
void prime()
{
int i,j,n,count=0;
design();
setbkcolor(3);

printf("Enter nth term\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
count=0;
	for(j=1;j<=i;j++)
	{
			if(i%j==0)
			{
			       count++;
			}
	}
	if(count==2)
	{
		printf("%d\t",i);
	}
}
printf("\n***********************\n");
allprogram();
		   //FIBONACCI NUMBER
}
void fibo()
{
int i,n,a,b,c;
design();
setbkcolor(1);

printf("Enter nth term\n");
scanf("%d",&n);
a=0;
b=1;
for(i=0;i<=n;i++)
{
	   c=a+b;
	   printf("%d\t",c);
	   a=b;
	   b=c;
}
printf("\n***********************\n");
allprogram();
		   //PASCAL DESIGN
}
void pas()
{
int p,q=0,r,bin,x;
design();
setbkcolor(BLUE);

    printf("Enter Nth Term\n");
    scanf("%d",&p);
    while(q<p)
    {
	     for(r=40-3*q;r>0;r--)
	     {
			  printf(" ");
	     }
	     for(x=0;x<=q;x++)
	     {
			     if(x==0)
			     {
				bin=1;
			     }
			     else
			     {
				bin=bin*(q-x+1)/x;
			     }
		printf("%6d",bin);
	     }
	++q;
	prinf("\n");
    printf("\n***********************\n");
allprogram();
	     //ARMSTRONG NUMBER
}
void arm()
{
int n,m,n1,sum,i;
design();
setbkcolor(WHITE);

printf("Enter nth term\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=0;
n1=i;
do
{
m = n1 % 10;
sum = sum + ( m*m*m);
n1 = n1 / 10;
}while(n1!=0);
if(sum==i)
{
printf("%d\t",i);
}
}
printf("\n***********************\n");
allprogram();

			      //SUM OF SERIES
}
void sum()
{
int i,n,sum=0;
design();
setbkcolor(BROWN);

printf("enter nth term\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	   sum = sum + i;
}
printf("Sum of series %d\t",sum);
printf("\n***********************\n");
allprogram();
}
void fact()
{
int i,n,sum=1;
design();
setbkcolor(YELLOW);

printf("enter nth term\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	   sum = sum * i;
}
printf("Sum of series %d\t",sum);

printf("\n***********************\n");
allprogram();
}
			  //FLOADY DESIGN
void flo()
{
int i,j,n,a=1;
design();
setbkcolor(GREEN);

printf("Enter nth term\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	{
			printf("%d",a);
			a++;
	}
	printf("\n");
}
printf("\n***********************\n");
allprogram();

}
void design()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"../bgi");
}