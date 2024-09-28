#include <stdio.h>
void NiyarShinjOdevaem(int);
void NiyarShinjSnimaem(int n) {
  if (n == 2) printf(" Removing the rings 1, 2.");
  else if (n == 1) printf(" Removing the ring 1.");
  else {
    NiyarShinjSnimaem(n - 2);
    printf("\nRemoving the ring %d.", n);
    NiyarShinjOdevaem(n - 2);
    NiyarShinjSnimaem(n - 1);
  }
}
void NiyarShinjOdevaem(int n) {
  if (n == 2) printf(" Putting on the rings 1, 2.");
  else if (n == 1) printf(" Putting on the ring 1.");
  else {
    NiyarShinjOdevaem(n - 1);
    NiyarShinjSnimaem(n - 2);
    printf("\nPutting on the ring %d.", n);
    NiyarShinjOdevaem(n - 2);
  }
}
int main() {
  NiyarShinjSnimaem(8); // may be 12 or else
  return 0;
}
