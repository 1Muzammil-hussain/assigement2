#include<iostream> 
#include<stdio.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int k=0;
class ph{ 
public:
   string name[100];
   string no[100];
   int menu()
{
	     cout<<"\n\n\n\n\n\n\n\n\n\n";
	     cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\tPHONE BOOK APPLIcATION          \n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
	     cout<<"\t\t\t\t\t| [1] Addcontact                |\n";
		 cout<<"\t\t\t\t\t| [2] display all contact       |\n";
		 cout<<"\t\t\t\t\t| [3] Search by number          |\n";
		 cout<<"\t\t\t\t\t| [4] Search by name            |\n";
		 cout<<"\t\t\t\t\t| [5] update                    |\n";
		 cout<<"\t\t\t\t\t| [6] Dlete                     |\n";
		 cout<<"\t\t\t\t\t| [7] Dlete all                 |\n";
		 cout<<"\t\t\t\t\t| [8] number of contact         |\n";
	     cout<<"\t\t\t\t\t---------------------------------\n";
	     cout<<"\t\t\t\t\t  [9] Exits                      \n";
		 cout<<"\t\t\t\t\t----------------------------------\n";	
	int n;
	cout<<"\t\t\t\t choic your option:";
	cin>>n;
	system("cls");
    return n;	
}
   
   
void load()
{       
        system("color 0A");
        char a = 177, b = 219;
		 cout<<"\n\n\n\n\n\n\n\n\n\n";
		 cout<<"\t\t\t\t\t----------------------\n";
		 cout<<"\t\t\t\t\t----------------------\n";
		 cout<<"\t\t\t\t\tPHONE BOOK APPLIcATION\n";
		 cout<<"\t\t\t\t\t----------------------\n";
		 cout<<"\t\t\t\t\t----------------------\n";
    printf("\n\t\t\t\t\t"
            "Loading...\n");
    printf("\t\t\t\t\t");
for (int i = 0; i < 26; i++)
        printf("%c", a);
		printf("\r");
    printf("\t\t\t\t\t");
  for (int i = 0; i < 26; i++) {
        printf("%c", b);
		 Sleep(100);	}
		 system("cls");
}
   

   
};



int main()
{
	
   ph newcon;
   newcon.load();
   int total_c=0;
   int check=0;
   

   
   check=newcon.menu();
   do
   {
   if(check==1)
   {
   cout<<"\t\t\t\t\t  Name:";
   cin>>newcon.name[k];
   
   cout<<"\t\t\t\t\t  number:";
   cin>>newcon.no[k];
   k++;
   total_c++;
	   }
	else if(check==2){
		for(int i=0;i<100;i++)
		{
			if(newcon.name[i]!="\0")
			cout<<"\t\t\t\t\t\t name:"<<newcon.name[i]<<"       phone no:"<<newcon.no[i]<<endl;
			
		}		
	}
	else if(check==3)
	{
		string temp;
		cout<<"\t\t\t\t\t\t Number:";
		cin>>temp;
		int c=0;
		for(int i=0;i<100;i++){
			if(temp==newcon.no[i])
			{
				cout<<"\t\t\t\t\t\t number is found\n";
				cout<<"\t\t\t\t\t\t name:"<<newcon.name[i]<<"       phone no:"<<newcon.no[i]<<endl;
	         c++;	
			}
			
		}
			if(c==0)
				{
			cout<<"\t\t\t\t this number is not found in your contact\n";
					}
		}
	
		else if(check==4)
	{
		string temp;
		cout<<"\t\t\t\t\t\t Name:";
		cin>>temp;
		int c=0;
		for(int i=0;i<100;i++)
		{
			if(temp==newcon.name[i])
			{
				cout<<"\t\t\t\t\t\t name is found\n";
				cout<<"\t\t\t\t\t\t name:"<<newcon.name[i]<<"       phone no:"<<newcon.no[i]<<endl;
			    c++;
			}	}	
				if(c==0)
				{
			cout<<"\t\t\t\t this name is not found in your contact\n";
					}
	}
		else if(check==5)
		{
		string temp,t1,t2;
		cout<<"\t\t\t\t\t\t Name:";
		cin>>temp;
		int c=0;
		for(int i=0;i<100;i++)
		{
			if(temp==newcon.name[i])
			{
				 cout<<"\t\t\t\t\t new name:";
				 cin>>t1;
				 cout<<"\t\t\t\t\t new number:";
				 cin>>t2;
			newcon.name[i]=t1;
				newcon.no[i]=t2;
			    c++;
			    cout<<"\t\t\t\t update successfully";
			}	}	
				if(c==0)
				{
			cout<<"\t\t\t\t this name is not found in your contact\n";
					}
		}
	else if(check==6)
	{
		string temp;
		cout<<"\t\t\t\t\t\t for Delete name:";
		cin>>temp;
		int c=0;
		for(int i=0;i<100;i++)
		{
			if(temp==newcon.name[i])
			{
				cout<<"\t\t\t\t\t\t Deletes successfully\n";
				cout<<"\t\t\t\t\t\t name:"<<newcon.name[i]<<"       phone no:"<<newcon.no[i]<<endl;
             newcon.name[i]="\0";
             newcon.no[i]="\0";
              c++;
              total_c--;
			}
				}
				if(c==0)
				{
			cout<<"\t\t\t\t\t\t\t this name is not found in your contact\n";
					}		
	}
	else if(check==7){
		cout<<"\t\t\t\t\t\t ALL Deletes successfully\n";
		for(int i=0;i<k;i++){
		newcon.name[i]="\0";
		newcon.no[i]="\0";
		}
		k=0;
		total_c=0;
	}
	else if(check==8)
	{
		cout<<"\t\t\t\t total contract List:"<<total_c<<endl;
	}
		else if(check==9)
	{
		exit(0);
	}
	check=newcon.menu();   	
  }while(check!=9);
   	
}