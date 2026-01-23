#include "Entity.h"
#include "../Vector.h"


Entity::Entity(int x, int y)
{
	position = new Vector();
	position->x = 1;
	position->y = 2; 

}


Entity::~Entity()
{

}