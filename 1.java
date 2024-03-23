import java.util.Scanner;
public class UserInterface{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        double l,b,pa;
        System.out.println("Enter the length of the room(in m)");
        l=sc.nextDouble();
        Outer:{
            if(l<=0){
                System.out.println("Invalid length");
                break Outer;
            }
            System.out.println("Enter the breadth of the room(in m)");
            b=sc.nextDouble();
            if(b<=0){
                System.out.println("Invalid Breadth");
                break Outer;
            }
            System.out.println("Enter the plant area of a single plant(in cm2)");
            pa=sc.nextDouble();
            if(pa<=0){
                System.out.println("Invalid plant area");
                break Outer;
            }
            int tp=(int)((l*b)/(pa/10000));
            if(tp%10!=0){
                int remain=tp%10;
                tp=tp-remain;
            }
            double pr=0.9*tp;
            System.out.println("Total number of plants is"+tp);
            System.out.printf("Total oxygen production is %.2f litres",pr);
        }
    }
}
