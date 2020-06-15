#include <iostream>
using namespace std;

	int main() {
	setlocale(LC_ALL, "Russian");
	int f1, s1, p1, f2, s2, p2; 
	char tochka;
	do {
	cout << "Введите первую сумму ";
	cin >> f1 >> tochka >> s1 >> tochka >> p1;
	while(s1 > 19 || p1 > 11) {
	cout << "Введите корректное значение (не более 19 и 11)";
	cin >> f1 >> tochka >> s1 >> tochka >> p1;
	}
	cout << "Введите вторую сумму ";
	cin >> f2 >> tochka >> s2 >> tochka >> p2;
	while(s2 > 19 || p2 > 11) {
	cout << "Введите корректное значение (не более 19 и 11)";
	cin >> f2 >> tochka >> s2 >> tochka >> p2;
	}
	f1 = f1 + f2;
	if(p1 + p2 > 11) {
		s1 = s1 + 1; 
		p1 = p1 + p2 - 11;
	}
	else {
		p1 = p1 + p2;
	}
	if(s1 + s2 > 19) {
		f1 = f1 + 1; 
		s1 = s1 + s2 - 19;
	}
	else {
		s1 = s1 + s2;
	}
	cout << "Всего " << f1 << tochka << s1 << tochka << p1 << endl << "Продолжить (y/n)? ";
	getchar();
	} while(tochka = getchar()=='y');
	return 0;
}
