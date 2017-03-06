package cotacao;

import java.util.Scanner;

public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    double reais, doleta, yenes;
    System.out.println("Entre o valor em reais: ");
    reais = input.nextDouble();
    doleta = reais * 3.3
    yenes = reais * 10.33
    System.out.println(reais + " Temer = $" + doleta + " e $" + yenes + " em yenes");
}