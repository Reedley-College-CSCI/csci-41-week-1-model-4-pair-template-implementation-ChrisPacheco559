// Christopher Pacheco
#include "Pair.h"
#include "Pair.cpp"
#include <iostream>
using namespace std;

int main() {
    // Add test cases here
    Pair<int> intConstructor(1, 2);
    cout << "Sum: " << intConstructor.getFirst() + intConstructor.getSecond() << endl; // Display the total sum

    Pair<string> stringConstructor("apple", "banana");
    cout << stringConstructor.getFirst() << ", " << stringConstructor.getSecond() << endl; // Display the name of the fruits

    return 0;
}
