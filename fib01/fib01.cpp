#include <iostream>
#include <chrono>
#define NREPS 1000

using namespace std;

size_t fibonacci(size_t n) {
  if (n < 2) return n;
  return fibonacci(n-1)+fibonacci(n-2);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " <number>" << endl;
  }
  int n = atoi(argv[1]);
  auto ini = std::chrono::system_clock::now(); 
  long res = 0;
  for (int i = 0; i < NREPS; i++) {
    res = fibonacci(n);
  }
  auto end = std::chrono::system_clock::now();
  auto t = chrono::duration_cast<chrono::milliseconds>(end-ini).count();
  cout << res << " results, time per iteration: " << t/NREPS << endl;
}
