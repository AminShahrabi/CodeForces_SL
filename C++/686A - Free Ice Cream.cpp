// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	string temp;
	long long num, balance ,tempn, distress = 0;
	
	cin >> num >> balance;
	
	for (int i = 0; i < num; i++){
		cin >> temp;
		cin >> tempn;
		if (temp[0] == '-'){
			if (balance - tempn >= 0){
				balance -= tempn;
			} 
			else distress += 1;
		}
		else balance += tempn;

	}
	
	cout << balance << " " << distress;

}
