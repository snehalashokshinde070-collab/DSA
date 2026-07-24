#include <iostream>
using namespace std;
int main() {
    int marks[5][4] = {
        {78,85,90,88},
        {65,70,68,72},
        {91,93,95,89},
        {55,60,58,62},
        {80,84,82,86}
    };
    int topper = 0;
    int highest = 0;
    for(int i = 0; i < 5; i++) {
        int total = 0;
        for(int j = 0; j < 4; j++) {
            total += marks[i][j];
        }
        cout << "Student " << i + 1 << " Total = " << total << endl;
        if(total > highest) {
            highest = total;
            topper = i;
        }
    }
    cout << "Topper: Student " << topper + 1 << endl;
    cout << "Highest Total: " << highest << endl;
    return 0;
}