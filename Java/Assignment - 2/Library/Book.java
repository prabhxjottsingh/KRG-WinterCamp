package Library;

import java.util.*;

public class Book {
    String bookName;
    int bookID;
    int bookQuantity;
    String bookAuthor;
    
    void addNewBook(){

        //Scanner class Variable
        Scanner sc = new Scanner(System.in);

        //Take book Name input from the user
        System.out.print("Enter the name of the Book: ");
        bookName = sc.next();

        //Take BookID input from the user
        System.out.print("Enter the book ID: ");
        bookID = sc.nextInt();

        //Author of the book
        System.out.print("Enter the name of the Author of " + bookName + ": ");
        bookAuthor = sc.next();

        //Take bookQuantity 
        System.out.print("Number of " + bookName + " books in the library: ");
        bookQuantity = sc.nextInt();

        //Closing Input
        sc.close();

    }
}
