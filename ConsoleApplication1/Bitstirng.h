#ifdef BIT_EXPORTS
#define BIT_API __declspec(dllexport) 
#else
#define BIT_API __declspec(dllimport)
#endif
extern BIT_API int Var;
#include <iostream>
#include<cassert>

#include <string>
using namespace std;
namespace Bitstring {
	class BIT_API Bitstring
	{
	public:
		Bitstring();      
		class Error {};             
		int SizeOfBitstring();   
		void Read();              
		void Display();             
		char  toString();
		Bitstring(unsigned long* one, unsigned long two);
		string rShift(unsigned long n);
		string lShift(unsigned long n);
	private:
		unsigned long* unit;      
		unsigned long count; 
	};
}