#include <stdio.h>

// Calculate the sum of all digits in a number
int sum(int n) {
  //establish variables
  int digit, sum = 0;
    
  //while the number given is greater than 0, determine the sum of all of the digits
  while (n > 0) {
    digit = n % 10; //establish current digit
    sum += digit; //sum = sum + digit
    n /= 10; //move to next digit (number given = number given / 10)
  }
  return sum;
}

// Find the maximum digit in a number
int max(int n) {
  //establish variables
  int digit, max = 0;

  //while the number given is greater than 0, determine the largest digit
  while (n > 0) {
    digit = n % 10; //establish current digit

    //if digit is greater than the current maximum number, set digit as new max
    if (digit > max) {
      max = digit;
    }
    n /= 10; //move to next digit (number given = number given / 10)
  }
  return max;
}

// Find the minimum digit in a number
int min(int n) {
  //establish variables
  int digit, min = 9;

  //while the number given is greater than 0, determine the smallest digit
  while (n > 0) {
    digit = n % 10; //establish current digit

    //if digit is less than the current minimum number, set digit as new min
    if (digit < min) {
      min = digit;
    }
    n /= 10; // move to next digit (number given = number given / 10)
  }
  return min;
}

// Main Function
int main() {
  int num, s, m, n; //establish int variables
  printf("Enter a positive integer: "); //Display information
  scanf("%d", &num); //Take input from the user

  //establish the associated variables with the associated functions
  s = sum(num);
  m = max(num);
  n = min(num);

  //output the result of each function
  printf("Sum of digits: %d\n", s);
  printf("Maximum digit: %d\n", m);
  printf("Minimum digit: %d\n", n);

  return 0;
}
 