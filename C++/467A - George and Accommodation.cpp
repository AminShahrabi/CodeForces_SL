// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, people, cap, out;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> people >> cap;
		if (people + 2 <= cap) out++;
	}
	cout << out;
}
