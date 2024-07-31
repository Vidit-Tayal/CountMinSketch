#ifndef HASH_FUNCTIONS_H
#define HASH_FUNCTIONS_H

#include <vector>
#include <functional>

using namespace std;

vector<function<int(int)>> generateHashFunctions(int numFunctions, int maxRange);

#endif
