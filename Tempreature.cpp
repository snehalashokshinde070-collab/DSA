#include <iostream>
using namespace std;
int main() {
    int temp[7] = {32,35,31,37,34,36,30};
    int max = temp[0], min = temp[0], sum = 0;
    int hottest = 0, coldest = 0;
    for(int i = 0; i < 7; i++) {
        sum += temp[i];
        if(temp[i] > max) {
            max = temp[i];
            hottest = i;
        }
        if(temp[i] < min) {
            min = temp[i];
            coldest = i;
        }
    }
    cout << "Hottest Day: " << hottest + 1 << " Temperature: " << max << endl;
    cout << "Coldest Day: " << coldest + 1 << " Temperature: " << min << endl;
    cout << "Average Temperature: " << (float)sum / 7 << endl;
    return 0;
}