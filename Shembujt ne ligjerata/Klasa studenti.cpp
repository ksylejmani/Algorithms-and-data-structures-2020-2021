//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 5;
//struct ditelindja {
//	int dita, muaji, viti;
//};
//class studentja {
//private:
//	int ID;
//	string emri;
//	int notat[n];
//	ditelindja d;
//	int gjeje_hapesiren() {
//		int rez = -1;
//		for (int i = 0; i < emri.length(); i++) {
//			if (emri[i] == ' ') {
//				rez = i;
//				break;
//			}
//		}
//		return rez;
//	}
//public:
//	studentja() {
//		cout << "Cakto ID-ne: ";
//		cin >> ID;
//		cin.ignore();
//		cout << "Jepni emrin: ";
//		getline(cin, emri); // Erlind Hashani
//		cout << "Notat:\n";
//		for (int i = 0; i < n; i++) {
//			cout << "Cakto noten " << i + 1 << ": ";
//			cin >> notat[i];
//		}
//		cout << "Ditelindaj:\n";
//		cout << "Cakto diten: ";
//		cin >> d.dita;
//		cout << "Cakto muajin: ";
//		cin >> d.muaji;
//		cout << "Cakto vitin: ";
//		cin >> d.viti;
//	}
//	double mesatarja() {
//		double s = 0;
//		for (int i = 0; i < n; i++)
//			s = s + notat[i];
//		return s / n;
//	}
//	void shtyp_inicialet() {
//		char e = emri[0];
//		char m = emri[this->gjeje_hapesiren() + 1];
//		cout << "Inticialet: " << e << ". " << m << endl;
//	}
//	int numro_ditelindja_tek() {
//		int n1 = (d.dita % 2 != 0) ? (1) : (0);
//		int n2 = (d.muaji % 2 != 0) ? (1) : (0);
//		int n3 = (d.viti % 2 != 0) ? (1) : (0);
//		return (n1 + n2 + n3);
//	}
//};
//void main() {
//	studentja s;
//	cout << "Mesatarja e notave: " << s.mesatarja() << endl;
//	s.shtyp_inicialet();
//	cout << "Numri i numrave tek ne dielindje eshte: " << s.numro_ditelindja_tek() << endl;
//}