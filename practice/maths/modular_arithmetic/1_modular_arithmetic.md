# Modular Arithmetic Properties

- Essential Tool for solving Big Integer Probless (10^9 + 7)

- P is a Prime

## (a + b) mod P

- (a + b) mod P = ((a mod P) + (b mod P)) mod P

## (a \* b) mod P

- (a \* b) mod P = ((a mod P) \* (b mod P)) mod P

## (a / b) mod P

- to understand this we need 2 things modular inverse , fermat's little therom and binary exponentiation technique

### Modular Inverse

- modular inverse of an integer a % m is an integer x such that

  - a . x = 1 mod P or
  - a . a^-1 = 1 mod P

### Fermat's Little Theorem

- if p is prime for any integer a , a ^ P = a mod P or simply a ^ p mod P = a mod P

a ^ P - 2 mod P = a -1 mod P
