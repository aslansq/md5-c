#include <stdio.h>
#include "md5.h"

int main(void)
{
	MD5Context ctx;
	uint8_t input[] = "Hello, World!";
	md5Calc(&ctx, input, sizeof(input) - 1);
	printf("MD5 Digest: ");
	for (long unsigned int i = 0; i < sizeof(ctx.digest); i++) {
		printf("%02x", ctx.digest[i]);
	}
	printf("\n");
	return 0;
}