#include"taxidriver.h"
#include"driver.h"

/*
�Լ� �̸�: TaxiDriver
��� : TaxiDriver ��ü�� �����ϴ� ����
�Ű����� : driverName -> name, driverAge -> age, drvierCareer -> career, basesalary -> baseSalary, bonusmoney -> bonusMoney
��ȯ�� : 
�ۼ� ��¥ : 2021/04/21
�ۼ��� : ������
*/
TaxiDriver::TaxiDriver(string driverName, int driverAge, int driverCareer, int basesalary, int bonusmoney) : Driver(driverName, driverAge, driverCareer)
{
	baseSalary = basesalary;
	bonusMoney = bonusmoney;
}

/*
�Լ� �̸�: GetBaseSalary
��� : �⺻������ ����
�Ű����� : ����
��ȯ�� : baseSalary
�ۼ� ��¥ : 2021/04/21
�ۼ��� : ������
*/
int TaxiDriver::GetBaseSalary()
{
	return baseSalary;
}

/*
�Լ� �̸�: GetBonus
��� : ���ʽ� �ݾװ��� ����
�Ű����� : ����
��ȯ�� : bonusMoney
�ۼ� ��¥ : 2021/04/21
�ۼ��� : ������
*/
int TaxiDriver::GetBonus()
{
	return bonusMoney;
}

/*
�Լ� �̸�: GetSalary
��� : �⺻���޿� ���ʽ� �ݾ��� ���� �ѱݾ��� ����
�Ű����� : ����
��ȯ�� : baseSalary + bonusMoney
�ۼ� ��¥ : 2021/04/21
�ۼ��� : ������
*/
int TaxiDriver::GetSalary()
{
	return baseSalary + bonusMoney;
}

/*
�Լ� �̸�: ShowDriverInfo
��� : ������ ������ �����
�Ű����� : ����
��ȯ�� : ����
�ۼ� ��¥ : 2021/04/21
�ۼ��� : ������
*/
void TaxiDriver:: ShowDriverInfo()
{
	cout << "�̸�: " <<GetName() << ",����: " <<GetAge() << "��, ���: " <<GetCareer() << "����, ����: "<<GetSalary()<< "����" << endl;
}
