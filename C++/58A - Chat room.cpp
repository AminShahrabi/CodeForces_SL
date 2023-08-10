// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int index = 0, out = 0;
	string codecopynist;
	string babat = "hello";
	
	cin >> codecopynist;
	for (int i = 0; i < codecopynist.size(); i++){
		if (codecopynist[i] == babat[index]){
			out++;
			index++;
		}
	}
	
	if (out == 5) cout << "YES";
	else cout << "NO";
		
}
