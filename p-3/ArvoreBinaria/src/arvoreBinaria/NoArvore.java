package arvoreBinaria;

public class NoArvore {
  public int valor;
  NoArvore esquerda;
  NoArvore direita;

  public void exibir(NoArvore no) {
    if (no != null) {
      exibir(no.esquerda);
      System.out.print(" " + no.valor);
      exibir(no.direita);
    }
  }

  public NoArvore buscar(NoArvore no, int valor) {
    if (no == null) {
      return null;
    }
    if (no.valor == valor) {
      return no;
    }
    if (valor < no.valor) {
      return buscar(no.esquerda, valor);
    }
    return buscar(no.direita, valor);
  }

  public int menorValor(NoArvore no) {
    int menor = no.valor;
    while (no.esquerda != null) {
      menor = no.esquerda.valor;
      no = no.esquerda;
    }
    return menor;
  }

  public NoArvore adicionar(NoArvore no, int valor) {
    if (no == null) {
      no = new NoArvore();
      no.valor = valor;
      no.esquerda = null;
      no.direita = null;
    } else if (valor < no.valor) {
      no.esquerda = adicionar(no.esquerda, valor);
    } else {
      no.direita = adicionar(no.direita, valor);
    }
    return no;
  }

  public NoArvore remover(NoArvore no, int valor) {
    if (no == null) {
      return null;
    }
    if (valor == no.valor) {
      if (no.esquerda == null && no.direita == null) {
        return null;
      }
      if (no.direita == null) {
        return no.esquerda;
      }
      if (no.esquerda == null) {
        return no.direita;
      }
      int menor = menorValor(no.direita);
      no.valor = menor;
      no.direita = remover(no.direita, menor);
      return no;
    }
    if (valor < no.valor) {
      no.esquerda = remover(no.esquerda, valor);
    } else {
      no.direita = remover(no.direita, valor);
    }
    return no;
  }
}
