
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>
#include <stdlib.h> // exit()


void swapRows ( float mat [ 3 ] [ 4 ] , int idx1 , int idx2 ) ;
void print3x4mat ( float mat[ 3 ] [ 4 ] ) ;

void checkForZeros_x1 ( float mat[ 3 ] [ 4 ] ) {

	int rowIdx , zeros = 0 ; 

	for ( rowIdx = 0 ; rowIdx < 3 ; rowIdx ++ ) {

		if ( mat [ rowIdx ] [ 0 ] == 0 ) zeros ++ ;
	}

	if ( zeros ) {

		// 1 , 2 , 3
		printf ( "checkForZeros_x1() zeros count: %d \n" , zeros ) ;
		printf ( "Before row swap\n" );
		print3x4mat ( mat ) ;

		if ( zeros == 3 ) {
			// bad data
			printf("\n Very strange - all rows have zero for x1 \n");
			exit( EXIT_FAILURE ) ;

		} else if ( zeros == 2 ) {
			// two zeros found, rare but possible
			// will be a problem for Gauss Elimin if it is in the first row
			if ( mat [ 0 ] [ 0 ] == 0 ) {

				// there is another row with zero in x1 
				if ( mat [ 1 ] [ 0 ] == 0 ) {

					// so then swap row 0 with row 2
					swapRows ( mat , 0 , 2 ) ;

				} else {

					// so then swap row 0 with row 1
					swapRows ( mat , 0 , 1 ) ;
				}

			}

		} else {
			// zeros == 1

			// will be a problem for Gauss Elimin if it is in the first row
			if ( mat [ 0 ] [ 0 ] == 0 ) 
				swapRows ( mat , 0 , 1 ) ;
		}

		printf ( "After row swap\n" );
		print3x4mat ( mat ) ;
	}

}
