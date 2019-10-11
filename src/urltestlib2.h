#ifndef BASIC_URL_TEST_LIB2
#define BASIC_URL_TEST_LIB2

#include <stdbool.h>

#define HTTP_PREFIX "http://"
#define HTTP_PREFIX_LEN strlen(HTTP_PREFIX)
#define HTTPS_PREFIX "https://"
#define HTTPS_PREFIX_LEN strlen(HTTPS_PREFIX)

bool validateURL(const char *url);

#endif // BASIC_URL_TEST_LIB2
