#include "taxidriver.h"

/*
�Լ� �̸�: main
��� : TaxiDriver ��ü�� �����ϴ� ����
�Ű����� : ����
��ȯ�� : int -> 0 : ���� ����, ������ : ������ ����
�ۼ� ��¥ : 2021/04/21
�ۼ��� : ������
*/
int main(void)
{
	TaxiDriver* darr[2];
	string name;
	int age, career, baseSalary, bonusSalary;
	for (int i = 0; i < 2; i++)
	{
		cout << "�߰��� ������ �̸��� ���̸� �Է��Ͻÿ� : ";
		cin >> name >> age >> career >> baseSalary >> bonusSalary;
		darr[i] = new TaxiDriver(name, age, career, baseSalary, bonusSalary);
	}

	cout << endl << "�߰��� ������ ����: " << endl;
	for (int i = 0; i < 2; i++)
	{
		darr[i] -> ShowDriverInfo(); // ��¹�
		delete darr[i];
	}

	return 0;
}