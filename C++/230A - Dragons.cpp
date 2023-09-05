#include <iostream>
using namespace std;

int main(){
	int hp, n, temp, temp2;
	cin >> hp >>  n;
	int hps[n], bonus[n];
	
	
	for (int i = 0; i < n; i++){
		cin >> hps[i] >> bonus[i];
	}
	
	for(int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (hps[j] < hps[i]){
				swap(hps[j], hps[i]);
				swap(bonus[j], bonus[i]);
			}
		}
	
	
	}
	
	for (int i = 0; i < n; i++){
		if (hp > hps[i]) hp += bonus[i];
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	

}
