#include "stdafx.h"
#include "LFSR.h"
#include <string>


using namespace std;


LFSR::LFSR(string seed, int t)
{
	LFSR new lfsr(seed, t);

	string to_string();     // return a string representation of the LFSR's current state
	int step();          // simulate one step and return the new bit as 0 or 1
	int generate(int k);
}