#include "CountMinSketch.h"
#include "HashFunctions.h"
#include "Utils.h"

using namespace std;

CountMinSketch::CountMinSketch(int width, int depth) : width(width), depth(depth), table(depth, vector<int>(width)) {
    hashFunctions = generateHashFunctions(depth, width);
}

void CountMinSketch::add(int item) {
    for (int i = 0; i < depth; ++i) {
        int hash = hashFunctions[i](item);
        table[i][hash % width] += 1;
    }
}

int CountMinSketch::estimate(int item) {
    int minEstimate = INT32_MAX;
    for (int i = 0; i < depth; ++i) {
        int hash = hashFunctions[i](item);
        minEstimate = min(minEstimate, table[i][hash % width]);
    }
    return minEstimate;
}
