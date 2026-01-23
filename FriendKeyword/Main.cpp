#include <iostream>

using namespace std; 

class Entity
{
public:

	// 정답 
	// int GetX() const { return x; }
	friend void ShowEntity(Entity& entity, int x, int y) // 원래 friend 함수 설계는 외부에서 해야하는게 원칙 
	{
		cout << entity.x << "," << entity.y << "\n";
	}; 

	friend void Add(Entity& entity1, Entity& entity2); // 아  void Add(Entity& entity1, Entity& entity2); 이게 외부함수구나를 friend가 설명한것
	//void Add(Entity& entity1, Entity& entity2);	

private: // 접근 한정자 혹은 제한자 
	int x = 0; 
	int y = 0; 
};

// 사용 사례
void Add(Entity& entity1, Entity& entity2)
{
	entity1.x + entity2.x;
	entity1.y + entity2.y;
}


// Entity 정보를 출력하는 함수 
//void ShowEntity(Entity& entity, int x ,int y) // 보면 Entity::void ShowEntity 가 아닌것을 볼수있다. 즉 외부함수임
//{
//	cout << entity.x << "," << entity.y << "\n";
//}

int main()
{
	Entity entity1;
	Entity entity2;
	ShowEntity(entity1,1,1);


	// 템플릿은 컴파일때 해석된다.
}
