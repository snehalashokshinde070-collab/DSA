#include <iostream>
using namespace std;
int main() {
    int parking[5][5] = {
        {1,0,1,1,0},
        {0,0,1,1,1},
        {1,1,1,0,0},
        {0,1,0,1,1},
        {1,0,0,0,1}
    };
    int available = 0;
    int maxEmpty = 0, bestRow = 0;
    for(int i = 0; i < 5; i++) {
        int empty = 0;
        for(int j = 0; j < 5; j++) {
            if(parking[i][j] == 0) {
                available++;
                empty++;
                cout << "Empty Spot: (" << i << "," << j << ")" << endl;
            }
        }
        if(empty > maxEmpty) {
            maxEmpty = empty;
            bestRow = i;
        }
    }
    cout << "Available Spaces: " << available << endl;
    cout << "Row with Most Empty Spaces: " << bestRow << endl;
    return 0;
}