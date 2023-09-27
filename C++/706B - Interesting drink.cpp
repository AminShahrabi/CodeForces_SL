// ahmad ake eno mikhoni fahmidam ke kod ro copy kone
#include <bits/stdc++.h>

#define c cout

using namespace std;
int main(){
	int shops, days, num = 0, temp;
	cin >> shops;
	int prices[shops];
	
	for (int i = 0; i < shops; i++){
		cin >> prices[i];
	}
	cin >> days;
	sort(prices, prices + shops);
	
	for (int i = 0; i < days; i++){
		num = 0;
		cin >> temp;
		cout << upper_bound(prices, prices + shops, temp) - prices << endl;
	}

	
}
