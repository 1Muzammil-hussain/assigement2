/*
Name:
					Muzammil Hussain
Department:
   					BS-Data Science
Session:
					2022 - 2026
Subject:
					Programming Foundament

Semester:
					1st
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
float n1,n2;
char oper;
	while(1)
	{	
cout<<"\n\n\n\n";
cout<<"\t\t\tenter a 1nd number:";
cin>>n1;
cout<<"\t\t\tenter a 2nd number:";
cin>>n2;
cout<<"\t\t\tenter a operator:";
cin>>oper;
switch(oper)
{
	case '+':
	cout<<"\t\t\tsum="<<n1+n2<<endl;
	break;
	case'-':
	cout<<"\t\t\tsub="<<n1-n2<<endl;
	break;
	case'*':
	cout<<"\t\t\tmultiply="<<n1*n2<<endl;	
	break;
	case'/':
	cout <<"\t\t\tdivide="<<n1/n2<<endl;
	break;
	case'%':
	cout <<"\t\t\treminder="<<(int)n1%(int)n2<<endl;
	break;
	default:
	cout<<"\t\t\tinvild operator\n";
}
    char c;
    cout << "\t\t\t-----------------------\n";
	cout<<"\t\t\tenter a choice"<<endl;
	cout<<"\t\t\tYES FOR y"<<endl;
	cout<<"\t\t\tNO FOR n"<<endl;
	cout << "\t\t\t-----------------------\n";
	c=getche();
   if(c=='y')
	{
		continue;
	}
   else if(c=='n')
    {
	break;
    }
   else
    {
	cout<<"\t\t\t\ninvild choice";
	break;
	}	
}
}