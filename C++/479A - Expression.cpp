// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, d;
	cin  >> a >> b >> c;
	d = a + (b * c);
	if ((d < a + b + c)) d = a + b + c;
	if (d < a * b + c) d = a * b + c;
	if (d < a * b * c) d = a * b * c;
	if (d < (a + b) * c) d = (a + b) * c;
	if (d < a * (b + c)) d = a * (b + c);
	cout << d;
	
}                            
 
 
