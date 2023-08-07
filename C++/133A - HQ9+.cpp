// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string input;
	
	cin >> input;
	for (int i = 0; i < input.size(); i++){
		if (input[i] == 'H' || input[i] == 'Q' || input[i] == '9'){cout << "YES" ; return 0;}
	}
	cout << "NO";
}
