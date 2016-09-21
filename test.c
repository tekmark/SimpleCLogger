#include <stdio.h>

#include "simpleclogger.h"

int main (int argc, const char *argv[]) {
    logger_set_lvl_debug();
    logger_print_config();
    logger_debug("debug");
    logger_info("info");
    logger_warn("warn");
    logger_error("error");

    const char *logfilename = "log";
    printf("write to file %s\n", logfilename);
    logger_set_log_file(logfilename);
    logger_debug("debug");
    logger_info("info");
    logger_warn("warn");
    logger_error("error");
    return 0;
}
