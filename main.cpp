#include <iostream>
#include "random.h"

int main (int argc, char const *argv[])
{
	set_seed(10);
	for(int i=0; i<100; ++i){
		std::cout << randint() % 100 << "\n";
	}
	return 0;
}