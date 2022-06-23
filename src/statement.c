#include "./statement.h"

#include <stdio.h>

// execute_statement takes a statement and process it.
void execute_statement(Statement *statement) {
  switch (statement->type) {
    case (STATEMENT_INSERT):
      printf("TODO: an insert operation.\n");
      break;
    case (STATEMENT_SELECT):
      printf("TODO: a select operation.\n");
      break;
  }
}