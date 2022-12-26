import java.util.*;

public class Main{
	public static void main(String[] args){
		ArrayList<Integer> arr = new ArrayList<Integer>();
		for(int i = 0; i < 1000; i++){
			arr.add(i);
		}
		for(int i = 0; i < 1000; i++){
			System.out.print(arr.get(i) + ", ");
		}
	}
};