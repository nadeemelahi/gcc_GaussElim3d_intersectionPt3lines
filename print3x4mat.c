
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>
void printSpacingOutEvently ( float num ) ;

void print3x4mat ( float mat[ 3 ] [ 4 ] ) {

	printf("\n");

	int rowIdx, colIdx ;

	printf(" +---                                               ---+\n");
	printf(" |                                        |            |\n");

	for ( rowIdx = 0 ; rowIdx < 3 ; rowIdx ++ ) {

		printf(" |");
		for ( colIdx = 0 ; colIdx < 3 ; colIdx ++ ) {

			printSpacingOutEvently ( mat [ rowIdx ] [ colIdx ] ) ;
			printf(" , " );

		}

		printf( " | " );
		printSpacingOutEvently ( mat [ rowIdx ] [ colIdx ] ) ;
		printf( " | \n" );
		printf(" |                                        |            |\n");

	}
	printf(" +---                                               ---+\n");
}
