
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>

void backSubSolve( float mat [ 3 ] [ 4 ] ) {

	int row ;
	float tmp1 , tmp2 , x0 , x1 , x2 ;

	// x2 - row2
	row = 2 ;
	x2 = mat[row][3] / mat[row][2] ; 

	// x1 - row1
	row = 1 ;
	tmp2 = mat[row][2] * x2 ;
	x1 = ( mat[row][3] - tmp2 ) / mat[row][1] ;

	// x0 - row0
	row = 0 ;
	tmp2 = mat[row][2] * x2 ;
	tmp1 = mat[row][1] * x1 ;
	x0 = ( mat[row][3] - tmp1 - tmp2 ) / mat[row][0] ;

	printf("Solution: \n") ;
	printf("   x0 = %0.2lf\n", x0) ;
	printf("   x1 = %0.2lf\n", x1) ;
	printf("   x2 = %0.2lf\n", x2) ;

}
