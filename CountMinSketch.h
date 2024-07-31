#ifndef COUNTMIN_SKETCH_H
#define COUNTMIN_SKETCH_H

#include <vector>
#include <functional>

using namespace std;

class CountMinSketch {
public:
    CountMinSketch(int width, int depth);
    void add(int item);
    int estimate(int item);

private:
    int width;
    int depth;
    vector<vector<int>> table;
    vector<function<int(int)>> hashFunctions;
};

#endif
