#include <iostream>
using namespace std;
int main() {
    int transactions[7] = {5000,-1000,2000,-500,-700,3000,-1200};
    int balance = 0;
    int deposits = 0;
    int withdrawals = 0;
    for(int i = 0; i < 7; i++) {
        balance += transactions[i];
        if(transactions[i] > 0)
            deposits++;
        else
            withdrawals++;
    }
    cout << "Final Balance: " << balance << endl;
    cout << "Total Deposits: " << deposits << endl;
    cout << "Total Withdrawals: " << withdrawals << endl;
    return 0;
}