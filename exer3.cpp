#include <iostream>
#include <cmath>
using namespace std;

float cm (float d) {
	float cm;
	cm = d * 100;
	
	return cm;
}

float metro (float d) {
	float m;
	m = d / 100;
	
	return m;
}

int main () {
	float d, cm1, m1;
	string unidade;
	cin >> d;
	cin >> unidade;
	
	if (unidade == "centimetro") {
		cm1 = cm(d);
		cout << cm1 << "cm" << endl;
	} else if (unidade == "metro") {
		m1 = metro(d);
		cout << m1 << "m" << endl;
	}else {
		cout << "ERRO" << endl;
	}
	return 0;
}
