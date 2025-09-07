// COMSC-210 | Lab 4a | Dainiz Almazan
// IDE used: CLion
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

// providing a value for the random seed instead of generating it to ensure consistency while testing
const int SEED = 3;
const int WIDTH = 10;
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

// displayVectorAsTable() takes a vector of type color and outputs it in the console
// in a well-formatted table
// arguments: a vector of type Color with initialized elements
// returns: nothing
void displayVectorAsTable(const vector<Color> &colorVect);

int main(){
    vector<Color> colors;
    int n = getRandomNum(25, 50);

    Color temp;
    for (int i = 0; i < n; i++) {
        temp.red = getRandomNum(0, 255);
        temp.green = getRandomNum(0, 255);
        temp.blue = getRandomNum(0, 255);
        colors.push_back(temp);
    }

    displayVectorAsTable(colors);

    return 0;
}

int getRandomNum(int low, int high) {
    uniform_int_distribution<> distribution(low, high);
    return distribution(generator);
}

void displayVectorAsTable(const vector<Color> &colorVect) {
    // heading
    cout << setw(WIDTH) << "Color#" << setw(WIDTH)<< "R value" << setw(WIDTH) << "G value" << setw(WIDTH)
        << "B value" << endl;
    cout << setw(WIDTH) << "______" << setw(WIDTH)<< "_______" << setw(WIDTH) << "_______" << setw(WIDTH)
        << "_______" << endl;

    int count = 1;
    for (Color cur : colorVect) {
        cout << setw(WIDTH) << count;
        cout << setw(WIDTH) << cur.red;
        cout << setw(WIDTH) << cur.green;
        cout << setw(WIDTH) << cur.blue << endl;
        count++;
    }
}