#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b, c = 0, d = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		if (a > b) c++;
		if (a < b) d++;
	}
	
	if (c > d){
		cout << "Mishka";
	}
	else if (c < d){
		cout << "Chris";
	}
	else {
		cout << "Friendship is magic!^^";
	}
}
