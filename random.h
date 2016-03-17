#ifndef RANDOM_H

static long seed;
static bool fresh_seed = false;

const static long m = 1<<32;
const static long a = 22695477;
const static long c = 1;


void set_seed(long s) { seed = s; fresh_seed = true;}

long randint(){
	static long prev;
	if (fresh_seed){
		prev = seed;
		fresh_seed = false;
	}
	
	prev = (a*prev + c) % m;
	return prev;
}
 
#endif // RANDOM_H_