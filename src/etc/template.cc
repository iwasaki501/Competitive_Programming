// Helper functions and macros for debug output
// snippet-begin
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <vector>

// Acknowledgement: Special thanks to kyomukyomupurin, who developed this
// template.
template <class T, class U>
std::ostream& operator<<(std::ostream& os, const std::pair<T, U>& p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <class Tuple, std::size_t... Is>
void tuple_out(std::ostream& os, const Tuple& tup, std::index_sequence<Is...>) {
  ((os << (Is ? ", " : "(") << std::get<Is>(tup)), ...) << ")";
}

template <class... Args>
std::ostream& operator<<(std::ostream& os, const std::tuple<Args...>& tup) {
  tuple_out(os, tup, std::index_sequence_for<Args...>{});
  return os;
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
  int l = vec.size();
  const int th = 100;
  const int n_show = 20;
  int n = 0;
  if (l < th) {
    for (auto e : vec) os << (n++ ? ", " : "{") << e;
  } else {
    for (int i = 0; i < n_show; i++) {
      os << (n++ ? ", " : "{") << vec[i];
    }
    os << ", ... ";
    for (int i = l - n_show; i < l; i++) {
      os << (n++ ? ", " : "{") << vec[i];
    }
  }
  return os << (n ? "}" : "{}");
}

template <class T, class Compare>
std::ostream& operator<<(std::ostream& os, const std::set<T, Compare>& st) {
  bool first = true;
  for (auto e : st) os << (first ? "{" : ", ") << e, first = false;
  return os << (first ? "{}" : "}");
}

template <class T, class U, class Compare>
std::ostream& operator<<(std::ostream& os, const std::map<T, U, Compare>& mp) {
  bool first = true;
  for (auto e : mp) os << (first ? "{" : ", ") << e, first = false;
  return os << (first ? "{}" : "}");
}

template <class T, class Compare>
std::ostream& operator<<(std::ostream& os,
                         const std::multiset<T, Compare>& st) {
  bool first = true;
  for (auto e : st) os << (first ? "{" : ", ") << e, first = false;
  return os << (first ? "{}" : "}");
}

template <class T, class U, class Compare>
std::ostream& operator<<(std::ostream& os,
                         const std::multimap<T, U, Compare>& mp) {
  bool first = true;
  for (auto e : mp) os << (first ? "{" : ", ") << e, first = false;
  return os << (first ? "{}" : "}");
}

template <class T>
std::istream& operator>>(std::istream& is, std::vector<T>& vec) {
  for (T& e : vec) is >> e;
  return is;
}

#ifdef LOCAL
#define debug(...) \
  std::cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define debug(...) void(0)
#endif

void debug_out() { std::cerr << '\n'; }

template <class Head, class... Tail>
void debug_out(Head&& head, Tail&&... tail) {
  std::cerr << head;
  if (sizeof...(Tail) != 0) std::cerr << ", ";
  debug_out(std::forward<Tail>(tail)...);
}

using namespace std;
using int64 = long long;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout << std::fixed << std::setprecision(17);
  
  
  cin >> ;
  return 0;
}
// snippet-end
