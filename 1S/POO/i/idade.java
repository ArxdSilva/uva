package idade;

import java.util.Scanner;

public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int today, born, age;
    System.out.println("Input your age now: ");
    today = input.nextInt();
    System.out.println("Now input the year that you were born: ");
    born = input.nextInt();
    age = (today - born)
    System.out.println("Your age is: " + age);
}