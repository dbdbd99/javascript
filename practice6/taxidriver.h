#pragma once
#include "driver.h"

/*
Ŭ���� �̸� : TaxiDriver
��� : �ý� ������ ������ ���� �Ʒ� ����� ������

1. �����ڸ� ���� �ʱ� �������� �Է¹޴´�.
2. GetBaseSalary,GetBonus �Լ��� ���� �⺻���� ��ȯ.
3. GetSalary �Լ��� ���� �� ���� ����.
4. ShowDriverInfo �Լ��� ���� ������ ���� ���

�ۼ���¥ : 2021/04/21
�ۼ��� : ������
*/
class TaxiDriver : public Driver
{
private:
	int baseSalary, bonusMoney;

public:
	TaxiDriver(string driverName, int driverAge, int driverCareer, int basesalary, int bonusmoney);
	int GetBaseSalary();
	int GetBonus();
	int GetSalary();
	void ShowDriverInfo();
};