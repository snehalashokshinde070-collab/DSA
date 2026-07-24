#include <iostream>
using namespace std;
int main() {
    int ratings[11] = {5,4,5,3,2,5,4,5,1,3,5};
    int freq[6] = {0};
    int sum = 0;
    for(int i = 0; i < 11; i++) {
        sum += ratings[i];
        freq[ratings[i]]++;
    }
    int common = 1;
    for(int i = 2; i <= 5; i++) {
        if(freq[i] > freq[common])
            common = i;
    }
    cout << "5-Star Ratings: " << freq[5] << endl;
    cout << "Average Rating: " << (float)sum / 11 << endl;
    cout << "Most Common Rating: " << common << endl;
    return 0;
}