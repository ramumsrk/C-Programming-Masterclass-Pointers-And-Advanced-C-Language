// EXIT_SUCCESS
#if __has_include( <stdlib.h> )
#include <stdlib.h>
#endif

// scanf() and printf()
#if __has_include( <stdio.h> )
#include <stdio.h>
#endif

/**
 * Forward declaration using function prototype
 * @param first_number First number passed by value
 * @param second_number Second number passed by value
 * @returns Maximum of first and second numbers
 */
int
maximum(
    int first_number,
    int second_number
);

/**
 * Forward declaration using function prototype
 * @param first_number First number passed by value
 * @param second_number Second number passed by value
 * @returns Maximum of first and second numbers
 */
int
maximum(
    int first_number,
    int second_number
)
{
  return (first_number > second_number) ? first_number : second_number;
}

/**
 * Forward declaration using function prototype
 * @param first_number First number passed by value
 * @param second_number Second number passed by value
 * @returns Minimum of first and second numbers
 */
int
minimum(
    int first_number,
    int second_number
);

/**
 * Forward declaration using function prototype
 * @param first_number First number passed by value
 * @param second_number Second number passed by value
 * @returns Minimum of first and second numbers
 */
int
minimum(
    int first_number,
    int second_number
)
{
  return (first_number < second_number) ? first_number : second_number;
}

/*
 * C program execution starts
 * from built-in main() function
 */
int
main(void)
{
  printf("Enter first number: ");
  int first_number;
  scanf("%d", &first_number);
  printf("Enter second number: ");
  int second_number;
  scanf("%d", &second_number);
  int maximum_number = maximum(first_number, second_number);
  printf("Maximum between '%d' and '%d' is '%d'\n", first_number, second_number, maximum_number);
  int minimum_number = minimum(first_number, second_number);
  printf("Minimum between '%d' and '%d' is '%d'\n", first_number, second_number, minimum_number);
  return EXIT_SUCCESS;
}
