#include <iostream>
#include <string>

using namespace std;

struct Vector //	BEGIN	Vector	OBJECT	DEFINITION 
{	
	float	x,	y,	z; //	x,	y	and	z	positions	all	floats 
};

struct Player
{ 
	string name;
	int	hp;		
	Vector position;
};

int main()
{
	Player me;	
	me.name = "William";
	me.hp = 100.0f;
	me.position.x = me.position.y = me.position.z = 1;

	cout << me.name << " has " << me.hp << " hp and stand at 3-space vector: [" << me.position.x << "," << me.position.y << "," << me.position.z << "]" << endl;
	return 0;
}