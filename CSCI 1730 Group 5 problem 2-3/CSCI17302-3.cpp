//CSCI Group 5 assignment 2 problem 2-3
//Joel Piontek, Andrew, Adem
/*
   3. The Fibonacci sequence is 0, 1, 1, 2, 3, 5, 8, 13, 21, …
   where the first two terms are 0 and 1,
   and each term thereafter is the sum of the two preceding terms.
   Write a C++ program that repeatedly prompts for and reads a positive value n,
   calls a recursive function fibonnaci to calculate the nth  number in the Fibonacci sequence,
   and then displays the number. For example, if n = 9, then the program would display 21.
   Here is the output from a sample run of the program (user input in bold):
   Fibonnaci number generator Which one do you want (negative to exit)? 4
   The 4th Fibbonaci number is 2 Which one do you want (negative to exit)? 5
   The 5th Fibbonaci number is 3 Which one do you want (negative to exit)? 6
   The 6th Fibbonaci number is 5 Which one do you want (negative to exit)? 7
   The 7th Fibbonaci number is 8 Which one do you want (negative to exit)? -1
 */
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
			cout << "The first Fibonacci number is 0 ";
		else if (n == 2)
			cout << "The second Fibonacci number is 1 ";
		else if (n==3)
			cout<<"The third Fibonacci number is 1 ";
		else if (n > 2)
		{fibNumber = fibonacci(n);
		 cout << "The " << n <<"th " << "Fibonacci number is: "<< fibNumber <<" ";}
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
