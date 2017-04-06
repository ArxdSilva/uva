/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cliente;

/**
 *
 * @author arthur
 */
public class Cliente {
    public String nome;
    public String endereco;
    public String CPF;
    public Cliente(String nome, String endereco, String CPF)
    {
        this.nome = nome;
        this.endereco = endereco;
        this.CPF = CPF;
    }

    public static void main(String[] args) {
        // TODO code application logic here
    }
	public String getNome() {
		return this.nome;
	}

	public String getEndereco() {
		return this.endereco;
	}

	public String getCPF() {
		return this.CPF;
	}

	public static void getMain() {
		return this.main;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}

	public void setCPF(String CPF) {
		this.CPF = CPF;
	}

	public static void setMain(void main) {
		Cliente.main = main;
	}

	@Override
	public String toString() {
		return "Cliente [nome=" + nome + ", endereco=" + endereco + ", CPF=" + CPF + "]";
	}
}
