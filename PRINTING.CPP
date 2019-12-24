#include<iostream.h>
#include<conio.h>
void patterns();
void rect();
void sqr();
void pascl();
void rtriangle();
void floudy();
void main()
{
    clrscr();
    patterns();
    getch();
}
 void patterns()
 {
   int option;
   cout<<"*************************"<<endl;
   cout<<"1. rectangle pattern"<<endl;
   cout<<"2. square pattern"<<endl;
   cout<<"3. right angle triangle pattern"<<endl;
   cout<<"4. pascal pattern"<<endl;
   cout<<"5. floudy pattern"<<endl;
 cin>>option;
  switch(option)
  {
    case 1: rect();
    break;
    case 2: sqr();
    break;
    case 3: rtriangle();
    break;
    case 4: pascl();
    break;
    case 5: floudy();
    break;
    case 0:cout<<"****thank you*****"<<endl;
    break;
    default:cout<<"invalied option"<<endl;
    patterns();
    getch();
  }
  }

  // rectangle pattern
  void rect()
  {
  int i,j;
  clrscr();
   for(i=0;i<5;i++)
    {
      for(j=0;j<8;j++)
      {
       cout<<"*";
      }
      cout<<endl;
    }
    getch();
textcolor(2+BLINK);
cprintf("***************\n");
patterns();
}

// square pattern
void sqr()
  {
  int i,j,n;
  clrscr();
 cout<<"enter the value of n"<<endl;
 cin>>n;
   for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
       cout<<"*";
      }
      cout<<endl;
    }
    getch();
textcolor(3);
cprintf("***************\n");
patterns();
}

//right angle triangle
void rtriangle()
  {
  int i,j,n;
  clrscr();
 cout<<"enter the value of n"<<endl;
 cin>>n;
   for(i=0;i<n;i++)
    {
      for(j=0;j<i;j++)
      {
       cout<<"*";
      }
      cout<<"\n";
    }
    getch();
textcolor(3);
cprintf("***************\n");
patterns();
}

//pascal pattern

void pascl()
  {
  int i,j,k,n,c=40;
  clrscr();
 cout<<"enter the value of n"<<endl;
 cin>>n;
   for(i=0;i<n;i++)
    {
      for(j=0;j<c-i;j++)
      {
       cout<<" ";
      }
      for(k=0;k<(2*i)-1;k++)
      {
       cout<<"*";
      }
      cout<<endl;
    }
    getch();
textcolor(4);
cprintf("***************\n");
patterns();
}

//floudy pattern
void floudy()
  {
  int i,j,n;
  clrscr();
 cout<<"enter the value of n"<<endl;
 cin>>n;
   for(i=0;i<n;i++)
    {
      for(j=i;j<n;j++)
      {
       cout<<"*";
      }
      cout<<endl;
    }
    getch();
textcolor(5);
cprintf("***************\n");
patterns();
}