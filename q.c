/*!
@file       the name of source file is q.c
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Assignment 1
@date       file created on 07/09/2023
@brief      provide a brief explanation about what this source file does 
            This file contains 2 functions that prints a tree and a animal and call functions 
            draw_tree and draw_animal and execute them.
______________________________________________________________________*/

// prototypes for functions called in function main 
#include <stdio.h> // for printf
void draw_tree(void); 
void draw_animal(void); 

/*!
@brief this function is used to print a tree
@param word - no parameters require
@return nothing is returned only the tree is printed
*//*______________________________________________________________*/

void draw_tree(void){
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("*********\n");
    printf("    #\n");
    printf("    #\n");
    printf("    #\n");
    printf("    #\n");
}
/*!
@brief this function is used to print a tree
@param word - no parameters require
@return nothing is returned only the animal is printed
*//*______________________________________________________________*/

void draw_animal(void){
printf("  /\\     /\\\n");
printf(" /  \\___/  \\\n");
printf("(           )    -------\n");
printf("(   '   '   )   / Hello  \\\n");
printf("(     _     )  <  Junior  |\n");
printf("(           )   \\ Coder! /\n");
printf(" |         |     -------\n");
printf(" |    |    |\n");
printf(" |    |    |\n");
printf("(_____|_____)\n");

}