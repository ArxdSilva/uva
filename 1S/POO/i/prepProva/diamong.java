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
public class diamong extends Cliente {

    public String codigo_produto;
    public int quantidade_mensal;
    public int valor_produtos;

    public diamong(String nome, String CPF, String endereco, String codigo_produto, int quantidade_mensal, int valor_produtos)
            {
                super(nome, endereco, CPF);
                this.codigo_produto = codigo_produto;
                this.quantidade_mensal = quantidade_mensal;
                this.valor_produtos = valor_produtos;
            }

	public String getCodigo_produto() {
		return this.codigo_produto;
	}

	public int getQuantidade_mensal() {
		return this.quantidade_mensal;
	}

	public int getValor_produtos() {
		return this.valor_produtos;
	}

	public void setCodigo_produto(String codigo_produto) {
		this.codigo_produto = codigo_produto;
	}

	public void setQuantidade_mensal(int quantidade_mensal) {
		this.quantidade_mensal = quantidade_mensal;
	}

	public void setValor_produtos(int valor_produtos) {
		this.valor_produtos = valor_produtos;
	}

	@Override
	public String toString() {
		return "diamong [codigo_produto=" + codigo_produto + ", quantidade_mensal=" + quantidade_mensal + ", valor_produtos=" + valor_produtos + "]";
	}
}
