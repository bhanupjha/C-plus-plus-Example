#include <iostream>
using namespace std;
#define MAX 5

class stack
{
	int a[MAX];
	int top;
	public: void InitTop()
		{
			top=-1;
		}
		void push(int d)
		{
			if(top==MAX-1)
			{
				cout<<"Stack is full"<<endl;
			}
			else
			{
				a[++top]=d;
			}
		}
		int pop()
		{
			return a[top--];
		}
		int peek()
		{
			return a[top];
		}
		void Menu()
		{
			int data;
			char choice;
			while(1)
			{
				cout<<"P. push  R.pop T.peek E.Return"<<endl;
				cout<<"Enter the choice:"<<endl;
				cin>>choice;
				switch(choice)
				{
					case 'P': cout<<"Enter the data:"<<endl;
						  cin>>data;
						  push(data);
						  break;
					case 'R': if(top==-1)
						  {
							  cout<<"Stack is empty"<<endl;
						  }
						  else
						  {
							  cout<<"Data poped is:"<<pop()<<endl;
						  }
						  break;
				        case 'T': if(top==-1)
						  {
							  cout<<"Stack is empty"<<endl;
						  }
						  else
						  {
							  cout<<"data is pointed by the stack is:"<<peek()<<endl;
						  }
						  break;
					case 'E': return;
				}
			}
		}
};

int main()
{
	stack sobj1;
	sobj1.InitTop();
	sobj1.Menu();
}
