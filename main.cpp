// COMSC-210 | Lab 4a | Dainiz Almazan
// IDE used: CLion
#include <iostream>
#include <random>
#include <vector>
using namespace std;

const int SEED = 3;
default_random_engine generator(SEED);

struct Color {
    int red;
    int green;
    int blue;
};

// getRandomNum() generates a random number between the low and high integers
// arguments: an integer for the start of the range and an integer for the end of the range
// returns: a random int value between the low and high integers
int getRandomNum(int low, int high);

int main(){
    vector<Color> colors;
    int n = getRandomNum(25, 50);

    return 0;
}

int getRandomNum(int low, int high) {
    uniform_int_distribution<> distribution(low, high);
    return distribution(generator);
}