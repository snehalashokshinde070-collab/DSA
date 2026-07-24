#include <iostream>
using namespace std;
int main() {
    int units[12] = {250,310,280,340,290,360,270,320,305,295,330,315};
    int max = units[0];
    int month = 0;
    int count = 0;
    for(int i = 0; i < 12; i++) {
        if(units[i] > max) {
            max = units[i];
            month = i;
        }
        if(units[i] > 300)
            count++;
    }
    cout << "Highest Usage Month: " << month + 1 << endl;
    cout << "Units: " << max << endl;
    cout << "Months above 300 units: " << count << endl;
    return 0;
}