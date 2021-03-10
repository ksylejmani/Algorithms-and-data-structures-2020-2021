#include<iostream>
using namespace std;
void llogarit_ne_diapazon(int a, int b, int& r1, int& r2, int &r3) {
	int max = (a > b) ? (a) : (b);
	int min = (a < b) ? (a) : (b);
	a = 7;
	r1 = 0; r2 = 0;
	for (int i = min; i <= max; i++)
		if (i % 2 == 1)
			r1++;
		else
			r2 += i;
	r3 = max - min+1;
}
void main() {
	int a = 5, b = 20;
	int r1, r2, r3;
	llogarit_ne_diapazon(a, b, r1, r2,r3);
	cout << "Numri i numrave tek: " << r1 << endl;//5,7,9,11,13,15,17,19
	cout << "Shuma e nurmave cift: " << r2 << endl;
	cout << "Distanca ne mes te numrave: " << r3 << endl;
}