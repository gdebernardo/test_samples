# fib03.py
import sys
import time

def fibonacci(n):
    if n < 2:
        return n
    prevprev=0
    prev=1
    res = 1
    pos = 1
    while pos < n:
        res = prevprev + prev
        prevprev=prev
        prev = res
        pos = pos + 1
    return res


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print(f"Execution failed. Expected an integer argument")
        exit()
    n = int(sys.argv[1])
    nreps=1000000
    res = 0
    ini = time.time()
    for i in range(nreps):
        res = fibonacci(n)
        
    end = time.time()
    t = end - ini
    print(f"Got {res}, time per iteration: {t/1000000:.15f}") 
    t = end - ini
