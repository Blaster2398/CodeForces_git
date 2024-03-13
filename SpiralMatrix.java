import java.util.*;


public class SpiralMatrix {
    public static void printSpiral(int matrix[][]){
        int startRow = 0;
        int endRow =matrix.length-1;
        int startCol = 0;
        int endCol = matrix[0].length-1;
        
        while(startRow<=endRow && startCol<=endRow){

            // top 
            for (int j = startCol; j <= endCol ; j++){
                System.out.print(matrix[startRow][j]+" ");
            }

            // right 
            for (int i = startRow+1 ; i <= endRow ; i++){  // herre the startRow+1 is important 
                System.out.print(matrix[i][endCol]+" ");
            }

            // bottom
            for(int j = endCol-1 ; j >= startCol; j--){   // here we use endCol-1 
                if(startRow== endRow){
                    break;                              // here this extra condition is 
                }
                System.out.print(matrix[endRow][j]+" ");
            }

            // left
            for(int i = endRow-1; i >= startRow+1; i-- ){   // here both are  changed
                if(startCol == endCol){
                    break;
                }
                System.out.print(matrix[i][endCol]+" ");
            }
            startRow++;
            startCol++;
            endRow--;
            endCol--;
        }

    }
    public static void main(String args[]){
        int matrix[][]= {{1,2,3},{5,6,7},{9,10,11},{13,14,15},{17,18,19}};
        printSpiral(matrix);
    }
}
