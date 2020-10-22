import 'dart:io';

void main() {
  int n;
  n = int.parse(stdin.readLineSync());
  // leap year if perfectly visible by 400
  if (n % 400 == 0)
    print("$n is a leap year");
  // not a leap year if visible by 100
  // but not divisible by 400
  else if (n % 100 == 0)
    print("$n is not a leap year");
  // leap year if not divisible by 100
  // but divisible by 4
  else if (n % 4 == 0)
    print("$n is a leap year");
  // all other years are not leap year
  else
    print("$n is not a leap year");
}
