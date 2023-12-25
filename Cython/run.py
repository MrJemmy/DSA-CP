import time
from test import c_prime_finder

def prime_finder(amount: int) -> list[int]:
    primes: list[int] = []

    found: int = 0
    number: int = 2
    while found < amount:
        for x in primes:
            if number % x == 0:
                break
        else:
            primes.append(number)
            found += 1
        
        number += 1

    return primes



if __name__ == "__main__":
    # Basic Python Code
    t_start = time.time()
    prime_finder(10000)
    t_end = time.time()
    print(t_end-t_start)

    # Cython Code
    t_start = time.time()
    c_prime_finder(10000)
    t_end = time.time()
    print(t_end-t_start)

