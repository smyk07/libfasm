#include "fasm.h"
#include <stdio.h>

int main(void) {
  printf("Testing libfasm...\n");

  printf("\t%s\n", fasm_get_version());
  printf("PASS: fasm_get_version worked\n");

  printf("\t%s\n", libfasm_get_version());
  printf("PASS: libfasm_get_version worked\n");

  return 0;
}
