import java.util.Scanner;

public class App {
	public static void main(String[] args) throws Exception {
		imprimeApresentacao();

		Scanner scanner = new Scanner(System.in);
		int quantidade = 0;
		System.out.print("Digite a quantidade de caracteres desejada: ");

		while (true) {
			try {
				quantidade = scanner.nextInt();
				scanner.nextLine();
				if (quantidade > 0) {
					break;
				}
				System.out.print("\nDigite um número inteiro válido: ");
			} catch (Exception e) {
				System.out.print("\nDigite um número inteiro válido: ");
				scanner.next();
			}
		}

		piramide.Piramide meiaPiramide = new piramide.Piramide(quantidade);
		meiaPiramide.imprimeTela();

		System.out.println();
		System.out.println("Pressione Enter para terminar o programa...");
		scanner.nextLine();
		scanner.close();

		System.out.println("Programa terminado.");

	}

	public static void imprimeApresentacao() {
		System.out.println("""
				---------- Projeto de meia pirâmide ----------
				""");
	}
}
