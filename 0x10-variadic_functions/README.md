# Variadic functions
The learning objective of this projects are:
- What are variadic functions
- How to use va_start, va_arg and va_end macros
- Why and how to use the const type qualifier

### 0. Beauty is variable, ugliness is constant
[0-sum_them_all.c](./0-sum_them_all.c) a function that returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...)`
- If n == 0, return 0

