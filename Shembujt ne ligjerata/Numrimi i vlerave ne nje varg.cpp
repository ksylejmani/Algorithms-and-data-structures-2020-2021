//#include<iostream>
//using namespace std;
//void llogarit_vlerat(int A[], int m, int* rez1, int* rez2) {
//	int* p = &A[0]; // int *p=A;
//	*rez1 = 0; *rez2 = 0;
//	for (int i = 0; i < m; i++) {
//		if (*(p + i) /* A[i] */ < 0)
//			*rez1 = (*rez1) + 1;
//		else
//			*rez2 = (*rez2) + 1;
//		cout << (p + i) << endl;
//	}
//}
//void main() {
//	const int m = 6;
//	int A[m] = { -4,6,-1,3,6,0 };
//	int n, p;
//	llogarit_vlerat(A, m, &n, &p);
//	cout << "Numri i vlerave negative: " << n << endl;
//	cout << "Numri i vlerave pozitive: " << p << endl;
//}