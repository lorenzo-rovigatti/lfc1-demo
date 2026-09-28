#include <stdio.h>

int main() {
	FILE *out = fopen("output.dat", "w");
	fprintf(out, "ciao mondo\n");

	int i;
	for(i = 0; i < 10; i++) {
		fprintf(out, "%d\n", i);
	}

	fclose(out);
}
