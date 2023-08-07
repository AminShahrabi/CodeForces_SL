// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, t;
	cin >> n;
	for (int j = 0; j < n; j++){
		t = 0;
		string input;
		cin >> input;
		if (input.size() % 2 == 0){
			for(int i = 0; i < input.size() / 2 ; i++){
				if (input[i] != input[i + input.size() / 2]) t++;
			}
			if (t != 0) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
		else cout << "NO" << endl;
		
	}
	
}
