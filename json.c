#include <stdio.h>
#include <stdlib.h>

typedef struct Field {
  char *key;
  char *value;
} Field;

typedef struct Json {
  Field *fields[2];
} Json;

char *jsonify(Json *json, char *buffer) {
  char *field1 = json->fields[0]->key;
  char *key1 = json->fields[0]->value;

  char *field2 = json->fields[1]->key;
  char *key2 = json->fields[1]->value;

  snprintf(buffer, 1024, "\n{\n\t%s: %s,\n\t%s: %s\n}", field1, key1, field2, key2);
  return buffer;
}
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

  char buf[1024];
  char *res;    
  res = jsonify(&json, buf);
  printf("%s", res);
  return 0;
}
