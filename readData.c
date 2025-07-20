
/*
 * Date: july 19, 2025, 11:45pm
 * Author: Ned (Nadeem Elahi)
 * email: nad@3deem.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float convertLine2float ( char *num ) {

	printf("convertLine2float: %s \n", num);
	printf("len: %d \n", strlen(num));

	int idx , jdx , len ;
	char tmp[10];

	jdx = 0;

	len = strlen ( num ) ;

	for ( idx = 0 ; idx < len ; idx ++ ) {

		if ( num[idx] == ' ' ) { 
			printf("space\n");
			continue;
		}


		tmp [ jdx ] = num[ idx ] ;
	}

	printf("tmp: %s\n", tmp ) ;
}

int readData( char *fileName , float data [3][4] ) {

	FILE *file = fopen( fileName , "r" ) ;

	if ( file == NULL ) { 
		fprintf(stderr,"Error: Unable to open file: %s \n", fileName);
		return 1 ;
	}



	int maxLnSize = 50 , maxLines = 3 ;

	char line[maxLnSize] ; 
	char linesBuf[maxLines][maxLnSize] ;
	char *lines[maxLines] ; // pointer to each line in linesBuf

	char *ln;
	int minLnCnt = 10 // 1,1,1,1 cnt is 10
		, lnCnt = 0 ;

	//printf("\n");

	while(1){

		ln = fgets( line , maxLnSize , file ) ;
		if(ln == NULL) break;

		if ( strlen(ln) < minLnCnt ) continue;

		//printf(" %s ", ln );

		lines [ lnCnt ] = linesBuf [ lnCnt ] ;
		strcpy ( lines [ lnCnt ] , ln ) ;
		

		lnCnt++ ;
	}

	
	/*
	printf("\n");

	for( lnCnt = 0 ; lnCnt < maxLines ; lnCnt ++){

		fprintf(stdout, "ln %d: %s\n", lnCnt, lines[ lnCnt ] );
		//fprintf(stdout, "lnBuf %d: %s\n" , lnCnt , linesBuf[ lnCnt ]);

	}
	*/


	
	
	// we will need to convert string pointer to a float
	// can not just cast (float)
	//
	//float tmp;
	//tmp = strtof ( ln , NULL) ; //check
	//tmp = atof ( ln ) ; //check
	//printf("tmp : %f\n", tmp);

	// strtok
	
	int idx , jdx;

	for ( idx = 0 ; idx < 3 ; idx ++ ) {

		ln = strtok( lines[idx] , "," ) ;
		data[idx][0] = atof( ln ) ;
		//printf(" data[%d][0] : %f\n" , idx , data[idx][0] );

		for ( jdx = 1 ; jdx < 4 ; jdx ++ ) {

			ln = strtok( NULL , "," ) ;
			data[idx][jdx] = atof( ln ) ;
			//printf("data[%d][%d] : %f\n" , idx , jdx , data[idx][jdx] );

		}
	}

	// while ( ln != NULL ) { ln = strtok(NULL, ","); }


	return 0;
}



