// EXIT_SUCCESS
#if __has_include( <stdlib.h> )
#include <stdlib.h>
#endif

// printf()
#if __has_include( <stdio.h> )
#include <stdio.h>
#endif

/*
 * C program execution starts from
 * built-in main() function
 */
int
main(void)
{
  int first_number = 5;
  int second_number = 7;
  int * first_ptr_to_int = NULL;
  int * second_ptr_to_int = NULL;
  printf("First number: '%d'\n", first_number);
  printf("Second number: '%d'\n", second_number);
  first_ptr_to_int = &first_number;
  second_ptr_to_int = &second_number;
  printf("First number: '%d'\n", first_number);
  printf("Second number: '%d'\n", second_number);
  *first_ptr_to_int += 1;
  *second_ptr_to_int += 3;
  printf("First number: '%d'\n", first_number);
  printf("Second number: '%d'\n", second_number);
  first_ptr_to_int = second_ptr_to_int;
  second_ptr_to_int = first_ptr_to_int;
  printf("First number: '%d'\n", first_number);
  printf("Second number: '%d'\n", second_number);
  first_number = *second_ptr_to_int;
  second_number = first_number - 3;
  printf("First number: '%d'\n", first_number);
  printf("Second number: '%d'\n", second_number);
  return EXIT_SUCCESS;
}
