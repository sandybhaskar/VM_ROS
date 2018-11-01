/* C code for memoisation of nth fibonacci number */
#include<iostream>
#define NIL -1
#define MAX 100

using namespace std;

int lookup[MAX];

/* Function to initialize NIL values into the lookup table*/
void initialize()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		lookup[i]=NIL;
	};

}

int fib(int n)
{
	
	//cout<<"Inside fib!!"<<endl;
	//cout<< "lookup[40]"<<lookup[n]<<endl;

	if(lookup[n]==NIL)
	{

		//cout<<"Inside lookup == NIL"<<endl;
		if(n<=1)
		{
			lookup[n]=n;
			//cout<<"Inside 1"<< lookup[n];
		}
		else
		{
			lookup[n] = fib(n-1)+fib(n-2);
			//cout<<"Inside 2"<<lookup[n];
		}
	};

	return lookup[n];
	
}

int main()
{
	initialize();
	cout<<"The 40th Fibonacci number is -->"<<endl;
	int val;
	//cout<<"In here!"<<endl;
	val = fib(40);
	cout<<val<<endl;

	return 0;

}


