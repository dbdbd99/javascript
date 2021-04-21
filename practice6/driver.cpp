#include"driver.h" //������� driver.h�� �ҷ���

using namespace std;

/*
 �Լ� �̸�: Driver (������)
 ���: �ʱⰪ�� �����ϸ鼭 ���ο� ��ü�� �����Ѵ�.
 �Ű����� : driverName -> �ʱ� �̸� ��, driverAge -> �ʱ� ���� ��, driverCareer -> �ʱ� ��� ��
 ��ȯ��: ����
 �ۼ���¥ : 2021/03/31
 �ۼ���: ������
 */
Driver::Driver(string driverName, int driverAge, int driverCareer)
{
	name = driverName;
	age = driverAge;
	career = driverCareer;
}

/*
 �Լ� �̸�: addAge
 ���: ���̸� �߰��Ѵ�.
 �Ű����� : addYear -> �þ ����
 ��ȯ��: ����
 �ۼ���¥ : 2021/03/31
 �ۼ���: ������
 */

void Driver::addAge(int addYear)
{
	age += addYear;
}

/*
 �Լ� �̸�: addCareer
 ���: ����� �߰��Ѵ�.
 �Ű����� : addMonth -> �þ ������
 ��ȯ��: ����
 �ۼ���¥ : 2021/03/31
 �ۼ���: ������
 */

void Driver::addCareer(int addMonth)
{
	career += addMonth;
}

/*
 �Լ� �̸�: GetName
 ���: �̸��� ��ȯ�Ѵ�.
 �Ű����� : ����
 ��ȯ��: name -> ������ �̸�
 �ۼ���¥ : 2021/03/31
 �ۼ���: ������
 */

string Driver::GetName()
{
	return name;
}

/*
 �Լ� �̸�: GetAge
 ���: ���̸� ��ȯ�Ѵ�.
 �Ű����� : ����
 ��ȯ��: age -> ������ ����
 �ۼ���¥ : 2021/03/31
 �ۼ���: ������
 */

int Driver::GetAge()
{
	return age;
}

/*
 �Լ� �̸�: GetCareer
 ���: ����� ��ȯ�Ѵ�.
 �Ű����� : ����
 ��ȯ��: name -> ������ ���
 �ۼ���¥ : 2021/03/31
 �ۼ���: ������
 */

int Driver::GetCareer()
{
	return career;
}