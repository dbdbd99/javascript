#include"driver.h" //헤더파일 driver.h를 불러옴

using namespace std;

/*
 함수 이름: Driver (생성자)
 기능: 초기값을 설정하면서 새로운 객체를 생성한다.
 매개변수 : driverName -> 초기 이름 값, driverAge -> 초기 나이 값, driverCareer -> 초기 경력 값
 반환값: 없음
 작성날짜 : 2021/03/31
 작성자: 윤병윤
 */
Driver::Driver(string driverName, int driverAge, int driverCareer)
{
	name = driverName;
	age = driverAge;
	career = driverCareer;
}

/*
 함수 이름: addAge
 기능: 나이를 추가한다.
 매개변수 : addYear -> 늘어난 연도
 반환값: 없음
 작성날짜 : 2021/03/31
 작성자: 윤병윤
 */

void Driver::addAge(int addYear)
{
	age += addYear;
}

/*
 함수 이름: addCareer
 기능: 경력을 추가한다.
 매개변수 : addMonth -> 늘어난 개월수
 반환값: 없음
 작성날짜 : 2021/03/31
 작성자: 윤병윤
 */

void Driver::addCareer(int addMonth)
{
	career += addMonth;
}

/*
 함수 이름: GetName
 기능: 이름을 반환한다.
 매개변수 : 없음
 반환값: name -> 운전자 이름
 작성날짜 : 2021/03/31
 작성자: 윤병윤
 */

string Driver::GetName()
{
	return name;
}

/*
 함수 이름: GetAge
 기능: 나이를 반환한다.
 매개변수 : 없음
 반환값: age -> 운전자 나이
 작성날짜 : 2021/03/31
 작성자: 윤병윤
 */

int Driver::GetAge()
{
	return age;
}

/*
 함수 이름: GetCareer
 기능: 경력을 반환한다.
 매개변수 : 없음
 반환값: name -> 운전자 경력
 작성날짜 : 2021/03/31
 작성자: 윤병윤
 */

int Driver::GetCareer()
{
	return career;
}