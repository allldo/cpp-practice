#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL , "Russian");
    char number;
    cout << "����" << endl << "1. Big King Combo" << endl << "2. Big King XXL Combo" << endl << "3. Twister Combo" << endl;
    cout << "������� ����� �����: ";
    cin >> number;
 
    switch (number){
    case '1':
        cout << "�� ������� �1. Big King Combo" << endl << "���� 1390 ��.";
        break;
    case '2':
        cout << "�� ������� �2. Big King XXL Combo" << endl << "���� 1590 ��.";
        break;
    case '3':
        cout << "�� ������� �3. Twister Combo" << endl << "���� 1290 ��.";
        break;
    default:
        cout << "������� ���������� ����� ������";
    }
    char c;
    cout << endl << "������ y/n: ";
    cin >> c;
    switch (c){
    case 'y':
        cout << "������� �� �������.";
        break;
    case 'n':
        exit(1);
        break;
    default:
        cout << "��������� ��� �� ��������.";
    }
    return 0;
}




