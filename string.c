

#include <stdio.h>
#include "string.h"

/*
*
* This program demonstrates basic string manipulation functions in C.
*
*/

int main() {
    
    //##############################################################################
    char message [] = "Hello, World!";
    
    /* printf test function */
    print_message(message);
    //##############################################################################
    /* copy str  */
    /*
        strcpy() function is used to copy the content of one string to another string.
        It takes two arguments: the destination string and the source string.
        The destination string must be large enough to hold the copied content, including the null terminator. 
    */
    char dest[50];                          //dumy array
    strcpy(dest, message);                  //copying str
    printf("Copied string: %s\n", dest);    // print hello world!
    //##############################################################################
    /* concatenate str */
    /*
        strcat() function is used to concatenate (append) one string to the end of another string.
        It takes two arguments: the destination string and the source string.
        The destination string must be large enough to hold the concatenated content, including the null terminator.
    */
    char src[] = " Welcome to C programming.";  
    strcat(dest, src);      //concatenating str
    printf("Concatenated string: %s\n", dest);
    //##############################################################################
    /* find length of str */
    /*
        strlen() function is used to calculate the length of a string.
        It takes a single argument: the string whose length is to be calculated.
        The function returns the number of characters in the string, excluding the null terminator.
    */
    int len = strlen(dest); //calculating length
    printf("Length of concatenated string: %d\n", len); // 39
    //##############################################################################
    /* compare str */
    /*
     *  strcmp() function is used to compare two strings.
        It takes two arguments: the first string and the second string.
        The function returns an integer value:
            - A value less than 0 if the first string is less than the second string.
            - A value greater than 0 if the first string is greater than the second string.
            - A value of 0 if both strings are equal. 
     */
    //##############################################################################
    char str1[] = "Hello";
    char str2[] = "Hello";
    int cmp = strcmp(str1, str2);    //comparing str
    
    if (cmp == 0)   printf("Strings are equal.\n");
    else            printf("Strings are not equal.\n");
    //##############################################################################
    /* find substring */
    /*
        strstr() function is used to find the first occurrence of a substring in a string.
        It returns a pointer to the first occurrence of the substring, or NULL if the substring is
    */
    char *substr = strstr(dest, "C programming"); //finding substring

    if (substr != NULL) printf("Substring found: %s\n", substr);
    else                printf("Substring not found.\n");
    //##############################################################################
    /* convert to upper case */
    /*
        strupr() function is used to convert a string to uppercase.
        It takes a single argument: the string to be converted.
        The function modifies the original string and returns a pointer to the modified string.
    */
    char str3[] = "hello world";
    char *upper_str = strupr(str3); //converting to upper case
    printf("Uppercase string: %s\n", upper_str);
    //##############################################################################
    /* convert to lower case */
    /*
        strlwr() function is used to convert a string to lowercase.
        It takes a single argument: the string to be converted.
        The function modifies the original string and returns a pointer to the modified string.
    */
    char str4[] = "HELLO WORLD";
    char *lower_str = strlwr(str4); //converting to lower case
    printf("Lowercase string: %s\n", lower_str);
    //##############################################################################

    // End of the program

    return 0;
}

void print_message(const char *message) {
    printf("%s\n", message);
}