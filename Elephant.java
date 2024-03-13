// Question

//An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

//Input
//The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

//Output
//Print the minimum number of steps that elephant needs to make to get from point 0 to point x.



import java.util.*;


public class Elephant {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();
        int count= 0 ;

        count += input/5;
        int temp =input%5;

        count+=temp/4;
        temp = temp%4;

        count+= temp/3;
        temp = temp%3;

        count += temp/2;
        temp = temp % 2;

        count+= temp;

        System.out.println(count);

    }    
}
