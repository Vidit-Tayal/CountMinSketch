#include "Utils.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomSeed() {
    srand(time(nullptr));
    return rand();
}
