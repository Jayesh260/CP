import java.util.Scanner;

public class UserInterface {

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		double h,w;
		System.out.println("Enter weight in kg");
		w=sc.nextDouble();
		outer:{
		    if(w<=0){
		        System.out.println("Invalid Input");
		        break outer;
		    }
		    System.out.println("Enter height in cm");
		    h=sc.nextDouble();
		    if(h<=0){
		        System.out.println("Invalid Input");
		        break outer;
		    }
		    h=h/100;
		    double bmi=(w/(h*h));
		    if(bmi>=25){
		        double loss=bmi-25;
		        System.out.printf("Your BMI is %.2f. You are overweight \n",bmi);
		        System.out.printf("Reduce %.2f kg to be fit",(float)loss);
		    }
		    else if(bmi>=18.5){
		        System.out.printf("Your BMI is %.2f. You are fit and healthy",bmi);
		    }
		    else if(bmi<18.5){
		        double gain=18.5-bmi;
		        System.out.printf("Your BMI is %.2f. You are underweight \n",bmi);
		        System.out.printf("Gain %.2f kg to be fit",(float)gain);
		    }
		}
		
	}

}
