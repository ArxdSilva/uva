package perimetro;

import java.util.Scanner;

public class Triangulo {

}

public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    float a, b, c, perimetro;
    System.out.println("Entre o valor do primeiro lado do triangulo: ");
    a = input.nextFloat();
    System.out.println("Entre o valor do segundo lado do triangulo: ");
    b = input.nextFloat();
    System.out.println("Entre o valor do terceiro lado do triangulo: ");
    c = input.nextFloat();
    perimetro = a + b + c
    System.out.println("O perimetro eh: " + perimetro);
}