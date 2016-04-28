#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char grid[4][4];
int number;
int row=0;
int col=0;
char final;;
void setGrid(char *onegrid)
{
    /*grid[0][0]='A';
    grid[0][1]='X';
    grid[0][2] = 'M';
    grid[0][3]= 'M';
    
    grid[1][0]= 'M';
    grid[1][1]='M';
    grid[1][2]='C';
    grid[1][3]='X';
    
    grid[2][0]='C';
    grid[2][1]='M';
    grid[2][2]='X';
    grid[2][3]='M';
    
    grid[3][0]='X';
    grid[3][1]='M';
    grid[3][2]='M';
    grid[3][3]='M';

    

    grid[0][0]='A';
    grid[0][1]='M';
    grid[0][2] = 'M';
    grid[0][3]= 'X';
    
    grid[1][0]= 'M';
    grid[1][1]='M';
    grid[1][2]='X';
    grid[1][3]='M';
    
    grid[2][0]='X';
    grid[2][1]='B';
    grid[2][2]='M';
    grid[2][3]='A';
    
    grid[3][0]='M';
    grid[3][1]='X';
    grid[3][2]='M';
    grid[3][3]='B';
    */
    char *p;
    p = (onegrid);
    
    for(int y=0;y<4;y++){
        for(int x=0;x<4;x++){
            if(*(onegrid+4*x+y)==NULL){
                grid[x][y]='M';
            } else {
            grid[x][y]=(*(onegrid+4*x+y));
            }
        }
    }
    
    
   /* printf("%c",'\n');
    for(int i =0; i<=3;i++) //row
    {
        for(int j=0;j<=3;j++)// col
        {
            printf("%c",grid[i][j]);
            
        }
        printf("%c",'\n');
        
    }*/
    char c=*(onegrid +16);
    number=c-'0';
    //char a = (onegrid+16);
    /*switch(*(onegrid+16))
    {
        case 'a': number = 1;
                  break;
        case 'b': number = 2;
            break;
        case 'c': number = 3;
            break;
        case 'd': number =4;
            break;
        case 'e': number =5;
                break;
        case 'f':number = 6;
            break;
        case 'g':number = 7;
            break;
        case 'h':number = 8;
            break;
        case 'i':number =9;
            break;
        case 'j':number =10;
            break;
        case 'k':number =11;
            break;
        case 'm':number =12;
            break;
        case 'n':number = 13;
            break;
        case 'o':number = 14;
            break;
        case 'p':number = 15;
            break;
        case 'q':number = 16;
            break;
    }*/
    
  

}



bool checkOneRow()
{
    char letters[10];
    bool aFound;
    bool bFound;
    bool cFound;
    bool oneInRow= false;
    int lettersFound =-1;
    
    
    
    for(int i =0; i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            if(grid[i][j]=='A')
            {
                letters[++lettersFound]='A';
                aFound=true;
            }
            else  if(grid[i][j]=='B')
            {
                letters[++lettersFound]='B';
                bFound=true;
            }
            else if(grid[i][j]=='C')
            {
                letters[++lettersFound]='C';
                cFound=true;
            }
        }
        if(lettersFound==1)
        {
            int k =0;
            while(k<=3)
            {
                if(grid[i][k]=='M')
                {
                    if(aFound && bFound)
                    {
                        grid[i][k]='C';
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        
                        
                        
                        oneInRow=true;
                        return oneInRow;


                    }
                    else if(aFound&cFound)
                    {
                        grid[i][k] ='B';
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        
                        
                        
                        
                        
                        oneInRow = true;
                        return oneInRow;

                    }
                    else{
                        grid[i][k]='A';
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        
                        
                        
                        
                        
                        
                        oneInRow = true;
                        return oneInRow;
                    }
                }
                k++;
            }
            k=0;
        }
        letters[0]=NULL;
        letters[1]=NULL;
        letters[2]= NULL;
        
        aFound= false;
        bFound =false;
        cFound = false;
        oneInRow = false;

        lettersFound =-1;
        
    }

    
    return oneInRow;
    
}



bool checkOneCol()
{
    
    char letters[10];
    bool aFound;
    bool bFound;
    bool cFound;
    bool oneInCol= false;
    int lettersFound =-1;
    
    for(int j =0; j<=3;j++)
    {
        for(int i=0;i<=3;i++)
        {
            if(grid[i][j]=='A')
            {
                letters[++lettersFound]='A';
                aFound=true;
            }
            else  if(grid[i][j]=='B')
            {
                letters[++lettersFound]='B';
                bFound=true;
            }
            else if(grid[i][j]=='C')
            {
                letters[++lettersFound]='C';
                cFound=true;
            }
        }
        if(lettersFound==1)
        {
            int k =0;
            while(k<=3)
            {
                if(grid[k][j]=='M')
                {
                    if(aFound && bFound)
                    {
                        grid[k][j]='C';
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        
                        
                        
                        
                        oneInCol=true;
                        return oneInCol;
                    }
                    else if(aFound&cFound)
                    {
                        grid[k][j] ='B';
                        
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        
                        
                        
                        
                        
                        
                        oneInCol=true;
                        return oneInCol;
                    }
                    else{
                        grid[k][j]='A';
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        
                        
                        
                        
                        
                        oneInCol=true;
                        return oneInCol;
                    }
                }
                k++;
            }
            k=0;
        }
        letters[0]=NULL;
        letters[1]=NULL;
        letters[2]= NULL;
        
        aFound= false;
        bFound =false;
        cFound = false;
        oneInCol=false;
        lettersFound =-1;
        
    }

    return oneInCol;
}


