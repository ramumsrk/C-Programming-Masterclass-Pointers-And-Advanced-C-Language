// EXIT_SUCCESS
#if __has_include( <stdlib.h> )
#include <stdlib.h>
#endif

// printf()
#if __has_include( <stdio.h> )
#include <stdio.h>
#endif
/*
 * C program execution starts
 * from built-in main() function
 */
int
main(void)
{
  int a = 5;
  int * ptr_to_int = &a;
  printf("Value stored in identifier 'a' is: '%d'\n", *ptr_to_int);
  printf("Address of identifier 'a' is: '%p'\n", (void *)ptr_to_int);
  return EXIT_SUCCESS;
}
