#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

void create()
{
	cout << "------Creating A Pointer------" << endl;
	int a = 15;
	int *p;
	cout << "Value of a :- " << a << endl;
	cout << "Address of a :- " << &a << endl;
	p = &a;
	cout << "Address of p:- " << p << endl;
	cout << "Value of p:- " << *p << endl;

}
void Delete()
{
	cout<<"------Deleting A Pointer:- "<<endl;
	int size,choice;
	int arr[50];
	cout<<"Enter Size Of An Array:- ";
	cin>>size;
	
	for(int i=0;i<size;i++)//for inserting pointer values 
	{
		cout<<"Enter Pointer Value "<<i+1<<" :-";
		cin>>arr[i];
	}
	
Disp:
	for(int i=0;i<size;i++)
	{
		cout<<"Pointer Value "<< i+1 << " :- "<<arr[i]<<endl;	
	}	
	while(true)
	{
		cout<<"Press 1 to Insert Pointer Value:- "<<endl;
		cout<<"Press 2 to Delete Pointer Value:- "<<endl;
		cout<<"Press 3 to exit:- "<<endl;
		cout<<"Press 4 to Update:- "<<endl;
		
		
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				cout<<"Inserting Pointer Value:- "<<endl<<endl;
				size=size+1;
				cout<<"Enter Pointer Value:- ";
				cin>>arr[size-1];
				goto Disp;
				break;
			}
			case 2:
			{
				cout<<"Deleting Pointer Value:- "<<endl<<endl;
				arr[size-1]=NULL;
				size=size-1;
				goto Disp;
				break;
			}
			case 3:
			{
				exit(0);
				break;
			}
			case 4:
			{
				cout<<"------Updating Pointer------"<<endl;
				int *a;
				int v=10;
				a=&v;
				cout<<"Update Pointer Value is:- "<<v<<endl;
			
			}
			default:
			{
				cout<<endl;
			}
		}
	}
		
}
	
	

int main()
{
	create();
	Delete();
	_getch();
	return 0;

}
/*
Follow me on my github ID https://github.com/Junaid-byte
Credits:-Junaid Jawed
*/
