#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;

    cin >> a >> b;

    cout << "C = " << (a + b) * 2 << endl;
    cout << "S = " << a * b << endl;

    return 0;
}
