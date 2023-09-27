// ahmad ake eno mikhoni fahmidam ke kod ro copy kone
#include <bits/stdc++.h>

#define c cout

using namespace std;
int main(){
	int num, ar[2005], temp,nn, n = 0;
	cin >> nn;
	for (int j = 0; j < nn; j++){
		cin >> num;
		n = 0;
		for (int i = 0; i < num; i++){
			cin >> temp;
			if (temp % 2 == 0){
				ar[n] = temp;
				n++;
			}
			else cout << temp << " ";
		}
		for (int i = 0; i < n;  i++){
			cout << ar[i] << " ";
		}
		cout << endl;
	}

	
}
