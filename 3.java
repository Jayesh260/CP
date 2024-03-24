 java.util.Scanner;

public class UserInterface {

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the sides");
		int side;
		side=sc.nextInt();
		outer:{
		    if(side!=3 && side!=4 &&side!=0){
		        System.out.println("Invalid side");
		        break outer;
		    }
		    if(side==0){
		        System.out.println("Enter the radius");
		        Double r;
		        r=sc.nextDouble();
		        System.out.printf("Area of the Circle is %.2f",(3.14*r*r));
		    }
		    if(side==3){
		        System.out.println("Enter the base and height");
		        Double base,height;
		        base=sc.nextDouble();
		        height=sc.nextDouble();
		        System.out.printf("Area of Triangle is %.2f", ((base*height)/2));
		    }
		    if(side==4){
		        System.out.println("Enter the length");
		        float l,b;
		        l=sc.nextFloat();
		        System.out.println("Enter the breadth");
		        b=sc.nextFloat();
		        if(l==b){
		        System.out.printf("The area of Square is %.2f", l*b);
		        }
		        else if(l!=b){
		        System.out.printf("The area of Rectangle is %.2f ", l*b);
                }
		    }
		}
		
	}

}
