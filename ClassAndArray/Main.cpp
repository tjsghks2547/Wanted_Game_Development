#include <iostream>


using namespace std; 


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

	const int count = 5; 
	Entity* entities[count] = {};
	//memset(entities, 0, sizeof(Entity*) * count);

	for (int ix =0; ix <count; ++ix)
	{
		cout << ix; 
		entities[ix] = new Entity(); 
	}

	/*for(Entity* entity : entities)
	{
		delete entity; 
		entity = nullptr;
	}*/


	for (Entity*& entity : entities)
	{
		delete entity;
		entity = nullptr;
	}


}