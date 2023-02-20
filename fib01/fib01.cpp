#include <iostream>
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
  
  cout << fibonacci(n) << endl;
}
