// ahmad ake eno mikhoni fahmidam ke kod ro copy kone
#include <bits/stdc++.h>

using namespace std;
int main(){
	int a, b, c,t, moves = 0;
	cin >> t; 
	for (int i = 0; i < t; i++){
		cin >> a >> b >> c;
		moves = 0;
		
		while(b <= c && a <= c){
			if (a > b){
				b = a + b;
			}
			else a = b + a;
			moves++;
		}
		cout << moves << endl;
		}
}
