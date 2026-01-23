#pragma once 


// 전방 선언 
class Vector;

class Entity
{
public:
	Entity() = default;
	Entity(int x, int y);
	Entity(const Entity& other);
	~Entity();


private:
	Vector* position = nullptr;

	int x = 4; 
	int y = 3; 
};