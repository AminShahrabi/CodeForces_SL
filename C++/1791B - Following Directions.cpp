#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, len, x = 0, y = 0, num = 0;
	string c;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> len >> c;
		num = 0;
		x = 0;
		y = 0;
		while (1){
			if (c[num] == 'U') y++;
			else if (c[num] == 'D') y--;
			else if (c[num] == 'L') x--;
			else if (c[num] == 'R') x++;

			if (x == 1 && y == 1){
				cout << "YES" << endl;
				break;
			}
			num++;
			
			if (num == len){
				cout << "NO" << endl;
				break;
			}
		}
	}
}
