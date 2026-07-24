#include <iostream>
using namespace std;
int main() {
    int runs[8] = {45,67,12,89,54,33,78,50};
    int highest = runs[0];
    int count = 0;
    for(int i = 0; i < 8; i++) {
        if(runs[i] > highest)
            highest = runs[i];
        if(runs[i] > 50)
            count++;
    }
    cout << "Highest Score: " << highest << endl;
    cout << "Matches with more than 50 runs: " << count << endl;
    return 0;
}