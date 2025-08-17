
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>

void checkForZeros_x1 ( float mat [ 3 ] [ 4 ] ) ;

void normalize_x1 ( float mat[ 3 ] [ 4 ] ) ;
void subtract_x1 ( float mat[ 3 ] [ 4 ] ) ;

int checkForZeros_x2 ( float mat [ 3 ] [ 4 ] ) ;

void subtract_x2 ( float mat[ 3 ] [ 4 ] ) ;

void printBySpaceCnt ( int spaceCnt ) ;
void printSpacingOutEvently ( float num ) ;
void print3x4mat ( float mat[ 3 ] [ 4 ] ) ;
void backSubSolve( float mat [ 3 ] [ 4 ] ) ;

void gaussElim3x4mat( float mat[3][4] ) {
	
	print3x4mat ( mat ) ;


	printf("\ncheckForZeros_x1");
	checkForZeros_x1 ( mat ) ;


	printf("\nnormalize_x1");
	normalize_x1 ( mat ) ;
	print3x4mat ( mat ) ;


	printf("\nsubtract_x1");
	subtract_x1 ( mat ) ;
	print3x4mat ( mat ) ;

		      
	int check_x2; // 0 or 1 , 1-means just 1 found, in which case we can skip subtract_x2
	check_x2 = checkForZeros_x2 ( mat ) ;

	if ( ! check_x2 ) {
		// if there is already a zero in x2 for the last row, we can skip this
		printf("\nsubtract_x2");
		subtract_x2 ( mat ) ;
		print3x4mat ( mat ) ;
	}


	printf("\nbackSubSolve\n");
	backSubSolve( mat ) ;


}


