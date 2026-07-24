#include <iostream>
using namespace std;
int main() {
    int scores[3][5] = {
        {20,15,18,22,25},
        {18,20,19,24,21},
        {25,17,20,19,23}
    };
    int winner = 0, highestTotal = 0;
    int highestRoundScore = scores[0][0];
    for(int i = 0; i < 3; i++) {
        int total = 0;
        for(int j = 0; j < 5; j++) {
            total += scores[i][j];
            if(scores[i][j] > highestRoundScore)
                highestRoundScore = scores[i][j];
        }
        cout << "Player " << i + 1 << " Total Score = " << total << endl;
        if(total > highestTotal) {
            highestTotal = total;
            winner = i;
        }
    }
    cout << "Winner: Player " << winner + 1 << endl;
    cout << "Highest Score in Any Round: " << highestRoundScore << endl;
    return 0;
}