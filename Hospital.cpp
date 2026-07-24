#include <iostream>
using namespace std;

int main() {
    int patients[4][7] = {
        {20,25,18,30,22,27,24},
        {28,35,32,30,31,29,34},
        {18,20,19,22,21,23,24},
        {40,38,42,39,45,41,43}
    };
    int busiestWeek = 0, maxWeekTotal = 0;
    int maxPatients = patients[0][0];
    int week = 0, day = 0;
    for(int i = 0; i < 4; i++) {
        int total = 0;
        for(int j = 0; j < 7; j++) {
            total += patients[i][j];
            if(patients[i][j] > maxPatients) {
                maxPatients = patients[i][j];
                week = i;
                day = j;
            }
        }
        if(total > maxWeekTotal) {
            maxWeekTotal = total;
            busiestWeek = i;
        }
    }
    cout << "Busiest Week: " << busiestWeek + 1 << endl;
    cout << "Highest Admissions: " << maxPatients << endl;
    cout << "Week: " << week + 1 << ", Day: " << day + 1 << endl;
    return 0;
}