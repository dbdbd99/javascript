#pragma once
#include "driver.h"

/*
클래스 이름 : TaxiDriver
기능 : 택시 운전자 정보에 대한 아래 기능을 구현함

1. 생성자를 통해 초기 정보들을 입력받는다.
2. GetBaseSalary,GetBonus 함수를 통해 기본정보 반환.
3. GetSalary 함수를 통해 총 월급 구함.
4. ShowDriverInfo 함수를 통해 운전사 정보 출력

작성날짜 : 2021/04/21
작성자 : 윤병윤
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