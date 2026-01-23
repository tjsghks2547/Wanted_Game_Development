#include "Entity.h"
#include "../Vector.h"
#include <iostream>

using namespace std; 


Entity::Entity(int x, int y)
{
	position = new Vector();
	position->x = 1;
	position->y = 2; 

}

Entity::Entity(const Entity& other)
	//:position(new Vector())
	//,x(other.x)
	//,y(other.y)
{

	cout << "copy constructor called\n";

	// 기본 복사 생성자가 하는 일 
	// 1. 값 복사 
	//position = other.position;  // 이렇게 하면 소멸자에서 댕글링(Dangling) 포인터 발생함.
	                            // 이미 삭제된 메모리 주소에 접근하는 문제 (얕은복사 했을 때 문제) 

	//공간확보
	position = new Vector(); 
	position->x = other.position->x; 
	position->y = other.position->y;	
}


Entity::~Entity()
{

}