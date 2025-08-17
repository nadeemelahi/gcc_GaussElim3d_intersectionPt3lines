
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>
#include <stdlib.h> // exit()


void swapRows ( float mat [ 3 ] [ 4 ] , int idx1 , int idx2 ) ;
void print3x4mat ( float mat[ 3 ] [ 4 ] ) ;

int checkForZeros_x2 ( float mat[ 3 ] [ 4 ] ) {

	int rowIdx , zeros = 0 ; 

	for ( rowIdx = 1 ; rowIdx < 3 ; rowIdx ++ ) {

		if ( mat [ rowIdx ] [ 1 ] == 0 ) zeros ++ ;
	}

	if ( zeros ) {

		// 1 , 2 
		printf ( "checkForZeros_x2() zeros count: %d \n" , zeros ) ;
		printf ( "Before row swap\n" );
		print3x4mat ( mat ) ;

		if ( zeros == 2 ) {
			// bad data
			printf("\n Bad data - no solution - all row 1 & 2 have zero for x2 \n");
			exit( EXIT_FAILURE ) ;

		} else  {
			// zeros == 1

			// will be a problem for Gauss Elimin if it is in the first 1 instead of 2 
			if ( mat [ 1 ] [ 1 ] == 0 ) 

				swapRows ( mat , 1 , 2 ) ;

		} 

		printf ( "After row swap\n" );
		print3x4mat ( mat ) ;
	}

}
