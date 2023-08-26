#include <stdio.h>
#include <stdlib.h>

typedef struct Field {
  char *key;
  char *value;
} Field;

typedef struct Json {
  Field **fields;
} Json;

char *jsonify(Json *json, int size) {
  char *buffer = malloc(sizeof(char)*size);
  char *field1 = json->fields[0]->key;
  char *key1 = json->fields[0]->value;

  char *field2 = json->fields[1]->key;
  char *key2 = json->fields[1]->value;
  printf("\n{\n\t%s: %s,\n\t%s: %s\n}", field1, key1, field2, key2);

  snprintf(buffer, 1024, "\n{\n\t%s: %s,\n\t%s: %s\n}", field1, key1, field2, key2);
  return buffer;
}
int main() {
  Field username;
  username.key = "username";
  username.value = "mariobro";

  Field password;
  password.key = "password";
  password.value = "riceball12!";
  
  int field_count = 2;
  Json json;
  json.fields = (Field **)malloc(sizeof(Field *) * field_count);
  json.fields[0] = &username;
  json.fields[1] = &password;

  
  char *res;    
  res = jsonify(&json, 1024);
  printf("%s", res);
  return 0;
}
