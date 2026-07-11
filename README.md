# Pointer to Pointer - Matrix Multiplication

## 🎯 Objective
Multiply two matrices using double pointers to demonstrate dynamic 2D array manipulation.

## 🔍 Key Concepts
- **Double Pointers**: `int**` for 2D dynamic arrays
- **Dynamic Allocation**: Allocating rows and columns separately
- **Matrix Multiplication**: Standard algorithm with triple nested loops
- **Memory Management**: Proper allocation and deallocation

## 🧮 Algorithm
1. Check if multiplication is possible (c1 == r2)
2. For each i in rows of A:
   - For each j in columns of B:
     - Initialize C[i][j] = 0
     - For k from 0 to c1-1:
       - C[i][j] += A[i][k] * B[k][j]
3. Result C has dimensions r1 × c2

## 💻 Sample Input/Output
