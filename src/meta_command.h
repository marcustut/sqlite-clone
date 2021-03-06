#pragma once

#include "./input_buffer.h"

// MetaCommandResult represents the possible outcomes of processing a meta command.
typedef enum { META_COMMAND_SUCCESS, META_COMMAND_UNRECOGNIZED_COMMAND } MetaCommandResult;

MetaCommandResult do_meta_command(InputBuffer *input_buffer);