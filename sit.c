#include <stdio.h>
#include <string.h>

struct Person {
  char name[64];
};
int main() {
  struct Person plist[100];
  struct Person *pX = plist;

  for(int i = 0; i < 100; i++) { 
    strncpy(pX->name, "bruh", 4);

    pX+=1;
  }

  pX = plist;
  for(int i = 0; i < 100; i++) {
    printf("%s %d", pX->name, 0);
    pX+=1;
  }
  return 0;
}
