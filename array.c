

#include <stdio.h>

int main() {
    

  /* Multidimensional Array basic*/
  //##############################################################################
    int arr[3][4] = {                // 3 rows and 4 columns
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Elements of the 2D array:\n");
    
    for (int i = 0; i < 3; i++) {           // iterate over rows
        for (int j = 0; j < 4; j++) {       // iterate over columns
            printf("%d ", arr[i][j]);      // print element at row i and column j
        }
        printf("\n");                       // new line after each row
    }
  //##############################################################################
  

  /* end of main */
  return 0;
}