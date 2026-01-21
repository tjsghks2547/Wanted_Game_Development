#include <iostream>
#include "Log.h"

//void Log(const char* message);
//void Log(const char* message)
//{
//	std::cout << message << "\n";
//}

// F12, Ctrl + -
// Ctrl + 방향키 좌우.
// Home + End + (Shift).
// 
int main()
{
	Log("Hello World");
	//std::cout << "Hello World\n";
	
	// 프로그램 바로 종료되지 말라고 붙임.	f;lf   
	// 의미 없음.
	std::cin.get();
}
