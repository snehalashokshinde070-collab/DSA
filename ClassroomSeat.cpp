#include <iostream>
using namespace std;
int main() {
    int seats[5][6] = {
        {1,0,1,1,0,1},
        {1,1,0,1,1,0},
        {0,0,1,1,1,1},
        {1,1,1,0,0,1},
        {0,1,1,1,1,0}
    };
    int occupied = 0, empty = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 6; j++) {
            if(seats[i][j] == 1)
                occupied++;
            else
                empty++;
        }
    }
    cout << "Occupied Seats: " << occupied << endl;
    cout << "Empty Seats: " << empty << endl;
    return 0;
}