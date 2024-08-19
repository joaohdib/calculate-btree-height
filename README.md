# calculate-btree-height
# Binary Tree Height Calculation in C

This project implements a C algorithm to calculate and display the height of each node in a binary tree. The program creates a binary tree, computes the height of each node, and then displays the node values along with their heights.

## Features

- **Create Nodes**: Initialize nodes of the binary tree with values, left and right children.
- **Calculate Heights**: Compute the height of each node recursively.
- **Display Nodes**: Print the node values along with their computed heights in an in-order traversal.
- **Memory Management**: Free allocated memory for the binary tree nodes.

## Data Structures

### Node Structure
The `Nodo` structure represents a node in the binary tree:
- `valor`: Integer value stored in the node.
- `esq`: Pointer to the left child node.
- `dir`: Pointer to the right child node.
- `altura`: Integer representing the height of the node.

## Functions

### `Nodo* cria(int valor, Nodo* noEsq, Nodo* noDir)`
Creates a new node with a specified value, left child, and right child. Initializes the height to 0.

### `int calculaAltura(Nodo* Nodo)`
Recursively calculates and sets the height of each node in the binary tree. Returns the height of the current node.

### `void exibeOrdem(Nodo* raiz)`
Displays the value and height of each node in in-order traversal.

### `void liberaMemoria(Nodo* raiz)`
Recursively frees the memory allocated for each node in the binary tree.

## Compilation and Execution

To compile and run the program, follow these steps:

1. **Compile the code**:
   ``` gcc -o binary_tree main.c ```

2. **Run the program**:
  ``` ./binary_tree ```

## Example

Given the following binary tree:
>>> 
>>>       50
>>>      /  \
>>>     30   70
>>>       \    \
>>>       40   80
>>>              /
>>>            20

The program will output:
>>> 
>>> Node value: 20, Height: 0
>>> Node value: 80, Height: 1
>>> Node value: 70, Height: 2
>>> Node value: 40, Height: 0
>>> Node value: 30, Height: 1
>>> Node value: 50, Height: 3
