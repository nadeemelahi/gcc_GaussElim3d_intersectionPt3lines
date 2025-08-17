
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

void swapRows ( float mat[ 3 ] [ 4 ] , int idx1 , int idx2 ) {

	int colIdx , lim = 4 ;
	float rowTmp [ 4 ] ;

	// copy row[idx1][0,1,2,3] to rowTmp
	for ( colIdx = 0 ; colIdx < lim ; colIdx ++ ) {

		rowTmp [ colIdx ] = mat [ idx1 ] [ colIdx ] ;
	}	

	// copy row[idx2][0,1,2,3] to row[idx1][0,1,2,3]
	for ( colIdx = 0 ; colIdx < lim ; colIdx ++ ) {

		mat [ idx1 ] [ colIdx ] = mat [ idx2 ] [ colIdx ] ;
	}

	// copy rowTmp[0,1,2,3] to row[idx2][0,1,2,3]
	for ( colIdx = 0 ; colIdx < lim ; colIdx ++ ) {

		mat [ idx2 ] [ colIdx ] = rowTmp [ colIdx ] ;
	}

}
