#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
#include <reverse.h>

int is_emirp(mpz_t z);
void emirp(mpz_t n, unsigned long emirpNumber);

int is_emirp(mpz_t y)
{
	mpz_t r;									// Declares a gmp number called r
	mpz_init(r);								// A gmp function call to initilize r and set it to 0
	reversen(y, r);								// Function call to set the value or r to the reverse value of n	
	if ((mpz_cmp(y, r)) && 						// Check for emirp by emirp definition
		(mpz_probab_prime_p(y, 5)) && 
		(mpz_probab_prime_p(r, 5))) {
		return 1;
	}
	return 0;
}

void emirp(mpz_t n, unsigned long emirpNumber)
{
	// Set up the loop invariant
	mpz_init(n);								// A gmp function call to initialize n and set it to 0
	int emirpsCounted = 0;						// The number of emirps the program has counted so far
	int m = is_emirp(n);						// This is required for the loop invariant

	// Run the loop 
	while (emirpsCounted != emirpNumber || m != 1) {
		mpz_add_ui(n, n, 1);					// Add unsigned long value '1' to mpz_t 'n'	
		m = is_emirp(n);
		if (m == 1) {
			emirpsCounted += 1;			
		}
	}
}

int main(void) 
{
	int emirpNumber = 0;						// Get user input to get what number emirp is desired
	printf("Enter a number: ");
	if (!scanf("%d", &emirpNumber)) {
		printf("Invalid input\n");
		exit(1);
	}

	mpz_t n;									// Declares a gmp number called n
	mpz_init(n);								// A gmp function call to initialize n and set it to 0	
	emirp(n, emirpNumber);						// Set n to the value of the emirpNumber'th emirp
	gmp_printf("%Zd\n", n);						// Prints the emirpNumber'th emirp

	return 0;
}

