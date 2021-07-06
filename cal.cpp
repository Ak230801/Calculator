#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
main()
{
	cout<<"\n\n\n\n    ";
	for(int i=1;i<=70;i++)
	{Sleep(50);
	cout<<".";}
	cout<<"\n     ";
    for(int i=1;i<=68;i++)
	{Sleep(50);
	cout<<".";}
	cout<<"\n      ";
    for(int i=1;i<=66;i++)
	{Sleep(50);
	cout<<".";}
	cout<<"\n       ";
    for(int i=1;i<=64;i++)
	{Sleep(50);
	cout<<".";}
	Sleep(50);
	cout<<"\n       ...\t\t\t\t\t\t\t    ...";
	Sleep(50);
	cout<<"\n        ...                        CALCULATOR                      ...";
	Sleep(50);
	cout<<"\n         ...                                                      ...";
	Sleep(50);
	cout<<"\n         ...\t\t\t\t\t\t\t  ...";
	Sleep(50);
	cout<<"\n        ...                                                        ...";
	Sleep(50);
	cout<<"\n       ...                                                          ...";
	cout<<"\n       ";
	for(int i=1;i<=64;i++)
	{Sleep(50);
	cout<<".";}
	cout<<"\n      ";
    for(int i=1;i<=66;i++)
	{Sleep(50);
	cout<<".";}
	cout<<"\n     ";
    for(int i=1;i<=68;i++)
	{Sleep(50);
	cout<<".";}
	cout<<"\n    ";
    for(int i=1;i<=70;i++)
	{Sleep(50);
	cout<<".";}
	getch();
	system("cls");
	cout<<"\n\n   Calculator             Introduction of Developer                       ";
	cout<<"\n   ________________________________________________________________________";
	cout<<"\n    ______________________________________________________________________";
	cout<<"\n     ____________________________________________________________________";
	cout<<"\n\n     Name       :                                             ANINDITA";
	cout<<"\n\n     Roll No.   :                                           CSE/19/107";
	cout<<"\n\n     Class      :                                           BTECH-CSE";
	cout<<"\n\n     Institute  :                                            GGSIPU";
	cout<<"\n     ____________________________________________________________________";
	cout<<"\n    ______________________________________________________________________";
	cout<<"\n   ________________________________________________________________________";
	getch();
	system("cls");
	cout<<"\n\n   Calculator             Calculator Use Key's                 Version 1.1";
	cout<<"\n   ________________________________________________________________________";
	cout<<"\n    ______________________________________________________________________";
	cout<<"\n     ____________________________________________________________________";
	cout<<"\n\n     1. Press : Operator's for Continue Use";
	cout<<"\n\n     2. Press : 0 for Again Use";
	cout<<"\n\n     3. Press : any key for Close the Calculator";
	cout<<"\n\n     ____________________________________________________________________";
	cout<<"\n    ______________________________________________________________________";
	cout<<"\n   ________________________________________________________________________";
	getch();
	k:
	system("cls");
	float i,j,pow;
	int mod1,mod2;
	char op;
	cout<<"\n\n   Calculator             Data Collection Process              Version 1.1";
	cout<<"\n   ________________________________________________________________________";
	cout<<"\n    ______________________________________________________________________";
	cout<<"\n     ____________________________________________________________________";
	cout<<"\n\n\t";
	cin>>i;
	cout<<"\t";
	cin>>op;
	p:
	while(op != '=')
	{
		if(op != '!')
		{
		cout<<"\t";
		cin>>j;
	    }
		if(op == '+')
		{
		  i=i+j;	
		}
		else if(op == '-')
		{
			i=i-j;
		}
		else if(op == '*')
		{
			i=i*j;
		}
		else if(op == '/')
		{
			i=i/j;
		}
		else if(op == '^')
		{pow=1;
			if(j >= 0)
			{
			for(int k=1;k<=j;k++)
			{
				pow=pow*i;
			}
			i=pow;
		    }
		    else
		    {j=j*-1;
		    for(int k=1;k<=j;k++)
			{
				pow=pow*i;
			}
			pow=1/pow;
			i=pow;	
			}
		}
		else if(op == '!')
		{pow=1;
			if(i >= 0)
			{
			for(int k=1;k<=i;k++)
			{
				pow=pow*k;
			}
			i=pow;
		    }
		    else
		    {
		    for(int k=1;k<=i;k++)
			{
				pow=pow*k;
			}
			pow=pow*-1;
			i=pow;	
			}
		}
		else
		{
		mod1=i;
		mod2=j;
		mod1=mod1%mod2;
		i=mod1;
		}
		cout<<"\t";
		cin>>op;	
	}
	system("cls");
	cout<<"\n\n   Calculator             Result Screen                        Version 1.1";
	cout<<"\n   ________________________________________________________________________";
	cout<<"\n    ______________________________________________________________________";
	cout<<"\n     ____________________________________________________________________";
	cout<<"\n\n\t"<<i<<"\n\t";
	cin>>op;
	if(op == '+' || op == '-' || op == '*' || op == '/' || op == '^' || op == '!' || op == '%')
	goto p;
	else if(op == '0')
	goto k;
	getch();
	return 0;
}