// laba3_v6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "node.h"

using namespace std;
void menu();
void PrintMenu();
int chooseMenu(node &a);
void insertionsort(node &a);


int main()
{
	setlocale(LC_ALL, "Russian");
	menu();
    return 0;
}

void menu() {
	node nod(10);
	for (int i = 9; i >= 0; i--) {
		nod.addToNode(i | (i - 1));
	}
	int b = 0;
	while (b != 5) {
		PrintMenu();
		b = chooseMenu(nod);
	}
}

void PrintMenu() {
	cout << "������� 1,����� ������������� ���� ������� ������" << endl;
	cout << "������� 2,����� ������������� ���� ������� ��������" << endl;
	cout << "������� 3,����� ������������� ���� ������� �������" << endl;
	cout << "������� 4, ����� ������� ��������� ������" << endl;
	cout << "������� 5, ����� ��������� ������" << endl;
	cout << "������� 6, ����� ����� �� ���������" << endl;

}

int chooseMenu(node &a) {
	int status = 0;
	cin >> status;
	switch (status) {
		case 1: {a.sortNodeTokenSort();break;}
		case 2: {a.sortNodeBublSort();break;}
		case 3: {insertionsort(a); break;}
		case 4: {a.showList(); break;}
		case 5: {a.deletkelem(6);break;}
		case 6: {return 5; break;}

		default: cout << "������� ����� ������" << endl;break;
	}
	return 0;
}

void insertionsort(node &a) {
	a.sortNodeBublSort();
}



