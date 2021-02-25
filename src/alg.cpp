// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  int t;
  if (b == 0)
    return a;

  return gcd(b, a % b);
}
