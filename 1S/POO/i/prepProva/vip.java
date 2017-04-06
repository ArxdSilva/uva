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
public class VIP extends Cliente {

    public int num_fidelidade;
    public int valor_desconto_compras;
    public int desconto_compras;
    public VIP(String nome, String CPF, String endereco, int num_fidelidade, int valor_desconto_compras, int desconto_compras)
    {
      super(nome, endereco, CPF);
      this.desconto_compras = desconto_compras;
      this.valor_desconto_compras = valor_desconto_compras;
      this.num_fidelidade = num_fidelidade;
    }

	public int getNum_fidelidade() {
		return this.num_fidelidade;
	}

	public int getValor_desconto_compras() {
		return this.valor_desconto_compras;
	}

	public int getDesconto_compras() {
		return this.desconto_compras;
	}

	public void setNum_fidelidade(int num_fidelidade) {
		this.num_fidelidade = num_fidelidade;
	}

	public void setValor_desconto_compras(int valor_desconto_compras) {
		this.valor_desconto_compras = valor_desconto_compras;
	}

	public void setDesconto_compras(int desconto_compras) {
		this.desconto_compras = desconto_compras;
	}

	@Override
	public String toString() {
		return "VIP [num_fidelidade=" + num_fidelidade + ", valor_desconto_compras=" + valor_desconto_compras + ", desconto_compras=" + desconto_compras + "]";
	}
}
