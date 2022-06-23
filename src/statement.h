#pragma once

// StatementType represents various type of SQL statements that the parser recognizes.
typedef enum { STATEMENT_INSERT, STATEMENT_SELECT } StatementType;

// Statement is used to describe the properties of a statement.
typedef struct {
  StatementType type;
} Statement;

void execute_statement(Statement *statement);