bool checkElse()
{
    
    char letters[10];
    bool aFound;
    bool bFound;
    bool cFound;
    bool checkFill = false;
    int lettersFound =-1;

    for(int i =0;i<=3;i++)
    {
        for(int j =0;j<=3;j++)
        {
            if(grid[i][j]=='M')
            {
                
                //parss row
                
                int k =0;
                
                while(k<=3)
                {
                    if(grid[i][k]=='A')
                    {
                        letters[++lettersFound]='A';
                        aFound=true;
                    }
                    else if(grid[i][k]=='B')
                    {
                        letters[++lettersFound]='B';
                        bFound=true;
                    }
                    else if(grid[i][k]=='C')
                    {
                        letters[++lettersFound]='C';
                        cFound=true;
                    }
                    k++;
                    
                }
                
                k=0;
                while(k<=3)
                {
                    if(grid[k][j]=='A')
                    {
                        letters[++lettersFound]='A';
                        aFound=true;
                    }
                    else if(grid[k][j]=='B')
                    {
                        letters[++lettersFound]='B';
                        bFound=true;
                    }
                    else if(grid[k][j]=='C')
                    {
                        letters[++lettersFound]='C';
                        cFound=true;
                    }
                    k++;
                }
                
                
                if(aFound&&bFound)
                {
                    grid[i][j]='C';
                    
                    
                    
                    printf("%c",'\n');
                    for(int i =0; i<=3;i++)
                    {
                        for(int j=0;j<=3;j++)
                        {
                            printf("%c",grid[i][j]);
                            
                        }
                        printf("%c",'\n');
                        
                    }
                    
                    
                    
                    checkFill = true;
                    return checkFill;
                }
                else if(aFound&&cFound)
                {
                    grid[i][j]='B';
                    
                    
                    
                    
                    printf("%c",'\n');
                    for(int i =0; i<=3;i++)
                    {
                        for(int j=0;j<=3;j++)
                        {
                            printf("%c",grid[i][j]);
                            
                        }
                        printf("%c",'\n');
                        
                    }
                    
                    
                    
                    checkFill = true;
                    return checkFill;

                    
                }
                else if(bFound&&cFound)
                {
                    grid[i][j]='A';
                    
                    
                    
                    
                    printf("%c",'\n');
                    for(int i =0; i<=3;i++)
                    {
                        for(int j=0;j<=3;j++)
                        {
                            printf("%c",grid[i][j]);
                            
                        }
                        printf("%c",'\n');
                        
                    }
                    
                    
                    
                    
                    checkFill = true;
                    return checkFill;

                    
                    
                }
                
                
                
                
                
                
                
                
                
            }
        }
        
        letters[0]=NULL;
        letters[1]=NULL;
        letters[2]= NULL;
        
        aFound= false;
        bFound =false;
        cFound = false;
        checkFill =false;
        lettersFound =-1;
        
        
    }
    return checkFill;
}







void findSol()
{
    printf("%c",'\n');
    for(int i =0; i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("%c",grid[i][j]);
            
        }
        printf("%c",'\n');
        
    }

    if(grid[(number/6)-1][(number%6)-2]!='M'&&(grid[(number/6)-1][(number%6)-2]!='X')) ///if at any time the location asked for is filled
    {
        final = grid[(number/6)-1][(number%6)-2];
    }
    else{
      /*  char letters[10];
        bool aFound;
        bool bFound;
        bool cFound;
        int lettersFound =-1;
        */
        if(checkOneRow())
        {
            findSol();
        }
        else{
        
        if(checkOneCol())
        {
            findSol();
        }
        else{
            if(checkElse())
            {
                findSol();
            }
            else{
            }
        }
        }
        
    }
}








