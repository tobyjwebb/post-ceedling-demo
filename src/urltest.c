#include <stdio.h>
#include <stdbool.h>

#include "urltest.h"
#include "urltestlib1.h"

#ifndef TEST // Do not generate main() func if running tests
int main() {
	char *url = "http://somesite.org/";

	printf("url (before): %s\n", url);

	bool err = convertToHTTPS(&url);
	if (err) {
		printf("Error converting to https\n");
		return 1;
	}

	printf("url (after):  %s\n", url);

	return 0;
}
#endif // TEST

// convertToHTTPS just calls http2HTTPS to convert an http url to a https url
bool convertToHTTPS(char **url) {
	return http2HTTPS(url);
}
