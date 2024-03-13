import java.util.*;

public class DominoPiling {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int row =sc.nextInt();
        int column = sc.nextInt();
        if(column%2==0){
            System.out.println(row*(column/2));
        }
        else{
            System.out.println((row*(column/2))+row/2);
        }

    }
}