// Just a simple program to get uts_name_release
// By : Rissu

#include <stdio.h>
#include "out/include/generated/utsrelease.h"

char uts_release[] = UTS_RELEASE;

int main(void) {
	if (uts_release)
		printf("%s\n", uts_release);

	return 0;
}
