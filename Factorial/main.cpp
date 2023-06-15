#include <iostream>

using namespace std;


int Power(int x, int n);
double Power(double x, double n);
int Factorial(int a);
void main() 
{
	cout<<Power(9.0, 0.5);
}
double Factorial(double a) 
{
	double rez = 1;
	for (int i = 1; i <= a; i++)
	{
		rez = rez * i;
	}
	return rez;
}
int Factorial(int a) 
{
	int rez = 1;
	for (int i =1;i<=a;i++) 
	{
		rez = rez * i;
	}
	return rez;
}

double Power(double x, double n)
{
	double rez = pow(x,n);
	return rez;
}
int Power(int x,int n)
{
	int rez = x;
	for (int i =2;i<=n;i++) 
	{
		rez = rez * x;
	}
	return rez;
}

void FillRand(int arr[], const int n)
{
	for (int i =0;i<n;i++) 
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const int n)
{
	for (int i =0;i<n;i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i =0;i<n;i++) 
	{
		for (int j=i+1;j<n;j++) 
		{
			if (arr[j] < arr[i])
			{
				int boofer = arr[i];
				arr[i] = arr[j];
				arr[j] = boofer;
			}
		}
	}
}
int Sum(int arr[], const int n) 
{
	int sum = 0;
	for (int i =0;i<n;i++) 
	{
		sum += arr[i];
	}
	return sum;
}

int Avg(int arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum/n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1;i<n;i++) 
	{
		if (arr[i]<min)
		{
			min = arr[i];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int[] shiftLeft(int arr[],const int n)
{
	int arr2[n];
	arr2[n - 1] = arr[0];
	for (int i =0;i<n-1;i++) 
	{
		arr2[i] = arr[i +1];
	}
	return arr2[n];
}
int[] shiftRight(int arr[], const int n)
{
	int arr2[n];
	arr2[0] = arr[n-1];
	for (int i = 1; i < n - 1; i++)
	{
		arr2[i] = arr[i - 1];
	}
	return arr2[n];
}