// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, all, sumans;
	cin >>  n;
	int a[n];
	
	for (int i = 0; i < n; i++){
		cin >> a[i];	
		all += a[i];
	}
	
	// en khat baraye list barakse as stack over flow estefade shode
	sort(a , a + n, greater<int>());
	
	for (int i = 0; i <= n; i++){
		if (sumans > all / 2 ){
			cout << i;
			break;
		}
		
		sumans += a[i];

	}
	
}                            
 
 
