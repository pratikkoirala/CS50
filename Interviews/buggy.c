/****************************************************************************
   * buggy3.c
   *
   * David J. Malan
   * malan@harvard.edu
   *
   * Should swap two variables' values, but doesn't!
   * Can you find the bug?
   ***************************************************************************/

  #include <stdio.h>

  // function prototype
  void swap(int a, int b);

  int main(void)
  {
      int x = 1;
      int y = 2;
      printf("x is %d\n", x);
      printf("y is %d\n", y);
      printf("Swapping...\n");
      swap(x, y);
      printf("Swapped!\n");
      printf("x is %d\n", x);
      printf("y is %d\n", y);
      return 0;
  }

  /**
   * Swap arguments' values.
   */
  void swap(int a, int b)
  {
      int tmp = a;
      a = b;
      b = tmp;
  }

