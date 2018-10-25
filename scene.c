/**
	@file scene.c
	@author John Ruisi (jruisi)
	A program that creates Scene objects and transforms them
	based on user input.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "model.h"

/**
	Initializes a scene
	@return s the initialized scene
*/
Scene *makeScene() {
	Scene *s = (Scene *)malloc(sizeof(Scene));
	s->mCount = 0;
	s->mCap = 100;
	s->mList = (Model**)malloc(s->mCap * sizeof(Model*));
	return s;
}

/**
	Frees the given scene from memory
	@param s the scene to be freed
 */
void freeScene( Scene *s ) {
	free(s);
}

/**
	Checks to see if a given model name is present in the scene. If it
	is, apply the given transformation to the model.
 */
bool applyToScene( Scene *s, char const *name, void (*f)( double pt[ 2 ], double a, double b ), double a, double b ) {

	for (int i = 0; i < 100; i++) {
		Model *m = s->mList[i];
		char *one = name;
		char *two = m->name;
		
		if (strcmp(one, two) == 0) {
			//apply to model
			return true;
		}
	}
	return false;
}
