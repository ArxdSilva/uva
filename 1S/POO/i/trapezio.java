package idade;

import java.util.Scanner;

// h = altura
// b = base menor
// B = base maior
// Area = (h.(b+B))/2

public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int h, b, baseM;
    float area;
    System.out.println("Entre o valor da altura: ");
    h = input.nextInt();
    System.out.println("Entre o valor da base menor: ");
    b = input.nextInt();
    System.out.println("Entre o valor da base maior: ");
    baseM = input.nextInt();
    area = (h*(b+baseM))/2
    System.out.println("A area eh: " + area);
}