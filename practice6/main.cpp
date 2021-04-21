#include "taxidriver.h"

/*
함수 이름: main
기능 : TaxiDriver 객체를 생성하는 역할
매개변수 : 없음
반환값 : int -> 0 : 정상 종료, 나머지 : 비정상 종료
작성 날짜 : 2021/04/21
작성자 : 윤병윤
*/
int main(void)
{
	TaxiDriver* darr[2];
	string name;
	int age, career, baseSalary, bonusSalary;
	for (int i = 0; i < 2; i++)
	{
		cout << "추가할 운전사 이름과 나이를 입력하시오 : ";
		cin >> name >> age >> career >> baseSalary >> bonusSalary;
		darr[i] = new TaxiDriver(name, age, career, baseSalary, bonusSalary);
	}

	cout << endl << "추가된 운전사 정보: " << endl;
	for (int i = 0; i < 2; i++)
	{
		darr[i] -> ShowDriverInfo(); // 출력문
		delete darr[i];
	}

	return 0;
}