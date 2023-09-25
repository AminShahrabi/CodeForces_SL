// ahmad ake eno mikhoni fahmidam ke kod ro copy kone
#include <iostream>
using namespace std;

int main(){
	// asalam alayk
	// devist khomeini pol daram feshar bekhorin
	int n, m, adad = 0;
	cin >> n >> m;
	// soal kosshere
	
	for (int i = 0 ; i * i <= n; i++){
		if ((n - i * i) * (n - i * i) + i == m) adad++; 
		// pashmam haji kar kard
		// ahmad zaje bezan

	}
	
	cout << adad;
}
