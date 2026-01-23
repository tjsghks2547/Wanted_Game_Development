#include <iostream>


using namespace std; 

// 게임 물체(객체) 
// Game-Object / Actor / Entity (개체)

class Entity
{
public:
	Entity()
	{
		cout << "Constructor called" << endl; 
	};

	~Entity() = default; 

			
	void ShowName() const // 이 안에서 맴버 변수 내용을 바꾸지 않겟다 해서 const를 붙히는거 즉, 함수 본문에서 객체 내부의 값을 변경할 수 없음
	{
		cout << "Entity.\n";
	}

	Entity* GetSelf()
	{
		//this는 자기 자신을 가리키는 '포인터' 
		return this; 
	}
};

//void ShowName() const // 이 안에서 맴버 변수 내용을 바꾸지 않겟다 해서 const를 붙히는거 즉, 함수 본문에서 객체 내부의 값을 변경할 수 없음
//{
//	cout << "Entity.\n";
//}


int main()
{
	//// 면접 문제
	//Entity* entity = nullptr; 
	//entity->ShowName(); // 이게 실행이 되는가 안되는가 (함수호출시점에 객체가 nullptr인지 체크안해서 실행됨 이상한 크래프톤 면접문제였음..)



	//const int count = 5; 
	//Entity entities[count]; 


	//for(const Entity& entity : entities)  // for_each 구문  ( Ranged based) 
	//{
	//	entity.ShowName(); 
	//}

	//const int count = 5; 
	//Entity* entities[count] = {};
	////memset(entities, 0, sizeof(Entity*) * count);

	//for (int ix =0; ix <count; ++ix)
	//{
	//	cout << ix; 
	//	entities[ix] = new Entity(); 
	//}

	/*for(Entity* entity : entities)
	{
		delete entity; 
		entity = nullptr;
	}*/


	//for (Entity*& entity : entities)
	//{
	//	delete entity;
	//	entity = nullptr;
	//}





	/* 이중포인터로 해보기 실습*/
	//const int count = 5;
	//Entity* entities[count] = {}; // 원본 포인터 배열

	//// (예시) 할당
	//for (int i = 0; i < count; ++i)
	//	entities[i] = new Entity();

	//// 1) "복사된 곳"에 원본 포인터 변수의 주소를 저장
	//Entity** refs[count] = {};
	//for (int i = 0; i < count; ++i)
	//	refs[i] = &entities[i];   // 핵심: 포인터 변수 자체의 주소

	//// 2) refs를 돌면서 원본 메모리 삭제 + 원본 포인터 nullptr 초기화
	//for (Entity** p : refs)
	//{
	//	if (p && *p)
	//	{
	//		delete* p;      // 원본이 가리키던 객체 삭제
	//		*p = nullptr;   // 원본 포인터(entities[i])를 nullptr로
	//	}
	//}




	Entity* entity = new Entity(); 
	cout << entity << "\n";
	cout << entity << entity->GetSelf() << "\n";

	delete entity; 




}