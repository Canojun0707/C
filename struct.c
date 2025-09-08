
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    
  /* Struct basic */
  //##############################################################################
    struct Person person1; // declare a variable of type struct Person

    // assign values to the fields
    snprintf(person1.name, sizeof(person1.name), "Alice");  // snprintf to avoid overflow
    person1.age = 30;

    // print the values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
  //##############################################################################

  // declare and initialize a struct variable
  //##############################################################################
  struct Person person2 = {"Bob", 25}; // declare and initialize

    // print the values
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
  //##############################################################################

  /* Struct with pointer */
  //##############################################################################
    struct Person *ptr; // declare a pointer to struct Person
    ptr = &person1;    // ptr -> person1 

    // access struct members using the pointer
    printf("Name via pointer: %s\n", ptr->name); // ptr -> person1 -> name = "Alice"
    printf("Age via pointer: %d\n", ptr->age);   // ptr -> person1 -> age = 30
  //##############################################################################

  /* struct array */
  //##############################################################################
    struct Person people[2];    // people[0] = person1, people[1] = person2

    // assign values to the first element
    snprintf(people[0].name, sizeof(people[0].name), "Charlie");
    people[0].age = 28;

    // assign values to the second element
    snprintf(people[1].name, sizeof(people[1].name), "Diana");
    people[1].age = 22;

    // print the values
    for (int i = 0; i < 2; i++) {
        printf("Person %d - Name: %s, Age: %d\n", i + 1, people[i].name, people[i].age);
    }
  //##############################################################################

  /* Struct of Struct*/
  //##############################################################################
    struct Date {
        int day;
        int month;
        int year;
    };

    struct Employee {
        char name[50];
        struct Date dob; // Date of Birth
    };

    struct Employee emp; // declare a variable of type struct Employee

    // assign values to the fields
    snprintf(emp.name, sizeof(emp.name), "Eve");
    emp.dob.day = 15;
    emp.dob.month = 6;
    emp.dob.year = 1990;

    // print the values
    printf("Employee Name: %s\n", emp.name);
    printf("Date of Birth: %02d/%02d/%d\n", emp.dob.day, emp.dob.month, emp.dob.year);
  //##############################################################################
  
  /* Typedef */
  //##############################################################################
    typedef struct {
        char title[100];
        char author[50];
        int pages;
    } Book; // define a new type 'Book'

    Book book1; // declare a variable of type Book

    // assign values to the fields
    snprintf(book1.title, sizeof(book1.title), "C Programming Language");
    snprintf(book1.author, sizeof(book1.author), "Kernighan and Ritchie");
    book1.pages = 272;

    // print the values
    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Pages: %d\n", book1.pages);
  //##############################################################################

  /* end of main */
  
  return 0;
}