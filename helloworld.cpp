#include <stdio.h>

int main(int argc, const char* argv[]) {
  printf("Hello World: argc=%d\n", argc);
  for (int i = 0; i < argc; i++) {
    printf("argv[%d]=%s\n", i, argv[i]);
  }
}
