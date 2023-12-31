#include <string.h>
#include <stdlib.h>
#include <stdio.h>


struct Todo {
    int priority;
    char *content;
};

void createTodo(struct Todo *t, int priority, char *content) {
    t->priority = priority;
    t->content = malloc(strlen(content) + 1);

    if (t->content != NULL) {
        strcpy(t->content, content);
    } else {
        printf("Memory allocation failed\n");
    }
};
void printTodo(struct Todo *t) {
    printf("%s %d\n", t-> content, t->priority);
};

void addTodo(struct Todo *todos[], struct Todo *t, int *n) {
    todos[*n] = t;
    *n = *n + 1;
};
int main() {
    struct Todo t1;
    struct Todo t2;

    struct Todo *todos[100];
    int n = 0;
    char name[] = "bruh";
    // dynamic memory store in the stack

    createTodo(&t1, 1, name);
    createTodo(&t2, 2, "breh");

    addTodo(todos, &t1, &n);
    addTodo(todos, &t2, &n);
    printTodo(todos[0]);

    for(int i = 0; i < n; i++) {
        free(todos[i]->content);
    }
    return 0;
}

