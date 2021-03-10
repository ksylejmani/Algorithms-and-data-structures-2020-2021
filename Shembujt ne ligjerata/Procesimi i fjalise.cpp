//#include<iostream>
//#include<string>
//using namespace std;
//void proceso_fjaline(string fjalia,int *rez1, bool *rez2, bool *rez3);
//void main() {
//	int r1;
//	bool r2, r3;
//	proceso_fjaline("Kompjuteri", &r1, &r2, &r3);
//	cout << "r1=" << r1 << endl;
//	cout << "r2=" << r2 << endl;
//	cout << "r3=" << r3 << endl;
//
//	proceso_fjaline("MOLLA", &r1, &r2, &r3);
//	cout << "r1=" << r1 << endl;
//	cout << "r2=" << r2 << endl;
//	cout << "r3=" << r3 << endl;
//}
//void proceso_fjaline(string fjalia, int* rez1, bool* rez2, bool* rez3) {
//	*rez1 = 0;
//	for (int i = 0; i < fjalia.length(); i++)
//		if (fjalia[i] == 'a'|| fjalia[i] == 'A')
//			*rez1 = (*rez1) + 1;
//	// Kompjuteri, MOLLA
//	int L = fjalia.length();
//	*rez2 = true;
//	for (int i = 0; i < L - 1; i++) {
//		bool vazhdo = true;
//		for (int j = i + 1; j < L; j++) {
//			if (fjalia[i] == fjalia[j]) {
//				*rez2 = false;
//				vazhdo = false;
//			}
//
//		}
//		if (!vazhdo)
//			break;
//	}
//
//	*rez3 = (fjalia.length() % 2 == 0) ? (true) : (false);
//}