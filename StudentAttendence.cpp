#include <iostream>
using namespace std;
int main() {
    int attendance[5][7] = {
        {1,1,1,0,1,1,1},
        {1,0,1,1,0,1,1},
        {1,1,1,1,1,1,1},
        {0,1,0,1,1,0,1},
        {1,1,0,0,1,1,0}
    };
    int bestStudent = 0, maxPresent = 0;
    for(int i = 0; i < 5; i++) {
        int present = 0;
        for(int j = 0; j < 7; j++)
            present += attendance[i][j];
        cout << "Student " << i + 1 << " Attendance = "
             << (present * 100.0) / 7 << "%" << endl;
        if(present > maxPresent) {
            maxPresent = present;
            bestStudent = i;
        }
    }
    cout << "Best Attendance: Student " << bestStudent + 1 << endl;
    return 0;
}