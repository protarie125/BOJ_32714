#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;

  if (N == 2) {
    cout << 1;
    return 0;
  }

  if (N == 3) {
    cout << 3;
    return 0;
  }

  cout << 5 + (N - 3) * 3;

  return 0;
}