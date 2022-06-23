#pragma once

#include "./input_buffer.h"
#include "./statement.h"

// PrepareResult represents the possible outcomes of processing a statement.
typedef enum { PREPARE_SUCCESS, PREPARE_UNRECOGNIZED_STATEMENT } PrepareResult;

PrepareResult prepare_statement(InputBuffer *input_buffer, Statement *statement);
