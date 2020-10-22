import "dart:io";

main() {
  int n, factorial = 1;
  print("Enter a number");
  n = int.parse(stdin.readLineSync());

  for (int i = 1; i <= n; i++) {
    factorial = factorial * i;
  }
  print("Factorial of $num is $factorial");
}
