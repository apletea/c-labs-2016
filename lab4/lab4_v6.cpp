// laba3_v6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "ListNode.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ListNode<int> * nod = new ListNode<int>(10);
	for (int i = 9; i >= 0; i--) {
		nod->addToNode(i | (i - 1));
	}
	int b = 0;
	while (b != 5) {
		cout << "������� 1,����� ������������� ���� ������� ������" << endl;
		cout << "������� 2,����� ������������� ���� ������� ��������" << endl;
		cout << "������� 3,����� ������������� ���� ������� �������" << endl;
		cout << "������� 4, ����� ������� ��������� ������" << endl;
		cout << "������� 5, ����� ��������� ������" << endl;
		cout << "������� 6, ����� ����� �� ���������" << endl;
		int status = 0;
		cin >> status;
		switch (status) {
		case 1: {nod->sortNodeTokenSort();break;}
		case 2: {nod->sortNodeBublSort();break;}
		case 3: {nod->sortNodeBublSort(); break;}
		case 4: {nod->showList(); break;}
		case 5: {nod->randList();break;}
		case 6: {b = 5; break;}
		default: cout << "������� ����� ������" << endl;break;
		}
		
	}
	return 0;
}



