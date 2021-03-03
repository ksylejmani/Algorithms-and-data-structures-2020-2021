//#include<iostream>
//#include<string>
//using namespace std;
//
//class testi {
//protected:
//	short int piket;
//	string lenda;
//public:
//	testi() {
//		KthimiPerPike:
//		cout << "Cakto piket: ";
//		cin >> piket;
//		if (piket < 0 || piket>100) {
//			cout << "Piket e caktuar nuk jane valide\n";
//			goto KthimiPerPike;
//		}
//		cout << "Cakto emertimin e lendes";
//		getline(cin, lenda);
//	}
//	testi(short int _piket, string _lenda) {
//		piket = _piket;
//		lenda = _lenda;
//	}
//	void shtyp() {
//		if (piket >= 50)
//			cout << "E keni kaluar testin\n";
//		else
//			cout << "Nuk e keni kaluar testin\n";
//	}
//};
//
//class provimi : public testi {
//private:
//	int salla;
//	string kujdestari;
//public:
//	provimi(short int _piket, string _lenda, int _salla, string _kujdestari) :
//		testi(_piket, _lenda) {
//		if (_salla >= 1 && _salla <= 20)
//			salla = _salla;
//		else
//			cout << "Nuk ka ndonje salle me kete numer" << endl;
//
//		kujdestari = _kujdestari;
//	}
//	void nota() {
//		if (piket < 50)
//			cout << "Nota 5\n";
//		else if (piket < 60)
//			cout << "Nota 6\n";
//		else if (piket < 70)
//			cout << "Nota 7\n";
//		else if (piket < 80)
//			cout << "Nota 8\n";
//		else if (piket < 90)
//			cout << "Nota 9\n";
//		else
//			cout << "Nota 10\n";
//	}
//};
//void main() {
//	provimi p(78,"ASDh",4,"Filan Fisteku");
//	p.nota();
//	p.shtyp();
//}
