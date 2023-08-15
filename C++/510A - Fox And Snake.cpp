#include <bits/stdc++.h>

// shush gharbi

using namespace std;

int main()
{	int a, b, turn = 0, swap = 0;
	cin >> a >> b;
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= b; j++){
			if (i % 2 != 0)
				cout << "#";
				
			else {
				if (turn == 0){
					if (j == b){
						cout << "#";
					}
					else cout << ".";
				}
				
				else if (turn == 1){
					if (j == 1){
						cout << "#";
					}
					else cout << ".";
				}


			}
		}
		swap++;
		if (swap == 2){
			if (turn == 1) turn = 0;
			else turn = 1;	
			swap = 0;
		}
		cout << endl;
	}
}
