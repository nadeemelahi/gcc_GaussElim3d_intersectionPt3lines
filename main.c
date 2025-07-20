
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>

void gaussElim3x4mat( float mat[3][4] ) ;
int readData( char *argv_1 , float mat[3][4] );
void print3x4mat ( float mat[3][4] );

int main ( int argc , char *argv[] ) {

	if ( argc < 2 ) {
		
		printf("Error: missing data file , exiting.\n");
		printf("Example Usage: a.out data.txt\n");

		return 1;
	}

	float mat3x4 [ 3 ] [ 4 ] ;

	int ret = readData( argv[1] , mat3x4 ) ;

	if ( ret ) {
		printf("Error: data is not correctly formatted\n");
		printf("Example file ( 3 lines ) : \n");
		printf(" 1 , 2 , 3 , 4 \n");
		printf(" 2 , 3 , 4 , 5 \n");
		printf(" 6 , 5 , 4 , 3 \n");

		return 1;
	}

	//print3x4mat ( mat3x4 );

	gaussElim3x4mat( mat3x4 ) ;

	return 0 ;
}


