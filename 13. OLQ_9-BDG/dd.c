#include <stdio.h> 
#include<math.h>

int chessboard[8][8] = {0}; 

int minimum(int a, int b){

        if(a <=b)
        
        return a;
        return b;
}

int calculateSteps(int SourceFile, int SourceRank, int TargetFile, int TargetRank){ 
     
        int min, x1, y1, x2, y2;;
        
        // if source = target
        if (SourceFile == TargetFile && SourceRank == TargetRank)
                return chessboard[0][0]; 
        else{ 
                // return the calculated difference 
                if (chessboard[abs(SourceFile - TargetFile)][abs(SourceRank - TargetRank)] != 0) 
                        return chessboard[abs(SourceFile - TargetFile)][abs(SourceRank - TargetRank)]; 
                else {
                        if (SourceFile <= TargetFile) { 
                                if (TargetFile <= TargetRank) { 
                                        x1 = SourceFile + 2; 
                                        y1 = TargetFile + 1; 
                                        x2 = SourceFile + 1; 
                                        y2 = TargetFile + 2; 
                                } 
                                else { 
                                        x1 = SourceFile + 2; 
                                        y1 = TargetFile - 1; 
                                        x2 = SourceFile + 1; 
                                        y2 = TargetFile - 2; 
                                } 
                        } 
                        else { 
                                if (TargetFile <= TargetRank) { 
                                        x1 = SourceFile - 2; 
                                        y1 = TargetFile + 1; 
                                        x2 = SourceFile - 1; 
                                        y2 = TargetFile + 2; 
                                } 
                                else { 
                                        x1 = SourceFile - 2; 
                                        y1 = TargetFile - 1; 
                                        x2 = SourceFile - 1; 
                                        y2 = TargetFile - 2; 
                                } 
                        } 
                        
                        // calculate the minimum 
                        min = minimum(calculateSteps(x1, y1, TargetFile, TargetRank), 
                                                calculateSteps(x2, y2, TargetFile, TargetRank)) ;
                        chessboard[abs(SourceFile - TargetFile)][abs(TargetFile - TargetRank)] = min + 1; 
                                                        
                        // exchanging the coordinates x with y 
                        chessboard[abs(TargetFile - TargetRank)][abs(SourceFile - TargetFile)] = 
                                                chessboard[abs(SourceFile - TargetFile)][abs(TargetFile - TargetRank)]; 
                        // return the result
                        return chessboard[abs(SourceFile - TargetFile)][abs(TargetFile - TargetRank)]; 
                } 
        } 
} 


int main(){ 
        // declare variables
        int i = 0, totalSquare, x1, y1, x2, y2, minMove, T; 
        char input[5];
        
        // initialize total no of square in board
        // it is initialized to 100
        // so that knight if knight cross boundary1 of 
        // 8 x1 8, it will not create problem
        totalSquare = 100; 
        
        // take input of total test cases
        scanf("%d", &T);
        
        // run for T number of test cases
        for(int i = 0 ; i < T ; i++){
                // take input of input string
                scanf(" %[^\n]%*c", input);

                x1 = (int)input[0] - 64; 
                y1 = input[1] - '0'; 
                x2 = (int)input[3] - 64; 
                y2 = input[4] - '0'; 
        

                if ((x1 == 1 && y1 == 1 && x2 == 2 && y2 == 2) || 
                        (x1 == 2 && y1 == 2 && x2 == 1 && y2 == 1)) 
                                minMove = 4; 
                else if ((x1 == 1 && y1 == totalSquare && x2 == 2 && y2 == totalSquare - 1) || 
                                (x1 == 2 && y1 == totalSquare - 1 && x2 == 1 && y2 == totalSquare)) 
                                        minMove = 4; 
                else if ((x1 == totalSquare && y1 == 1 && x2 == totalSquare - 1 && y2 == 2) || 
                                (x1 == totalSquare - 1 && y1 == 2 && x2 == totalSquare && y2 == 1)) 
                                        minMove = 4; 
                else if ((x1 == totalSquare && y1 == totalSquare && x2 == totalSquare - 1 && y2 == totalSquare - 1) || 
                                (x1 == totalSquare - 1 && y1 == totalSquare - 1 && x2 == totalSquare && y2 == totalSquare)) 
                                        minMove = 4; 
                else { 
                        chessboard[1][0] = 3; 
                        chessboard[0][1] = 3; 
                        chessboard[1][1] = 2; 
                        chessboard[2][0] = 2; 
                        chessboard[0][2] = 2; 
                        chessboard[2][1] = 1; 
                        chessboard[1][2] = 1; 
                        
                        minMove = calculateSteps(x1, y1, x2, y2); 
                } 
                
                printf("Case #%d: %d\n",i+1,minMove); 
                i++;
        }

        return 0; 
}