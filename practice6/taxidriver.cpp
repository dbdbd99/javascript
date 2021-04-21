#include"taxidriver.h"
#include"driver.h"

/*
함수 이름: TaxiDriver
기능 : TaxiDriver 객체를 생성하는 역할
매개변수 : driverName -> name, driverAge -> age, drvierCareer -> career, basesalary -> baseSalary, bonusmoney -> bonusMoney
반환값 : 
작성 날짜 : 2021/04/21
작성자 : 윤병윤
*/
TaxiDriver::TaxiDriver(string driverName, int driverAge, int driverCareer, int basesalary, int bonusmoney) : Driver(driverName, driverAge, driverCareer)
{
	baseSalary = basesalary;
	bonusMoney = bonusmoney;
}

/*
함수 이름: GetBaseSalary
기능 : 기본월급을 리턴
매개변수 : 없음
반환값 : baseSalary
작성 날짜 : 2021/04/21
작성자 : 윤병윤
*/
int TaxiDriver::GetBaseSalary()
{
	return baseSalary;
}

/*
함수 이름: GetBonus
기능 : 보너스 금액값을 리턴
매개변수 : 없음
반환값 : bonusMoney
작성 날짜 : 2021/04/21
작성자 : 윤병윤
*/
int TaxiDriver::GetBonus()
{
	return bonusMoney;
}

/*
함수 이름: GetSalary
기능 : 기본월급에 보너스 금액을 더한 총금액을 구함
매개변수 : 없음
반환값 : baseSalary + bonusMoney
작성 날짜 : 2021/04/21
작성자 : 윤병윤
*/
int TaxiDriver::GetSalary()
{
	return baseSalary + bonusMoney;
}

/*
함수 이름: ShowDriverInfo
기능 : 운전사 정보를 출력함
매개변수 : 없음
반환값 : 없음
작성 날짜 : 2021/04/21
작성자 : 윤병윤
*/
void TaxiDriver:: ShowDriverInfo()
{
	cout << "이름: " <<GetName() << ",나이: " <<GetAge() << "세, 경력: " <<GetCareer() << "개월, 월급: "<<GetSalary()<< "만원" << endl;
}
