package piramide;

import java.util.Arrays;

public class Piramide {

  private RandList randList;
  private int[] menoresValores;
  private PiramideLines[] piramideLines;

  public Piramide(int quant) {
    this.randList = new RandList(quant);
  }

  public void imprimeTela() {
    int[] numberlist = this.randList.getNumberlist();
    String strList = this.randList.getStrList();
    System.out.println();

    System.out.print("String: ");
    System.out.println(strList);

    System.out.print("Array: ");
    System.out.println(Arrays.toString(numberlist));

    imprimeApresentacao();
    imprimePiramide();

    System.out.println("-----------------------------");
    System.out.println();
    imprimePiramideLines();
    System.out.println();

    System.out.print("Os menores valores de cada linha são: ");
    imprimeMenoresValores();

    imprimeSomaMenoresValores();
  }

  private void imprimeApresentacao() {
    System.out.println();
    System.out.print("""
        ---------- Pirâmide ----------
        """);
  }

  private void imprimePiramide() {
    int[] numberlist = this.randList.getNumberlist();
    int[] arrayReduzido;
    int quantLinhas = 0;
    boolean acabou = false;

    this.piramideLines = new PiramideLines[getQuantLinhas()];

    for (int i = 0; !acabou; i++) {
      int[] linha = new int[i + 1];

      for (int j = 0; j <= i; j++) {
        linha[j] = numberlist[0];
        System.out.print(String.valueOf(numberlist[0]) + " ");
        if (numberlist.length == 1) {
          acabou = true;
          break;
        }
        arrayReduzido = new int[numberlist.length - 1];
        System.arraycopy(numberlist, 1, arrayReduzido, 0, numberlist.length - 1);
        numberlist = arrayReduzido;
      }
      this.piramideLines[quantLinhas] = new PiramideLines(linha);
      quantLinhas++;
      System.out.println();
    }
  }

  private int getQuantLinhas() {
    int[] numberlist = this.randList.getNumberlist();
    int quantLinhas = 0;
    boolean acabou = false;

    for (int i = 0; !acabou; i++) {
      for (int j = 0; j <= i; j++) {
        if (numberlist.length == 1) {
          acabou = true;
          break;
        }
        numberlist = Arrays.copyOfRange(numberlist, 1, numberlist.length);
      }
      quantLinhas++;
    }

    return quantLinhas;
  }

  private void imprimePiramideLines() {
    int contador = 0;
    System.out.print("[");
    for (PiramideLines line : this.piramideLines) {
      if (line == null) {
        break;
      }
      if (contador > 0) {
        System.out.print(", ");
      }
      System.out.print(Arrays.toString(line.getLine()));
      contador++;
    }
    System.out.println("]");

  }

  private void buildMenoresValores() {
    int[] menoresValores = new int[getQuantLinhas()];
    int contador = 0;

    for (PiramideLines line : this.piramideLines) {
      if (line == null) {
        break;
      }
      int menor = getMenorValor(line.getLine());
      menoresValores[contador] = menor;
      contador++;
    }

    this.menoresValores = menoresValores;
  }

  private int getMenorValor(int[] array) {
    int menor = 100;

    for (int i = 0; i < array.length; i++) {
      if (array[i] < menor && array[i] != 0) {
        menor = array[i];
      }
    }
    return menor;
  }

  private void imprimeMenoresValores() {
    buildMenoresValores();
    System.out.println(Arrays.toString(this.menoresValores));
  }

  private int somaMenoresValores() {
    int soma = 0;

    for (int i = 0; i < this.menoresValores.length; i++) {
      soma += this.menoresValores[i];
    }

    return soma;
  }

  private void imprimeSomaMenoresValores() {
    System.out.println("A soma dos menores valores de cada linha é: " + somaMenoresValores());
  } 
}

class PiramideLines {
  private int[] line;

  public PiramideLines(int[] array) {
    this.line = new int[array.length];
    System.arraycopy(array, 0, this.line, 0, array.length);
  }

  public int[] getLine() {
    return line;
  }
}
