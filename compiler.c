#include "compiler.h"
int compile_file(const char *filename, const char *out_filename, int flags)
{
    struct compile_process *process = compiler_process_create(filename, out_filename, flags);
    if (!process)
    {
        return COMPILER_FAILED_WITH_ERRORS;
    }
    // Perform Lexical Analysis

    // Perform Parsing

    // Perform code generation..

    return COMPILER_FILE_COMPILED_OK;

    return 0;
}