#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin >> a;
	
	for (int i = 0; i < a.size(); i++){
		if (a[i] == '-' && a[i + 1] == '-') {
			a[i] = ' ';
			a[i + 1] = ' ';
			cout << 2;
		}
		else if (a[i] == '-' && a[i + 1] == '.'){
			a[i] = ' ';
			a[i + 1] = ' ';
		 cout << 1;
		}
		else if (a[i] == '.'){
		 cout << 0; }
	}
	
    return 0;
}
