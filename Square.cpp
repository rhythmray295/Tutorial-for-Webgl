#include <string>
#include "ObjLibrary/Vector2.h"
#include "GetGlut.h"
#include "Sleep.h"

using namespace std;
using namespace ObjLibrary;

void update();
void draw();



class Square
{
public:
	// declare your constructor here
	Vector2 pos;
	Vector2 vel;
	double age = 0.0;
	void init();
	// declare your public member functions here
private:
	// declare your private member functions here

	// declare your member variables here
};

void Square::init()
{
	pos.set(0.0, 0.0);
	vel.set(5.0, 1.0);
	age = 0;
}