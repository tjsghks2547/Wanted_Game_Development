#include <iostream>
//#include <string>
#include <Windows.h>


#define MYTEXT(value) L##value // 매크로에서 ## 은 두 단어를 붙힌다는 의미
#define MYTEST(value1,value2) value1##value2 // 매크로에서 ## 은 두 단어를 붙힌다는 의미 


// 클래스 내부에서 문자열을 다루기.
class Player
{
	// 위에 멤버 변수..
	// 그 아래에 함수.

	// public/protected/private 
	// -> 접근 한정자/접근 제한자.
	// 접근 가능한 범위를 설정.
public:
	// 생성자 (Constructor).
	// 객체를 생상할 때 호출되는 특별한 함수.
	// 반환형이 없고, 클래스 이름과 동일.
	Player(const char* inName)
	{
		// 문자열 복사.
		//name = inName;

		// 1.저장 공간 확보.
		// -> 확보할 공간의 크기를 알아야 함.
		size_t length = strlen(inName) + 1;
		name = new char[length];

		// 2. 문자열 복사.
		//for (int ix = 0; ix < length; ++ix)
		//{
		//	name[ix] = inName[ix];
		//}

		//memcpy()
		strcpy_s(name, length, inName);
	}

	// 소멸자.
	// 객체가 해제될 때 실행.
	~Player()
	{
		//if (name != nullptr)
		if (name)
		{
			delete[] name;
			name = nullptr;
		}
	}

private:
	// 문자열을 저장할 변수.
	char* name = nullptr;
};

int main()
{
	// 문자열.
	// 문자열은 불변성을 가짐.
	const char* testString = "Ronnie";
	std::cout << testString << "\n";

	// 문자 배열도 가능.
	char buffer[7]
		= { 'R', 'o', 'n', 'n', 'i', 'e', 0 };
	std::cout << buffer << "\n";

	// 객체 기반으로 문자열 사용.
	Player player("RonnieJ");

	// wide - character 
	const wchar_t* wideString = MYTEXT("Hello wide string"); 
	auto test = MYTEST(10, 20);


	std::cin.get();
}
