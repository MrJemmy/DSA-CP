import cython


def c_prime_finder(amount: cython.int) -> list[int]:
    primes: list[int] = []

    found: cython.int = 0
    number: cython.int = 2
    while found < amount:
        for x in primes:
            if number % x == 0:
                break
        else:
            primes.append(number)
            found += 1
        
        number += 1

    return primes