package j5;

import java.util.Scanner;

public class j5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String time;
        boolean valid;
        valid = true;
        int[] t;
        t = new int[3];
        start:
        System.out.println("Entre um horario especifico no formato (HH:MM:SS): ");
        time = input.nextLine();
        String[] parts = time.split(":");
        for (int x = 0; x < parts.length; x++) {
            t[x] = Integer.parseInt(parts[x]);
        }
        while (valid) {
            if (t[0]>23 || t[0]<0) {
                System.out.println("hora invalida");
                continue start;
            }
            if (t[1]>59 || t[1]<0) {
                System.out.println("minuto invalido");
                continue start;
            }
            if (t[2]>59 || t[2]<0) {
                System.out.println("segundo invalido");
                continue start;
            }
            valid = false;
        }
        System.out.println("horario valido");
        return;
    }
}