/*
void findSol(int Number)
{
    if(grid[(Number/6)-1][(Number%6)-2]!='M')
    {
        final = grid[1][0];
    }
    
    else{
    char letters[10];
    bool aFound;
    bool bFound;
    bool cFound;
    int lettersFound =-1;
    for(int i =0; i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            if(grid[i][j]=='A')
            {
                letters[++lettersFound]='A';
                aFound=true;
            }
           else  if(grid[i][j]=='B')
            {
                letters[++lettersFound]='B';
                bFound=true;
            }
            else if(grid[i][j]=='C')
            {
                letters[++lettersFound]='C';
                cFound=true;
            }
        }
        if(lettersFound==1)
        {
            int k =0;
            while(k<=3)
            {
                if(grid[i][k]=='M')
                {
                    if(aFound && bFound)
                    {
                        grid[i][k]='C';
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        

                        
                        
                        goto call;
                    }
                    else if(aFound&cFound)
                    {
                        grid[i][k] ='B';
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        

                        
                        
                        
                        goto call;
                    }
                    else{
                        grid[i][k]='A';
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
                        

                        
                        
                        
                        
                        goto call;
                    }
                }
                k++;
            }
            k=0;
        }
        letters[0]=NULL;
        letters[1]=NULL;
        letters[2]= NULL;
        
        aFound= false;
        bFound =false;
        cFound = false;
        lettersFound =-1;
        
    }
    
    for(int i =0; i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("%c",grid[i][j]);
            
        }
        printf("%c",'\n');

    }
    
    
    
    
    
    for(int j =0; j<=3;j++)
    {
        for(int i=0;i<=3;i++)
        {
            if(grid[i][j]=='A')
            {
                letters[++lettersFound]='A';
                aFound=true;
            }
            else  if(grid[i][j]=='B')
            {
                letters[++lettersFound]='B';
                bFound=true;
            }
            else if(grid[i][j]=='C')
            {
                letters[++lettersFound]='C';
                cFound=true;
            }
        }
        if(lettersFound==1)
        {
            int k =0;
            while(k<=3)
            {
                if(grid[k][j]=='M')
                {
                    if(aFound && bFound)
                    {
                        grid[k][j]='C';
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }
 
                    
                        
                        
                        
                        goto call;
                    }
                    else if(aFound&cFound)
                    {
                        grid[k][j] ='B';
                        
                        
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }

                        
                        
                        
                        
                        goto call;
                    }
                    else{
                        grid[k][j]='A';
                        
                        printf("%c",'\n');
                        for(int i =0; i<=3;i++)
                        {
                            for(int j=0;j<=3;j++)
                            {
                                printf("%c",grid[i][j]);
                                
                            }
                            printf("%c",'\n');
                            
                        }

                        
                        
                        
                        goto call;
                    }
                }
                k++;
            }
            k=0;
        }
        letters[0]=NULL;
        letters[1]=NULL;
        letters[2]= NULL;
        
        aFound= false;
        bFound =false;
        cFound = false;
        lettersFound =-1;
        
    }
   



    letters[0]=NULL;
    letters[1]=NULL;
    letters[2]= NULL;
    
    aFound= false;
    bFound =false;
    cFound = false;
    lettersFound =-1;
    
    
    
    
    for(int i =0;i<=3;i++)
    {
        for(int j =0;j<=3;j++)
        {
            if(grid[i][j]=='M')
            {
                
                //parss row
                
                int k =0;
                
                while(k<=3)
                {
                    if(grid[i][k]=='A')
                    {
                        letters[++lettersFound]='A';
                        aFound=true;
                    }
                    else if(grid[i][k]=='B')
                    {
                        letters[++lettersFound]='B';
                        bFound=true;
                    }
                    else if(grid[i][k]=='C')
                    {
                        letters[++lettersFound]='C';
                        cFound=true;
                    }
                    k++;
                    
                }
                
                 k=0;
                while(k<=3)
                {
                    if(grid[k][j]=='A')
                    {
                        letters[++lettersFound]='A';
                        aFound=true;
                    }
                    else if(grid[k][j]=='B')
                    {
                        letters[++lettersFound]='B';
                        bFound=true;
                    }
                    else if(grid[k][j]=='C')
                    {
                        letters[++lettersFound]='C';
                        cFound=true;
                    }
                    k++;
                }
                
                
               if(aFound&&bFound)
               {
                   grid[i][j]='C';
                   
                   
                   
                   printf("%c",'\n');
                   for(int i =0; i<=3;i++)
                   {
                       for(int j=0;j<=3;j++)
                       {
                           printf("%c",grid[i][j]);
                           
                       }
                       printf("%c",'\n');
                       
                   }

                   
                   
                   findSol( Number);
                   
               }
                else if(aFound&&cFound)
                {
                    grid[i][j]='B';
                
                
                
                
                    printf("%c",'\n');
                    for(int i =0; i<=3;i++)
                    {
                        for(int j=0;j<=3;j++)
                        {
                            printf("%c",grid[i][j]);
                            
                        }
                        printf("%c",'\n');
                        
                    }

                
                
                    findSol(Number);
                
                }
                else if(bFound&&cFound)
                {
                    grid[i][j]='A';
                    
                    
                    
                    
                    printf("%c",'\n');
                    for(int i =0; i<=3;i++)
                    {
                        for(int j=0;j<=3;j++)
                        {
                            printf("%c",grid[i][j]);
                            
                        }
                        printf("%c",'\n');
                        
                    }

                    
                    
                    
                    findSol(Number);
                    
                    
                }
            
                
                
                
                
                
                
                
                
            }
        }
        
        letters[0]=NULL;
        letters[1]=NULL;
        letters[2]= NULL;
        
        aFound= false;
        bFound =false;
        cFound = false;
        lettersFound =-1;
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    call: findSol(Number);
    
    
    
    
    
    
    
    
    }
    
}
 */

char returnFinal()
{
    return final;
}