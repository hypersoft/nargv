#include <stddef.h>

typedef struct NARGV {
    char **argv, *data, *error_message;
    int argc, data_length, error_index, error_code;
} NARGV;

void nargv_free(NARGV* props);
void nargv_ifs(char *nifs);
NARGV *nargv_parse(char *input);
