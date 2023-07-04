#include <string.h>
#include "ex1.h"
#include <stdio.h>

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */
	int cnt = 0;
	while(*str != '\0') {
		if(*str == letter)
			++cnt;
		str++;
	}
	return cnt;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
  	fprintf(stderr, "----------------\n");
	char *ptr = dna_seq->sequence;
	dna_seq->A_count = 0;
	dna_seq->T_count = 0;
	dna_seq->C_count = 0;
	dna_seq->G_count = 0;
	while(*ptr != '\0') {
		fprintf(stderr, "ptr = %c\n", *ptr);
		switch(*ptr) {
				case 'A':
					dna_seq->A_count++;
					break;
				case 'T':
					dna_seq->T_count++;
					break;
				case 'C':
					dna_seq->C_count++;
					break;
				case 'G':
					dna_seq->G_count++;
					break;
				default:
					break;
		}
		ptr++;
	}
	return;
}
