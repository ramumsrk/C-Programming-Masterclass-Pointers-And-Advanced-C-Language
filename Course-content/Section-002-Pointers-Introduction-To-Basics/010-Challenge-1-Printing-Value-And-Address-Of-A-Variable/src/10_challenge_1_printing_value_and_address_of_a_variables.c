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
  int first_grade = 80;
  int second_grade = 100;
  printf("Value of identifier 'first_grade' is '%d'\n",first_grade);
  printf("Address of identifier 'first_grade' is '%p'\n",(void *)&first_grade);
  printf("Value of identifier 'second_grade' is '%d'\n",second_grade);
  printf("Address of identifier 'second_grade' is '%p'\n",(void *)&second_grade);
  return EXIT_SUCCESS;
}
