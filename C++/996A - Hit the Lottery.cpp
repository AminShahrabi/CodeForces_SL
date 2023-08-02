#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	
	b += a / 100;	
	a = a - a / 100 * 100;
	
	if (a > 0){
	b += a / 20;	
	a = a - a / 20 * 20;
	}
	
	if (a > 0){
	b += a / 10;	
	a = a - a / 10 * 10;
	}
	
	if (a > 0){
	b += a / 5;	
	a = a - a / 5 * 5;
	}
	
	if (a > 0){
	b += a / 1;	
	a = a - a / 1 * 1;
	}
	
	cout << b;

}
