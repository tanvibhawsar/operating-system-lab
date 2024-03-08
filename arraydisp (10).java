/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;
public class Arraydisp
{
	public static void main(String[] args) {
		String[] array=new String[5];
		Scanner sc = new Scanner(System.in);
		System.out.println("Original array:");
		for(int i=0;i<array.length;i++){
		    System.out.println("Enter integer:");
		    array[i]=sc.nextLine();
		}
		for(int i=0;i<array.length;i++){
		    System.out.println(array[i]);
		}

	}
}