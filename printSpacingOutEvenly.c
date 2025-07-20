
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>

void printBySpaceCnt ( int space ) ;

void printSpacingOutEvently ( float num ) {

	int space = 0;

	// for spacing it out evenly 
	if ( num < 10 ) {

		space += 4;

	} else if ( num < 100 ) {

		space += 3;

	} else if ( num < 1000 ) {

		space += 2;


	} else if ( num < 10000 ) {

		space += 1;



	} 

	printBySpaceCnt ( space ) ;

	if ( num < 0 ) {
		// it will have a space for negative "-1"
	} else {
		printf(" ");
	}

	printf ( "%0.2f " , num ) ;
}
