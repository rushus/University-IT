#include <math.h>
#include "func.h"

extern float x, result;
extern void func(){
	result = pow(cos(x), 2)+pow(cos(x), 4);
}
