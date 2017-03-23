package animal;

import java.util.Scanner;

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

public class Cachorro extends Animal{
    private String nome;
    private String raca;

    public Cachorro(String nome, String raca){
      super(tipo, idade);
      this.nome = nome;
      this.raca = raca;
    }

	public String getTipo() {
		return this.tipo;
	}

	public int getIdade() {
		return this.idade;
	}

	public String getNome() {
		return this.nome;
	}

	public String getRaca() {
		return this.raca;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setRaca(String raca) {
		this.raca = raca;
	}

	@Override
	public String toString() {
		return "Animal [tipo=" + tipo + ", idade=" + idade + ", nome=" + nome + ", raca=" + raca + "]";
	}
}
