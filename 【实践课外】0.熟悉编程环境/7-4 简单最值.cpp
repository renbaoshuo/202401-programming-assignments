#include <algorithm>
#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;

  cin >> a >> b >> c;

  cout << std::max({a, b, c}) << endl;

  return 0;
}
