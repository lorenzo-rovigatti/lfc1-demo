#include <stdio.h>

int main() {
	FILE *out = fopen("output.dat", "w");
	fprintf(out, "ciao mondo\n");
	fclose(out);
}
