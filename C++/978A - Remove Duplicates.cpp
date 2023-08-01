#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	cin >> n;
	int b[n];
	
	for (int i = 0; i < n; i++){
		cin >> b[i];
		for (int j = 0 ; j < i; j++){
			if (b[i] == b[j]) b[j] = -1;
		}
		
	}
	for (int i = 0; i < n; i++){
		if (b[i] != -1){
			a++;
		}
	}
	
	cout << a++ << endl;
	for (int i = 0; i < n; i++){
		if (b[i] != -1){
			cout << b[i];
		}
		if (i != n - 1) cout << " ";
	}
    return 0;
}
