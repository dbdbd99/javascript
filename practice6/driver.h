#pragma once
#include <iostream>
#include <cstring>

using namespace std;

/*
Ŭ���� �̸� : Driver
��� : ������ ������ ���� �Ʒ� ����� ������

1. �����ڸ� ���� �ʱ� �������� �Է¹޴´�.
2. addAge �Լ��� ���� ������ ������ �Է¹޾� ���� ���̸� ��ȭ��Ų��.
3. addCareer �Լ��� ���� �߰��� �������� �Է¹޾� ���� ��� ������ ��ȭ��Ų��.
4. Get �Լ����� ���� �ԷµǾ� ����ǰų� ��ȭ�� �������� ��ȯ�Ѵ�.

�ۼ���¥ : 2021/03/31
�ۼ��� : ������
*/

class Driver
{
private:
	string name;
	int age;
	int career;

public:
	Driver(string driverName, int driverAge, int driverCareer);
	void addAge(int addYear);
	void addCareer(int addMonth);
	string GetName();
	int GetAge();
	int GetCareer();
};