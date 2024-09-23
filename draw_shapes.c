#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow by combining the code from print_triangle and print_square functions.
void print_arrow(int leftCol, int size)
{
   // prints the triangle for the top of the arrow
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row;
    int maxCol = leftCol + size + row;
    for (int col = 0; col < minCol; col++) {
      putchar(' ');
    }
    for (int col = minCol; col <= maxCol; col++) {
      putchar('*');
    }
    putchar('\n');
  }

  //prints a recangle for the bottom of the arrow.
  int tailStartCol = leftCol + size - (size / 2); // Adjust the left column to center the tail
  int tailWidth = size; 
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < tailStartCol; col++) {
      putchar(' ');
    }
    for (int col = 0; col < tailWidth; col++) {
      putchar('*');
    }
    putchar('\n');
  }
}

