#include <stdio.h>
#include <stdlib.h>

typedef struct Field {
  char *key;
  char *value;
} Field;

typedef struct Json {
  Field *fields[10];
} Json;


int main() {
  printf("Hello world!\n");
  Field username;
  username.key = "username";
  username.value = "mariobro";

  Field password;
  password.key = "password";
  password.value = "riceball12!";

  Json json;
  json.fields[0] = &username;
  json.fields[1] = &password;

  printf("%s %s", json.fields[0]->key, json.fields[0]->value); 
  
  printf("%s %s", json.fields[1]->key, json.fields[1]->value); 
  return 0;
}
