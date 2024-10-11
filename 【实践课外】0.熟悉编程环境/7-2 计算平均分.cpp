#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "math = 87, eng = 72, comp = 93, average = " << (87 + 72 + 93) / 3 << endl;

    return 0;
}
