

/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

void subtract_x2 ( float mat[ 3 ] [ 4 ] ) {

	int colIdx ;

	// x1 should already be zero for both rows 1 & 2
	// so start at colIdx = 1
	for ( colIdx = 1 ; colIdx < 4 ; colIdx ++ ) {

		mat [ 2 ] [ colIdx ] -= mat [ 1 ] [ colIdx ] ;

	}

}
