#include <iostream>
//#include "Entity/Entity.h"
//#include <Entity/Entity.h>
#include <Entity.h>  // 시스템 적인건 <> 로 표시 // 내가 작성한건 " " 로 표시 하는게 일반적

void TestFunction(Entity entity)
{
	std::cout << "TestFunction\n";
}


int main()
{
	Entity entity(10, 20);
	Entity entity2(entity); // 복사 생성자
	Entity entity3 = entity2; // 복사 생성자 

	int a = 4; 

}



