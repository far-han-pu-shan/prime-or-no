/*

Farhan Pushan





Task B. Is a prime?

A prime number is an integer greater or equal to 2 that 
is only divisible by 1 and by itself. 
The first few primes are: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 …

    N is a prime if and only if it is not divisible 
    evenly by any of the numbers from 2 to N−1. Let’s implement 
    this decision as a function.

In the same program numbers.cpp, add a function

bool isPrime(int n);

The function should return true if n is a prime, 
otherwise return false. Change the main function to test your new code.




*/








#include <iostream>

using namespace std;


bool isDivisibleBy(int n, int d)
{

if (d == 0)

	{return false;}
		
	if ( n % d == 0)
	{
		return true;
	} 
	else
	{
		return false;
	}
	
}

bool isPrime(int n)  
{

if (n <=1)
	{return false;}	
	
	for (int i = 2; i < n ; i++)
	{
		if ( n % i == 0 )
		{
			return false;
		}
		
		
	}
	
	
	return true;
		
}


int main()
{
	//int input = isDivisibleBy(100,0);
		
	
	int firstnum, secnum;	
		
	cout << "Enter integer:" << endl;
	
	cin >> firstnum;
	
	cout << "Enter integer:" << endl;
	
	cin >> secnum;
	
	int input = isDivisibleBy(firstnum , secnum);
	
	cout << endl;
	
	//cout << input << endl;
	
	if(input == 1)
	
	{
		cout << "Yes" << endl;
	}
	
	else
	{
		cout << "No" << endl;
	}
	
	
	int primeTest = isPrime(firstnum);
	
	cout << primeTest << endl;
	
	
	
	
	
}

