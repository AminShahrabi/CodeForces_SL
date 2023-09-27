// ahmad ake eno mikhoni fahmidam ke kod ro copy kone
#include <bits/stdc++.h>

#define c cout

using namespace std;
int main(){
	int n, len, max;
	string babat;
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> len >> babat;
		max = 0;
		
		for(int j = 0; j < len; j++){
			if ((int)(babat[j]) - 96 > max)
			max = (int)(babat[j]) - 96;
		}
		cout << max << endl;
	}
	
}
