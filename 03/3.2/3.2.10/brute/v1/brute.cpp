#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

class Solution {
public:
    void markRow(int row,int cols,vector<vector<int>>& matrix){
         for(int i = 0; i < cols; i++){
           if(matrix[row][i] != 0){
            matrix[row][i] = -1;
           }
    }
    }
    void markCol(int col,int rows,vector<vector<int>>& matrix){
         for(int i = 0; i < rows; i++){
            if(matrix[i][col] != 0){
                matrix[i][col] = -1;
            }
    }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                   markRow(i,cols,matrix);
                   markCol(j,rows,matrix);
                }
            }
        }
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == -1) matrix[i][j] = 0;
            }
        }
           
    }
    
};

int main(){
    
    return 0;
}