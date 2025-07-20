
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

void subtract_x1 ( float mat[ 3 ] [ 4 ] ) {

	int rowIdx , colIdx ;

	// subtract row[0][0] - row[1][0] , row0[0][1] - row1[1][1] , ...
	// subtract row[0][0] - row[2][0] , row0[2][1] - row1[2][1] , ...

	for ( rowIdx = 1 ; rowIdx < 3 ; rowIdx ++ ) {

		for ( colIdx = 0 ; colIdx < 4 ; colIdx ++ ) {


			mat [ rowIdx ] [ colIdx ] -= mat [ 0 ] [ colIdx ] ;

		}
	}

}
