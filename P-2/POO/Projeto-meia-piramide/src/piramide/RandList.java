package piramide;

import java.util.Random;

class RandList {

  private String strList;
  private int[] numberlist;

  RandList(int quant) {
    this.numberlist = new int[quant];
    randList(quant);
  }

  private static int rand() {
    Random rand = new Random();
    return rand.nextInt(100) + 1;
  }

  private void randList(int quant) {
    int randNumber;
    this.strList = "";
    for (int i = 0; i < quant; i++) {
      randNumber = rand();
      this.numberlist[i] = randNumber;
      this.strList += String.valueOf(randNumber) + " ";
    }
  }

  public int[] getNumberlist() {
    return numberlist;
  }

  public String getStrList() {
    return strList;
  }
}
