#include <iostream>
using namespace std;
int main() {
    int marks[10] = {78,34,56,90,41,25,67,39,88,49};
    int pass = 0, fail = 0;
    int topper = marks[0];
    for(int i = 0; i < 10; i++) {
        if(marks[i] >= 40)
            pass++;
        else
            fail++;
        if(marks[i] > topper)
            topper = marks[i];
    }
    cout << "Passed Students: " << pass << endl;
    cout << "Failed Students: " << fail << endl;
    cout << "Topper Marks: " << topper << endl;
    return 0;
}