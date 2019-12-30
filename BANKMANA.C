#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

   //structure declaration
   struct acc_type
   {
    char bank_name[100];
    char bank_branch[100];
    char acc_holder_name[100];
    int acc_number;
    char acc_holder_address[100];
    float available_balance;
   };

   struct acc_type account[100];
   int num_acc;

   void create_new_account();
   void cash_deposit();
   void cash_withdrawl();
   void account_information();
   void log_out();
   void display_options();

   /* MAIN PROGRAM */
   int main()
   {
     char option;
     num_acc=0;
     while(1)
     {
	printf("\n****welcome to bank application*****\n");
	display_options();
	printf("please enter any options (1/2/3/4/5/6) to continue");

	option=getch();
	printf("%c\n",option);
	switch(option)
	{
	 case'1':create_new_account();
		 break;
	 case'2':cash_deposite();
		 break;
	 case'3':cash_withdrawl();
		 break;
	 case'4':account_information();
		 break;
	 case'5':return 0;
	 case'6':system("cls");
		 break;
	 default:system("cls");
		 printf("please enter one of the options");
		 printf("(1/2/3/4/5/6) to continue \n");
		 break;
	}
     }
    // return 0;
   }

   /*FUNCTION TO DISPLAY AVAILABLE OPTIONS IN THIS APPLICATION */
       void display_options()
       {
	printf("\n 1. create new account\n");
	printf("2. cash deposite\n");
	printf("3.cash withdrawl\n");
	printf("4.account information\n");
	printf("5.log out\n");
	printf("6.clear the screen and display available ");
	printf("7.options\n\n");
       }


	 /* FUNCTION TO CREATE NEW ACCOUNT */

	 void create_new_account()
	 {
	  char bank_name[100];
	  char bank_branch[100];
	  char acc_holder_name[100];
	  char acc_holder_address[100];
	  float available_balance=0;
	  int acc_number;
	 // fflush(std.in);
	  printf("enter the bank name : \n");
	  scanf("%s",&bank_name);
	  printf("enter the bank branch : \n");
	  scanf("%s",&bank_branch);
	  printf("enter the account holder name : \n");
	  scanf("%s",&acc_holder_name);
	  printf("enter the account number : \n");
	  scanf("%d",&acc_number);
	  printf("enter the account holder address : \n");
	  scanf("%s",&acc_holder_address);


	  strcpy(account[acc_number-1].bank_name,bank_name);
	  strcpy(account[acc_number-1].bank_branch,bank_branch);
	  strcpy(account[acc_number-1].acc_holder_name,acc_holder_name);
	  account[acc_number-1].available_balance=available_balance;
	  strcpy(account[acc_number-1].acc_holder_address,acc_holder_address);
	  account[acc_number-1].available_balance=available_balance;


	  printf("\nAccount has been created successfully\n\n");
	  printf("bank name :%s\n", account[acc_number-1].bank_name);
	  printf("bank branch : %s\n", account[acc_number-1].bank_branch);
	  printf("account holder name : %s\n",account[acc_number-1].acc_holder_name);
	  printf("account number : %d\n", account[num_acc].acc_number);
	  printf("account holder address : %s\n",account[num_acc].acc_holder_address);
	  printf("available balance : %f\n\n", account[num_acc].available_balance);
	 // num_acc++;
	  }

	  //displaying account information
	  void account_information()
	  {
	  register int num_acc=0;
	  while(strlen(account[num_acc].bank_name)>0)
	  {
	    printf("\n bank name : %s\n",account[num_acc].bank_name);
	    printf("bank branch : %s\n",account[num_acc].bank_branch);
	    printf("account holder name : %s\n",account[num_acc].acc_holder_name);
	    printf("account number : %d\n", account[num_acc].acc_number);
	    printf("account holder address : %s\n",account[num_acc].acc_holder_address);
	    printf("available balance : %f\n\n",account[num_acc].available_balance);
	    num_acc++;
	  }
	 }

	  //function to deposite amount in an account

   void cash_deposit()
   {
    auto int acc_no;
    float add_money;

    printf("enter account number you want to deposite money:");
    scanf("%d",&acc_no);
    printf("\n the current balance for account %d is %f \n", acc_no,account[acc_no-1].available_balance);
    printf("\nenter the money you want to deposit : ");
    scanf("%f",&add_money);


    while(acc_no==account[acc_no-1].acc_number)
    {
      account[acc_no-1].available_balance=account[acc_no-1].available_balance+add_money;
      printf("\n the new balance for account %d is %f \n",acc_no,account[acc_no-1].available_balance);
      break;
    }acc_no++;
  }


  //function to withdraw amount from an account

  void cash_withdrawl()
  {
    auto int acc_no;
    float withdraw_money;

    printf("enter the account number you want to withdraw money:");
    scanf("%d",&acc_no);
    printf("\n the current balance for account %d is %f \n", acc_no,account[acc_no-1].available_balance);
    printf("\n enter money you want to withdraw from account");
    scanf("%f",&withdraw_money);


    while(acc_no==account[acc_no-1].acc_number)
    {
      account[acc_no-1].available_balance=account[acc_no-1].available_balance;
      printf("\n the new balance for account %d is %f\n",acc_no,account[acc_no-1].available_balance);
      break;
      }acc_no++;
  getch();
  }


