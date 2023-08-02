#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	set <char> dd;
	getline(cin,a);
    
	for (int i = 0; i < a.size(); i++){
		if (a[i] != '{' && a[i] != ',' && a[i] != ' ' && a[i] != '}'){
			dd.insert(a[i]);
		}
	}
	cout << dd.size();
	

}
