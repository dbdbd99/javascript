#pragma once
#include <iostream>
#include <cstring>

using namespace std;

/*
클래스 이름 : Driver
기능 : 운전자 정보에 대한 아래 기능을 구현함

1. 생성자를 통해 초기 정보들을 입력받는다.
2. addAge 함수를 통해 지나간 연차를 입력받아 현재 나이를 변화시킨다.
3. addCareer 함수를 통해 추가된 개월수를 입력받아 현재 경력 개월을 변화시킨다.
4. Get 함수들을 통해 입력되어 복사되거나 변화된 변수들을 반환한다.

작성날짜 : 2021/03/31
작성자 : 윤병윤
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