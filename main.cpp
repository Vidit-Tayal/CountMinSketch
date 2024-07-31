#include <iostream>
#include "CountMinSketch.h"

using namespace std;

int main() {
    CountMinSketch cms(100, 5);

    // Add items
    cms.add(10);
    cms.add(30);
    cms.add(10);

    // Estimate counts
    cout << "Count of 10: " << cms.estimate(10) << endl;
    cout << "Count of 20: " << cms.estimate(20) << endl;
    cout << "Count of 30: " << cms.estimate(30) << endl;

    return 0;
}
