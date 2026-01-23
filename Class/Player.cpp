#include "Player.h"
#include <iostream>

// 기본값 설정/자원 할당.
Player::Player()
{
}

Player::Player(const char* inName)
{
	// 여기서 
	// x=0;

	//내부에 함수를 호출하거나 heap 메모리를 사용하는경우는 생성자 함수안에서 사용  혹은 맴버 이니셜라이즈
	//생성자에서 : x(0),y(0) 이런식으로 
	// 동적 할당 및 문자열 복사 
	size_t length = strlen(inName) + 1; 
	name = new char[length];

	strcpy_s(name, length, inName); 

}


// 자원 해제.
Player::~Player()
{
	if(name != nullptr)
	{
		delete[] name; 
		name = nullptr; 
	}
}

// Player:: <- Player 클래스 안에 있는.
// :: 범위 지정 연산자.
void Player::Move(int inX, int inY)
{
	x = inX;
	y = inY;
}