// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//int n = 5;

#pragma region 100/10 sum max

int position(int arr[], int pos, int size, int &max, int &imax) {
	if (pos == size - 3) return max;
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum += arr[pos + i];
	}

	if (sum > max)
	{
		max = sum;
		imax = pos;
	}
	pos++;
	return position(arr, pos, size, max, imax);
}

#pragma endregion

#pragma region print_char

void print_char(int n) {
	if (n == 0) return;

	char c;
	
	cin >> c;
	
	print_char(n - 1);
	cout << c;
}

#pragma endregion

//#pragma region static
//
//void func(int x) {
//	static int y;
//
//	y = x;
//	y = y * 2;
//	cout << y << endl;
//}
//
//#pragma endregion

#pragma region tr

//int tr(int n) {
//
//	int k = 1;
//
//	if (n == 0) return n;
//
//	for (int i = 1; i < n; i++)
//	{
//		if (i < k) cout << " "; else if (i <= k) cout << "*";
//	}
//
//	cout << endl;
//	k += 2;
//
//	return tr(n-1);	
//}

#pragma endregion

#pragma region fib

int fib(int n) {
	if (n == 1 || n == 0) return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

#pragma endregion

#pragma region fib_lit

int fib1(int n) {

	int f = 0, v = 1, h;

	for (int  i = 0; i <= n; i++)
	{
		h = v;	v += f;	f = h;
	}

	return f;
}

#pragma endregion

#pragma region 1212131.
int sum = 0;
const int n = 6, m = 7;
int arr[n][m];
bool fs[n][m];

void inf(int i, int j) {
	
	if (i != 0 && j != 0) {
		
	}
}


#pragma endregion



int main()
{	//
	cout << fib1(7) << endl;
	cout << fib(7) << endl;

	//tr(5);

	// print_char
	int b = 5;
	print_char(b);

	cout << endl;

	//
	int a[] = { 22,1,2,3,4,55,6,7,8,99 };
	int m,i;

	cout << position(a, 0, 10, m, i) << endl;
	cout << i << endl;

    return 0;
}

