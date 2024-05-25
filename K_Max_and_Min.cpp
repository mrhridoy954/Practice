#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int min_num = A;
    int max_num = A;
    
    if (B < min_num) {
        min_num = B;
    }
    if (C < min_num) {
        min_num = C;
    }
    
    if (B > max_num) {
        max_num = B;
    }
    if (C > max_num) {
        max_num = C;
    }
    
    cout << min_num << " " << max_num << endl;
    
    return 0;
}
