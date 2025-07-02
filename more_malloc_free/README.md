# Memory Allocation in C

This project explores different memory allocation techniques in C programming, focusing on automatic and dynamic allocation using `malloc` and `free`.

## Concepts Covered

- **Automatic Allocation**: Memory managed by the compiler (stack memory)
- **Dynamic Allocation**: Manual memory management using heap memory
- `malloc()`: Function to allocate memory dynamically
- `free()`: Function to release allocated memory
- Memory leaks and how to prevent them
- Proper memory management practices

## Files

1. `0-main.c` - Basic automatic allocation example
2. `1-main.c` - Simple malloc usage
3. `2-main.c` - Array allocation with malloc
4. `3-main.c` - Memory leak example
5. `4-main.c` - Proper memory management with malloc and free

## Requirements

- All files should be compiled on Ubuntu 20.04 LTS using `gcc`
- Use the following flags: `-Wall -Wextra -Werror -pedantic -std=gnu89`
- Each file should demonstrate a specific concept
- Code should be Betty-style compliant

## Compilation

To compile any of the files:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <filename> -o <outputname>