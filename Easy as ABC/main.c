//
//  main.c
//  Easy as ABC
//
//  Created by Christian Michel on 4/13/16.
//  Copyright © 2016 Christian Michel. All rights reserved.
//
#include "load.h"
#include <stdio.h>
int main(){
    
    
    
    char *test;
    int boards=0;
    printf("How many boards do you intend to play?");
    scanf("%d",&boards);
    int i=0;
    //while(i<boards){
        test= loadgrid();
        setGrid(test);
        findSol();
        printf("%s","character at specified location is: ");
        printf("%c\n",returnFinal());
        i++;
   // }
    
    

    
    
}
