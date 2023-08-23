#include <stdio.h>

void writeText(char *text, char *filename) {
  FILE *fptr;
  fptr = fopen(filename, "w");
  fprintf(fptr, "%s", text);
  fclose(fptr);
}
int main() {
  writeText("helloooo", "bruh.txt");
  return 0;
}
