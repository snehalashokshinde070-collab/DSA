#include <iostream>
using namespace std;
int main() {
    int sales[3][5] = {
        {1200,1400,1500,1300,1600},
        {1100,1250,1350,1450,1500},
        {1800,1750,1900,1850,2000}
    };
    int bestStore = 0, highestSales = 0;
    for(int i = 0; i < 3; i++) {
        int total = 0;

        for(int j = 0; j < 5; j++)
            total += sales[i][j];
        cout << "Store " << i + 1 << " Total Sales = " << total << endl;
        if(total > highestSales) {
            highestSales = total;
            bestStore = i;
        }
    }
    cout << "Best Performing Store: " << bestStore + 1 << endl;
    return 0;
}