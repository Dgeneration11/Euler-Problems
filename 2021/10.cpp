#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
  const unsigned int MaxPrime = 2000000;
  vector<unsigned int> primes;

  primes.push_back(2);
  for (unsigned int i = 3; i <= MaxPrime; i += 2)
  {
    bool isPrime = true;
    for (auto p : primes)
    {
      if (p*p > i)
        break;
      if (i % p == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
      primes.push_back(i);
  }

  map<unsigned int, unsigned long long> sums;
  unsigned long long sum = 0;
  for (auto p : primes)
  {
    sum += p;
    sums[p] = sum;
  }
  unsigned int tests;
  cin >> tests;
  while (tests--)
  {
    unsigned int x;
    cin >> x;

    auto i = sums.upper_bound(x);
    i--;

    cout << i->second << std::endl;
  }
  return 0;
}

