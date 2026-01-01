// Siddhuceros Method: Efficient Square Generation
// Discovered by Siddhu (2025)

#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    int squares[N+1];
    squares[1] = 1;

    for (int i = 2; i <= N; i++) {
        squares[i] = squares[i-1] + ((i - 1) + (i-1) + 1);
    }
// Output all squares
    for (int i = 1; i <= N; i++) {
        cout << i << "^2 = " << squares[i] << endl;
    }
}
