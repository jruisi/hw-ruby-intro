/**
	@file model.c
	@author John Ruisi (jruisi)
	A program that creates Model objects and transforms them
	based on user input.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
	Loads a model from a given file, adding all the points of the
	line segments to the model's point list.
	
	@param fname the file name
	@return m the model loaded
 */
Model *loadModel( char const *fname ) {
	#define START 100
	
	int count = 0;
	int idx = 0
	
    FILE *f = fopen( fname, "r");
	if (!f) {
		fprintf( stderr, "Can't open file");
	}
	
	Model *m = (Model *)malloc(sizeof(Model*));
	m->pList = (double(*)[2])malloc( START * sizeof(m->pList));
	m->fname = fname;
	
	char *str[21];
	for (int i = 0; i < strlen(fname); i++) {
		if (fname[i] = '.') {
			break;
		}
		str[i] = fname[i];
	}
	m->name = str;
	
	double x, y;
	while(fscanf(f, "%lf %lf", &x, &y) != EOF) {
	    double p[2] = {x, y};
		memcpy(pList[idx], &p, sizeof(p));
		idx++;
		count += 2;
	}
	
	m->pCount = count;
	return m;
}

/**
    Creates more space for the program by freeing a model whenever it
	needs to be deleted.
	
	@param m the model to free
 */
void freeModel( Model *m ) {
	free(m);
}

/**
    Called from the applyToScene function, this method applys a specific
	command to a specific function in the scene.
	
	@param m the model to issue the command to
	@param f the function to user
	@param pt the x and y coordinates
	@param a the x coordinate
	@param b the y coordinate
	@param a variable to transform model by
	@param b variable to transform model by
 */
void applyToModel( Model *m, void (*f)( double pt[ 2 ], double a, double b ), double a, double b ) {

}

/**
	Translates a given model a given distance up, right, down, or up.
	
	@param m the model to be translated
	@param x the x distance to be moved
	@param y the y distance to be moved
 */
void translate( Model *m, double x, double y) {
	
}

/**
	Scales a given model by a scale factor
	
	@param m the model to be scaled
	@param scale the scale factor
 */
void scale( Model *m, double scale) {
	
}

/**
    Rotates a given model by a given degree
	
	@param m the model to be rotated
	@param deg the amount of rotation
 */
void rotate( Model *m, double deg) {
	
}


