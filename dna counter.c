#include <stdio.h>
#include <string.h>

int main() {
    char dna[1000];
    int a = 0, t = 0, g = 0, c = 0, len, i;

    printf("Enter DNA Sequence: ");
    scanf("%s", dna);

    len = strlen(dna);

    for(i = 0; i < len; i++) {
        switch(dna[i]) {
            case 'A': case 'a': a++; break;
            case 'T': case 't': t++; break;
            case 'G': case 'g': g++; break;
            case 'C': case 'c': c++; break;
        }
    }

    float gc = ((float)(g + c) / len) * 100;

    printf("Total Length: %d\nA: %d\nT: %d\nG: %d\nC: %d\n", len, a, t, g, c);
    printf("GC Content: %.2f%%\n", gc);

    return 0;
}
