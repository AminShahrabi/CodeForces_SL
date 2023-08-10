// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int upvotes, viewers, temp;
	int n;
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		upvotes = 0;
		cin >> viewers;
		for(int i = 0; i < viewers; i++){
			cin >> temp;
			if (temp == 1) upvotes++;
			else if (temp == 3) upvotes++;
		}
		cout << upvotes << endl;
	}
	
}
