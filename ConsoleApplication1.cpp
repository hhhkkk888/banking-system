/*
#include<iostream>
using namespace std;

void swap(int* pnum1, int* pnum2) {
	int temp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = temp;
}

int main(void) {
	int num1 = 10, num2 = 20;
	cout << num1 << ' ' << num2 << endl;
	swap(&num1, & num2);
	cout << num1 << ' ' << num2 << endl;
}


#include <iostream>

void swap(int* pnum1, int* pnum2)
{
	int temp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = temp;
}

void swap(char* pch1, char* pch2)
{
	char temp = *pch1;
	*pch1 = *pch2;
	*pch2 = temp;
}

void swap(double* pdbl1, double* pdbl2)
{
	double temp = *pdbl1;
	*pdbl1 = *pdbl2;
	*pdbl2 = temp;
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
	return 0;
}

#include <iostream>

int adder(int num1=1,int num2=2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << adder() << std::endl;
	std::cout << adder(5) << std::endl;
	std::cout << adder(3, 5) << std::endl;
	return 0;
}

#include <iostream>

int adder(int num1 = 1, int num2 = 2);

int main(void)
{
	std::cout << adder() << std::endl;
	std::cout << adder(5) << std::endl;
	std::cout << adder(3, 5) << std::endl;
	return 0;
}

int adder(int num1, int num2)
{
	return num1 + num2;
}

#include <iostream>

int boxvolume(int length, int width = 1, int height = 1);

int main(void)
{
	std::cout << "[3,3,3] : " << boxvolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << boxvolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << boxvolume(7) << std::endl;
//    std::cout << "[D,D,D] : " << boxvolme() << std::endl;
	return 0;
}

int boxvolume(int length,int width,int height)
{
	return length * width * height;
}
#include <iostream>

int boxvolume(int length, int width, int height)
{
	return length * width * height;
}

int boxvolume(int length, int width)
{
	return length * width;
}

int boxvolume(int length)
{
	return length;
}

int main(void)
{
	std::cout << "[3,3,3] : " << boxvolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << boxvolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << boxvolume(7) << std::endl;
	return 0;
}

#include <iostream>

using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}

	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}

#include <iostream>

namespace progcomimpl
{
	void simplefunc(void);
}


namespace bestcomimpl
{
	void simplefunc(void);
}


int main(void)
{
	bestcomimpl::simplefunc();
	progcomimpl::simplefunc();
	return 0;
}

void bestcomimpl::simplefunc(void)
{
	std::cout << "bestcom이 정의한 함수" << std::endl;
}

void progcomimpl::simplefunc(void)
{
	std::cout << "progcom이 정의한 함수" << std::endl;
}*/

/*
#include <iostream>
#include<cmath>
namespace bestcomimpl
{
	void simplefunc(void);
}

namespace bestcomimpl
{
	void prettyfunc(void);
}

namespace progcomimpl
{
	void simplefunc(void);
}

int main(void)
{
	bestcomimpl::simplefunc();
	return 0;
}

void bestcomimpl::simplefunc(void)
{
	std::cout << "bestcom이 정의한 함수" << std::endl;
	prettyfunc();
	progcomimpl::simplefunc();
}
void bestcomimpl::prettyfunc(void)
{
	std::cout << "so pretty!!" << std::endl;
}

void progcomimpl::simplefunc(void)
{
	std::cout << "progcom이 정의한 함수" << std::endl;
}

#include <iostream>
#include "test.h"

int main() {
	std::cout << Add(1, 5);
}

#include <iostream>

namespace hybrid
{
	void hybfunc(void)
	{
		std::cout << "so simple function!" << std::endl;
		std::cout << "in namespace hybrid!" << std::endl;
	}
}

int main(void)
{
	using hybrid::hybfunc;
	hybfunc();
	return 0;
}

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int num = 20;
	cout << "hello world" << endl;
	cout <<"hello"<<"wordl"<<endl;
	cout << num <<' '<< 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	int num = 20;
	cout << "hello world" << endl;
	cout << "hello " << "world" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}

#include <iostream>
#include "namesp2.h"

int main(void)
{
	bestcomimpl::simplefunc();
	progcomimpl::simplefunc();
	return 0;
}*/
/*
*banking system ver 0.1 
* 작성자 이경환
* 내용:oop단계별 프로젝트의 기본 틀 구성
*/
#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void); //메뉴 출력
void MakeAccount(void); //계자개설을 위한 함수
void DepositMoney(void); //입 금
void WithdrawMoney(void); //출 금
void ShowAllAccInfo(void); //잔액조회

enum {MAKE=1 , DEPOSIT , WITHDRAW , INQUIRE ,EXIT};

typedef struct
{
	int accID; //계좌번호
	int balance; //잔 액
	char cuName[NAME_LEN]; //고객이름	
}Account;

Account accArr[100]; //Account 저장을 위한 배열
int accnum = 0; //저장된 Account 수

int main(void)
{
	int choice;

	while(1)
	{
		ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;

		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
				WithdrawMoney();
				break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal slecection.. " << endl;
		}
	}
	return 0;
}

void ShowMenu(void)
{
	cout << "-----MENU-----" << endl;
	cout << "1.계좌개설" << endl;
	cout << "2.입급" << endl;
	cout << "3.출금" << endl;
	cout << "4.계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이름: "; cin >> name;
	cout << "입급액:"; cin >> balance;
	cout << endl;

	accArr[accnum].accID = id;
	accArr[accnum].balance = balance;
	strcpy(accArr[accnum].cuName, name);
	accnum++;
}

void DepositMoney(void)
{
	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "[계좌ID:]"; cin >> id;
	cout << "입급액:"; cin >> money;

	for (int i=0; i < accnum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "입급완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl << endl;
}

void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[출금]" << endl;
	cout << "계좌ID:"; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accnum; i++)
	{
		if(accArr[i].accID==id)
		{
			cout << "잔액부족" << endl << endl;
			return;
		}
		accArr[i].balance -= money;
		cout << "출금완료" << endl << endl;
		return;
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;


}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accnum; i++)
	{
		cout << "계좌ID: " << accArr[i].accID << endl;
		cout << "이름: " << accArr[i].cuName << endl;
		cout << "잔액: " << accArr[i].balance << endl << endl;
	}
}