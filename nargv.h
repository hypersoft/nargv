#include <stddef.h>

typedef struct NARGV {
    char **argv, *data, *error_message;
    int argc, data_length, error_index, error_code;
} NARGV;

void nargv_free(NARGV* props);
void nargv_ifs(const char *nifs);
NARGV *nargv_parse(const char *input);
