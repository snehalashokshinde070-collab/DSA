#include <iostream>
using namespace std;
int main() {
    int prices[5] = {450,1200,300,800,650};
    int total = 0;
    int expensive = prices[0];
    for(int i = 0; i < 5; i++) {
        total += prices[i];
        if(prices[i] > expensive)
            expensive = prices[i];
    }
    cout << "Total Bill: " << total << endl;
    cout << "Most Expensive Product: " << expensive << endl;
    return 0;
}