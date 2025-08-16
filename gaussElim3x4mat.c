
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>

void normalize_x1 ( float mat[ 3 ] [ 4 ] ) ;
void subtract_x1 ( float mat[ 3 ] [ 4 ] ) ;
void printBySpaceCnt ( int spaceCnt ) ;
void printSpacingOutEvently ( float num ) ;
void print3x4mat ( float mat[ 3 ] [ 4 ] ) ;
void backSubSolve( float mat [ 3 ] [ 4 ] ) ;

void gaussElim3x4mat( float mat[3][4] ) {
	
	print3x4mat ( mat ) ;

	printf("\nnormalize_x1");
	normalize_x1 ( mat ) ;
	print3x4mat ( mat ) ;

	printf("\nsubtract_x1");
	subtract_x1 ( mat ) ;
	print3x4mat ( mat ) ;

	// TODO
	printf("\nsubtract_x2 - TODO");
	//subtract_x1 ( mat ) ;
	print3x4mat ( mat ) ;


	printf("\nbackSubSolve\n");
	backSubSolve( mat ) ;

}


