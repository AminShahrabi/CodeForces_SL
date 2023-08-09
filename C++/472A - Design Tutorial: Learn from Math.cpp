// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int num, temp;
	cin >> num;
	
	for (int i = 6; i < num ; i++){
		for (int j = 2; j < i ;j++){
			if (i % j == 0){	
				temp = num - i;	
				for (int k = 2; k < num - i; k++){
					if ((num - i) % k == 0){
						cout << i << " " << num - i;
						return 0;
					}
				}	
			}	
		}	
	}
}
