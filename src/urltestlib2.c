#include <string.h>
#include "urltestlib2.h"

// validateURL implements a very basic url check. It only checks that it begins with http:// or https:// and has something else after that. Returns true for valid, false for invalid.
bool validateURL(const char *url) {
	if (!url) {
		return false;
	}
	if (strncmp(url, HTTP_PREFIX, HTTP_PREFIX_LEN) == 0 && strlen(url) > HTTP_PREFIX_LEN) {
		return true;
	}
	if (strncmp(url, HTTPS_PREFIX, HTTPS_PREFIX_LEN) == 0 && strlen(url) > HTTPS_PREFIX_LEN) {
		return true;
	}
	return false;
}
