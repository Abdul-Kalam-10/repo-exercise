#include <stdio.h>
//testing//
int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}
//just checking//
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
