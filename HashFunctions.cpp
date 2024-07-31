#include "HashFunctions.h"
#include "Utils.h"
#include <cstdlib>
#include <ctime>

using namespace std;

vector<function<int(int)>> generateHashFunctions(int numFunctions, int maxRange) {

    vector<function<int(int)>> hashFunctions;

    for (int i = 0; i < numFunctions; ++i) {
        int seed = generateRandomSeed();
        hashFunctions.push_back([seed, maxRange](int key) -> int {
            return (seed * key + seed) % maxRange;
        });
    }
    return hashFunctions;
}
