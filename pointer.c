

#include <stdio.h>

void print_message(const char *message);
void (*func_ptr)(const char*);

int main() {

  /*  basic pointer */
  //###############################################################################
    int var = 20;   /* actual variable declaration */
    int *ip;        /* pointer variable declaration */

    ip = &var;  /* store address of var in pointer variable*/

    printf("Address of var variable: %p\n", (void*)&var  );

    /* address stored in pointer variable */
    printf("Address stored in ip variable: %p\n", ip ); 

    /* access the value using the pointer */
    printf("Value of *ip variable: %d\n", *ip );
  //###############################################################################


  /* pointer to pointer */
  //###############################################################################
    int **pp;      /* pointer to pointer declaration */
    pp = &ip;     /* store address of ip in pointer to pointer */
    printf("Value of **pp variable: %d\n", **pp);   // **pp -> *ip -> var = 20
  //###############################################################################

  /* pointer arithmetic */
  //###############################################################################
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;  // *p -> arr[0] = 10
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(p + i)); // *(p + i) = *(i + p) -> arr[i]
    }
  //###############################################################################
  
  /* void pointer */
  //###############################################################################
    int num = 42;
    void *vp;      // void pointer declaration
    vp = &num;     // store address of num in void pointer
    printf("Value of num using void pointer: %d\n", *( (int*)vp) ); // (int*)(void *)vp -> int* -> num = 42
  //###############################################################################

  /* null pointer */
  //###############################################################################
    int *null_ptr = NULL; // null pointer declaration
    if (null_ptr == NULL) printf("The pointer is null.\n");     // null_ptr address is NULL
    else                  printf("The pointer is not null.\n");
  //###############################################################################

  /* dangling pointer */
  //###############################################################################
    int *dangling_ptr; // dangling pointer declaration
    {
        int temp = 100;
        dangling_ptr = &temp; // dangling_ptr points to temp which is out of scope after this block
    }
    // Accessing dangling_ptr here is unsafe and leads to undefined behavior
    // printf("Value of dangling pointer: %d\n", *dangling_ptr); // Uncommenting this line may cause issues
    printf("Dangling pointer example completed (no dereference to avoid undefined behavior).\n");
  //###############################################################################
  
  /* string handling functions */
  //##############################################################################
    char dest[50] = "Hello, ";
    char src[] = "C programming world!";
    strcat(dest, src); 
    printf("Concatenated string: %s\n", dest);  // print Hello, C programming world!
    
    printf("Length of concatenated string: %zu\n", strlen(dest)); // find length of dest
    
    int cmp = strcmp("Hello", "Hello"); // compare two strings    
    if (cmp == 0)       printf("Strings are equal.\n");
    else                printf("Strings are not equal.\n");

    char *substr = strstr(dest, "C programming"); // find substring
    if (substr != NULL) printf("Substring found: %s\n", substr);
    else                printf("Substring not found.\n");
  //##############################################################################
  
  /* end of main */


    return 0;
}