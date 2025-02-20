#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    vector<double> numbers;
    
    if (argc < 2) {
        cout << "Please input numbers to find average.\n";
        return 0;
    }
    
    for (int i = 1; i < argc; i++) {
        numbers.push_back(atof(argv[i]));
    }
    
    double sum = 0;
    for (double i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    
    double average = sum / numbers.size();
    
    cout << "---------------------------------\n";
    cout << "Average of " << numbers.size() << " numbers = " << average << "\n";
    cout << "---------------------------------\n";
    
    return 0;
}
