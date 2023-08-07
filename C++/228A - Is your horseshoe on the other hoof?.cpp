// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, d;
	set <int> all;
	cin >> a;
	all.insert(a);
	cin >> a;
	all.insert(a);
	cin >> a;
	all.insert(a);
	cin >> a;
	all.insert(a);
	
	cout << 4 - all.size();
}
