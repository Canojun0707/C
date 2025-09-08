
#include <stdio.h>


int main() {

  /* File intput & output*/

  //##############################################################################
    FILE *file = fopen("example.txt", "w"); // open file in write mode
    
    // When file address is NULL
    if (file == NULL) {   
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Hello, File I/O in C!\n"); // write to file
    fclose(file); // close file

    file = fopen("example.txt", "r"); // open file in read mode
    
    // When file address is NULL
    if (file == NULL) {     
        printf("Error opening file.\n");
        return 1;
    }

    char buffer[100];
    if (fgets(buffer, sizeof(buffer), file) != NULL) printf("Read from file: %s", buffer);
    else                                             printf("Error reading from file.\n");
    
    fclose(file); // close file
  //##############################################################################

  /* File fscanf */
  //##############################################################################
    file = fopen("data.txt", "w"); // open file in write mode
    
    // When file address is NULL
    if (file == NULL) {   
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "42 3.14 Hello\n"); // write to file
    fclose(file); // close file

    file = fopen("data.txt", "r"); // open file in read mode
    
    // When file address is NULL
    if (file == NULL) {     
        printf("Error opening file.\n");
        return 1;
    }

    int intValue;
    float floatValue;
    char strValue[50];

    /*
     *    fscanf() function is used to read formatted input from a file.
        It takes a file pointer, a format string, and a list of pointers to variables where the read values will be stored.
        The format string specifies the type of data to be read, similar to printf().

        returns the number of input items successfully matched and assigned, which can be used to check for errors.
     */
    if (fscanf(file, "%d %f %s", &intValue, &floatValue, strValue) == 3) printf("Read from file: int=%d, float=%.2f, string=%s\n", intValue, floatValue, strValue);
    else                                                                 printf("Error reading from file.\n");

    fclose(file); // close file
  //##############################################################################

  /* end of main */
  return 0;
}
