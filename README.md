To compile nargv as a standalone testbed, define `NARGVTEST` at compilation.

`gcc -DNARGVTEST -o argvt nargv.c`

You may want to run the command with "rlwrap" to get readline history support.
IN the test app, enter your command string(s) you wish parsed into vectors.

To use nargv in your program `#include "nargv.h"`. Compile and link to `nargv.o`.

NARGV 2.0 Supports:

 - **String Concatenation**: "This "is" a single"' argument.'
 - **Escaped Double Quotes in Quoted String**: "He \"was\" a fine man"
 - **Backslashes in Quoted Literals**: 'this ends in backslash\'
 - **Bare escaped quotes**: \'"ello world! Starts with an apostrophe"
 - **Unquoted Space, Tab, Newline as delimiters**
 - **Alternate Quote Symbol Embedding**: "Don't start a new quote!"
 - **Backslash Escapes**: "Escape This backslash \\\\"
 - **Null Arguments**: empty quoted parameters `''` or `""`
 - **Syntax Checking**: Detects unpaired quotations with respect to backslash escapes.
 - **Full Featured Error Reporter**: Print diagnostics about last parse/init error.
 - **Configurable internal field seperator**
 - **100% dynamic memory allocation using calloc**

<hr>
**Note**: Backslashes that are not escaping a single/double quote or field separator are left to the caller for processing. No environment variables are expanded. The purpose of nargv is simply to parse a shell style string into a collection of arguments.

