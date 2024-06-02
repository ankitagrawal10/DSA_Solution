#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> sieve(int n) {
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
      int j = i * i;
      while (j <= n) {
        isPrime[j] = false;
        j += i;
      }
    }
  }
  return isPrime;
}

vector<bool> segsieve(int l, int R) {
  vector<bool> primeFlags = sieve(sqrt(R));
  vector<int> baseprime;
  for (int i = 0; i < primeFlags.size(); i++) {
    if (primeFlags[i]) {
      baseprime.push_back(i);
    }
  }
  vector<bool> segsieve(R - l + 1, true);
  if (l == 1 || l == 0) {
    segsieve[0] = false;
  }
  for (auto prime : baseprime) {
    int first_mul = (l / prime) * prime;
    if (first_mul < l) {
      first_mul += prime;
    }
    int j = max(first_mul, prime * prime);
    while (j <= R) {
      segsieve[j - l] = false;
      j += prime;
    }
  }
  return segsieve;
}

int main() {
  int l = 110;
  int R = 130;
  vector<bool> segsieves = segsieve(l, R);
  for (int i = 0; i < segsieves.size(); i++) {
    if (segsieves[i]) {
      cout << i + l << " ";
    }
  }
  return 0;
}
