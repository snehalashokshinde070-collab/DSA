#include <iostream>
using namespace std;
int main() {
    int attendance[10] = {1,0,1,1,0,1,1,0,1,1};
    int present = 0, absent = 0;
    for(int i = 0; i < 10; i++) {
        if(attendance[i] == 1)
            present++;
        else
            absent++;
    }
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;
    return 0;
}