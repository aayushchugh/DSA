class Main {
  public static void main(String[] args) {
    int row, column, y;
    System.out.println("Multiplication table");
    row = 1;
    do {
       column = 1;
       do {
        y = row * column;
        System.out.println(" " + y);
        column = column + 1;
       } while (column <=3);
       System.out.println("\n");
       row = row + 1;
    } while(row <=3);
  }
}