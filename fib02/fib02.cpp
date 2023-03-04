#include <iostream>
#include <boost/chrono.hpp>
using namespace std;
using namespace boost::chrono;
#define NREPS 100000000

long fibonacci(int n) {
  if (n < 2) return n;
  long prevprev = 0;
  long prev = 1;
  long res = 0;
  for (int i = 1; i<n; i++) {
    res = prevprev + prev;
    prevprev = prev;
    prev=res;
  }
  
  return res;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " <number>" << endl;
  }
  int n = atoi(argv[1]);
  auto ini = high_resolution_clock::now(); 
  long res = 0;
  for (int i = 0; i < NREPS; i++) {  
    res = fibonacci(n); 
  }
  auto end = high_resolution_clock::now(); 
  boost::chrono::duration<double> diff = end - ini;
  cout.precision(12);
  cout << "Result: " << res << " Took " << fixed << diff.count()/NREPS << " secs." << endl;
}
