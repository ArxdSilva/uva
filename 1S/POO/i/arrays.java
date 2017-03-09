package arrays;

import java.util.Scanner;

public class Arrays {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] Animal;
        String tipo, raca;
        Animal [] pets = new Animal[3];
        for (int i=0; i<3;i++){
            pets[i] = new Animal();
            System.out.println("entre com o tipo do animal:");
            tipo = input.nextLine();
            pets[i].setTipo(tipo);
            System.out.println("entre com a raca do animal:");
            raca = input.nextLine();
            pets[i].setRaca(raca);
            pets[i] = i;
        }
    }
}
