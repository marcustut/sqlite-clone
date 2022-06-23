#pragma once

#include <sys/types.h>

// InputBuffer is used for capturing user input.
typedef struct {
  char *buffer;
  size_t buffer_length;
  ssize_t input_length;
} InputBuffer;

// This function is used to initialize an instance of InputBuffer.
InputBuffer *new_input_buffer();