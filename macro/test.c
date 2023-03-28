#include "macro_log.h"

void test_macro_log();

int main()
{
    test_macro_log();
    return 0;
}

void test_macro_log() {
    AQ_LOG("This is a test.\n");
}
