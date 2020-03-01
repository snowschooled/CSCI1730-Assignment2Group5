//CSCI Group 5 assignment 2 problem #3
//Joel Piontek, Andrew Amakye Ansah, Adem Boru

#include <iostream>
#include <string>
int fibonacci(int n);
using namespace std;
int main()
{
	int n = 3;
	int fibNumber = 0;
	string begin = "Which one do you want (negative to exit)? :";
	cout << "Fibonacci number generator ";
	do{
		cout << begin;
		cin >> n;
		cout << endl;
		if (n <= 0)
			exit (1);
		else if (n == 1)
			cout << "The 1st Fibonacci number is 0 ";
		else if (n == 2)
			cout << "The 2nd Fibonacci number is 1 ";
		else if (n==3)
			cout<<"The 3rd Fibonacci number is 1 ";
		else if (n > 2)
		{fibNumber = fibonacci(n);
		 cout << "The " << n <<"th " << "Fibonacci number is: "<< fibNumber <<" " << endl;}
	}
	while (n >= 1);
	return 0;
}

int fibonacci(int n)
{
	if((n==1)||(n==0))
	{
		return(n);
	}
	else
	{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}
