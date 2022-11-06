#pragma comment(lib,"Dll1.lib")
#include <iostream>
#include "Bitstirng.h"
#include <Windows.h>
#include <string>
using namespace std;
int main()
{

	setlocale(LC_ALL, "ru");    //русский язык

	Bitstring::Bitstring bitsring = Bitstring::Bitstring();
	bitsring.Display();
	return 0;

	system("pause");


	return 0;
}
