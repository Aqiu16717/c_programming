#include <stdio.h>

#define AQ_DEBUG 1
#define AQ_PRINT_TAG
#define AQ_LOG(...) \
    do { if (AQ_DEBUG) fprintf(stderr, AQ_PRINT_TAG __VA_ARGS__); } while (0)

