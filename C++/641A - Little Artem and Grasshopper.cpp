// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	set <int> setle;
	int n, index = 0, temp, num = 0;
	string babat;
	
	cin >> n;
	int a[n];
	cin >> babat;
	
	for (int i = 0; i < n ; i++){
		cin >> a[i];
	}

	
	while (1){ 
		temp = babat[index];
		if (temp == '<') index -= a[index];
		else index += a[index];
		if(index > babat.size() - 1 || index < 0){
			cout << "FINITE";
			return 0;
		}
		num++;
		setle.insert(index);
		if (setle.size() != num){
			cout << "INFINITE";
			break;
		}
		
	}
	

}
