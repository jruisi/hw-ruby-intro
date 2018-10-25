/**
	@file drawing.c
	@author John Ruisi (jruisi)
	A program that creates drawings from files of different graphical
	models that is input by the user.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "model.h"
#include "scene.h"

/**
	The main function reads in the user input and decides what command the
	user is trying to run. The main function then sends that data to scene.c and model.c to handle the commands.
 */
int main() {

    int count = 1;

    printf("cmd %d> ", count);
	
	Scene *s = makeScene();

    char cmd[21];
    while (scanf("%s", cmd) != EOF) {

		//Gets the load command
        if (strcmp(cmd, "load") == 0) {
            
            char name[21], file[21];
            scanf("%s %s", name, file);
            
			//load
            
            printf("cmd %d> ", ++count);

		//Gets the save command
        } else if (strcmp(cmd, "save") == 0) {
            
            char file[21];
            scanf("%s", file);
            
			//save
            
            printf("cmd %d> ", ++count);

        //Gets the delete command
		} else if (strcmp(cmd, "delete") == 0) {

            char name[21];
            scanf("%s", name);
            
			applyToScene(s, name, );

            printf("cmd %d> ", ++count);

        //Gets the list command
		} else if (strcmp(cmd, "list") == 0) {
            
            //list

            printf("cmd %d> ", ++count);

        //Gets the translate command
		} else if (strcmp(cmd, "translate") == 0) {

            char name[21];
            double x, y;
            scanf("%s %lf %lf", name, &x, &y);
            
			applyToScene(s, name, );

            printf("cmd %d> ", ++count);

        //Gets the scale command
		} else if (strcmp(cmd, "scale") == 0) {
            
            char name[21];
            double val;
            scanf("%s %lf", name, &val);
            
			applyToScene(s, name, );

            printf("cmd %d> ", ++count);

		//Gets the rotate command
        } else if (strcmp(cmd, "rotate") == 0) {

            char name[21];
            double val;
            scanf("%s %lf", name, &val);
            
			applyToScene(s, name, );

            printf("cmd %d> ", ++count);

		//Gets the quit command
        } else if (strcmp(cmd, "quit") == 0) {

			freeScene(s);
            exit(0);

		//Invalid command
        } else {
            fprintf(stderr, "Command %d invalid\n", count);
            printf("cmd %d> ", ++count);
        }
    
    }
    exit(0);
}
