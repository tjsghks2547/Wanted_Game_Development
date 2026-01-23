#pragma once 


// 전방 선언 
class Vector;

class Entity
{
public:
	Entity(int x, int y);
	~Entity();


private:
	Vector* position = nullptr;
};