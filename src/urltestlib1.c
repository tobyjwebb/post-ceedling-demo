#include <string.h>
#include <stdlib.h>

#include "urltestlib1.h"
#include "urltestlib2.h"

// http2HTTPS converts an http url to an https url. Returns true on error, false otherwise.
bool http2HTTPS(char **url) {
	if (!url || !*url || !validateURL(*url)) {
		return true;
	}

	if (strncmp(*url, HTTPS_PREFIX, HTTPS_PREFIX_LEN) == 0) {
		// Already is https, no need to convert.
		return false;
	}

	size_t len = strlen(*url);

	char *https = (char*)malloc(len+2);
	if (!https) {
		return true;
	}

	strcpy(https, HTTPS_PREFIX);
	strcpy(https+HTTPS_PREFIX_LEN, *url+HTTP_PREFIX_LEN);

	*url = https;

	return false;
}
