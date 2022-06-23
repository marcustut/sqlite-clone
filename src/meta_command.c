#include "meta_command.h"

#include <stdlib.h>
#include <string.h>

// do_meta_command takes the input and execute recognized commands.
MetaCommandResult do_meta_command(InputBuffer *input_buffer) {
  if (strcmp(input_buffer->buffer, ".exit") == 0) {
    exit(EXIT_SUCCESS);
  } else {
    return META_COMMAND_UNRECOGNIZED_COMMAND;
  }
}