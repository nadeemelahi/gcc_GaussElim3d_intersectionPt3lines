
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

void normalize_x1 ( float mat[ 3 ] [ 4 ] ) {

	float coeff_00 = mat [ 0 ] [ 0 ] ;
	float coeff_perRow ;
	float rowFactor ;

	int rowIdx , colIdx ;

	// mult by a00/aij

	for ( rowIdx = 1 ; rowIdx < 3 ; rowIdx ++ ) {

		coeff_perRow = mat [ rowIdx ] [ 0 ] ;
		rowFactor = coeff_00 / coeff_perRow ;
		//printf( " rowFactor : %0.2lf \n" , rowFactor ) ;

		for ( colIdx = 0 ; colIdx < 4 ; colIdx ++ ) {

			if ( mat [ rowIdx ] [ colIdx ] ) { // if not zero
				mat [ rowIdx ] [ colIdx ] *= coeff_00 / coeff_perRow ;
			}

		}
	}
}
