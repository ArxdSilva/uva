package herenca;

public class Animal {
    private String tipo;
    private int idade;
    public Animal(String tipo, int idade){
        this.tipo = tipo;
        this.idade = idade;
    }
    public int getIdade() {
        return idade;
    }
    public String toString() {
        return "Isto é um " + tipo;
    }
}

public class Cachorro extends Animal {
    private String nome;
    private String raça;
    public Cachorro(String nome, String raca, int idade){
        super(tipo, idade); // chamada do construtor da superclasse
        this.raca = raca;
        this.nome = nome;
    }
    public void imprime() {
        System.out.println("Isto é um Cachorro de nome: " + nome + ", raça: " + raça + " e idade = " + getIdade());
    }
}

public class CachorroDeCorrida extends Cachorro {
    private float velocidade;
    private float peso;
    public CachorroDeCorrida(float velocidade, float peso){
        super(nome, raca);
        this.velocidade = velocidade;
        this.peso = peso;
    }

}

public class MeusAnimais {
    public static void main(String args[]) {
        Cachorro c1 = new Cachorro ("Rex", "Pastor Alemão", 5);
        Cachorro c2 = new Cachorro ("John", "Poodle", 4);
        System.out.println(c1 + " - idade ="+c1.getIdade());
        System.out.println(c1 + " - idade ="+c2.getIdade());
        c1.imprime();
        System.out.println(c1);
        System.out.println(c2);
        CachorroDeCorrida c3 = new CachorroDeCorrida("tRex", "pastor", 5, 40.0f, 5.0f);
        CachorroDeCorrida c4 = new CachorroDeCorrida("tRexa", "freira", 5, 30.0f, 4.5f);
    }
}