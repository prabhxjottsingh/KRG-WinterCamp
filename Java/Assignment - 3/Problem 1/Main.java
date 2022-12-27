import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size of the stack: ");
		int n = sc.nextInt();
		SpecialStack st = new SpecialStack(n);

		int choice = 0;
		do {

			System.out.println("Choose one of the of following options: ");
			System.out.println("1. Push an element in the stack. ");
			System.out.println("2. Pop an element from the stack. ");
			System.out.println("3. Return the minimum element in the stack. ");
			System.out.println("4. Check if stack is empty. ");
			System.out.println("5. Check if stack is full. ");
			System.out.println("6. Exit. ");

			System.out.print("Enter your choice: ");
			choice = sc.nextInt();

			switch (choice) {

				case 1:
					System.out.print("Enter the Element you want to add in the stack: ");
					int x = sc.nextInt();
					SpecialStack.push(x);
					break;

				case 2:
					int topElem = SpecialStack.pop();
					if (topElem == -1)
						System.out.println("Underflow");
					else
						System.out.println("Top element in the stack is: " + topElem);
					break;

				case 3:
					int minElem = SpecialStack.getMin();
					if (minElem == -1)
						System.out.println("UnderFlow");
					else
						System.out.println("Minimum element in the stack is: " + minElem);
					break;

				case 4:
					boolean isEmpt = SpecialStack.isEmpty();
					if (isEmpt)
						System.out.println("Yes, the stack is empty.");
					else
						System.out.println("No, the stack is not empty");
					break;

				case 5:
					boolean isFul = SpecialStack.isFull();
					if (isFul)
						System.out.println("Yes, the stack is Full.");
					else
						System.out.println("No, the stack is not Full");
					break;

				case 6:
					break;

				default:
					System.out.println("Enter a valid option. ");

			}

		} while (choice != 6);

	}
};

class SpecialStack {

	static ArrayList<Pair> arr = new ArrayList<Pair>();
	static int idx = -1;
	static int maxSize = 0;

	SpecialStack(int n) {
		maxSize = n;
	}

	static int mini(int a, int b) {
		if (a < b)
			return a;
		return b;
	}

	static void push(int x) {
		idx += 1;
		if (idx == 0) {
			Pair pr = new Pair(x, x);
			arr.add(pr);
		} else if (idx == maxSize - 1) {
			System.out.println("Overflow");
			return;
			
		} else {
			int minElem = mini(x, arr.get(idx - 1).second);
			Pair pr = new Pair(x, minElem);
			arr.add(pr);
		}
	}

	static int pop() {
		if (idx == -1) {
			return -1;
		}
		int x = arr.get(idx).first;
		arr.remove(arr.size() - 1);
		idx -= 1;
		return x;
	}

	static boolean isEmpty() {
		if (idx == -1)
			return true;
		return false;
	}

	static boolean isFull() {
		if (idx == maxSize - 1)
			return true;
		return false;
	}

	static int getMin() {
		if (idx == -1)
			return 1;
		return arr.get(idx).second;
	}

};

class Pair {
	int first;
	int second;

	Pair(int first, int second) {
		this.first = first;
		this.second = second;
	}

	int topVal() {
		return first;
	}

	int smallestVal() {
		return second;
	}

};