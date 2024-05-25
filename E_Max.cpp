#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int max_num = 0;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num > max_num) {
            max_num = num;
        }
    }
    
    cout << max_num << endl;
    
    return 0;
}
