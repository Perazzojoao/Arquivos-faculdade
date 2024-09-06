import arvoreBinaria.NoArvore;

public class App {
    public static void main(String[] args) throws Exception {
        NoArvore abb = new NoArvore();

        abb = abb.adicionar(abb, 10);
        abb = abb.adicionar(abb, 5);
        abb = abb.adicionar(abb, 15);
        abb = abb.adicionar(abb, 3);
        abb = abb.adicionar(abb, 7);
        abb = abb.adicionar(abb, 12);
        abb = abb.adicionar(abb, 20);

        System.out.println("Exibindo a árvore em ordem crescente:");
        abb.exibir(abb);
        System.out.println();

        System.out.println("Buscando o valor 7:");
        NoArvore no = abb.buscar(abb, 7);
        if (no != null) {
            System.out.println("Valor encontrado: " + no.valor);
        } else {
            System.out.println("Valor não encontrado");
        }

        System.out.println("Buscando o valor 8:");
        no = abb.buscar(abb, 8);
        if (no != null) {
            System.out.println("Valor encontrado: " + no.valor);
        } else {
            System.out.println("Valor não encontrado");
        }

        System.out.println("Removendo o valor 5:");
        abb = abb.remover(abb, 5);
        System.out.println("Exibindo a árvore em ordem crescente:");
        abb.exibir(abb);
        System.out.println();

        System.out.println("Removendo o valor 15:");
        abb = abb.remover(abb, 15);
        System.out.println("Exibindo a árvore em ordem crescente:");
        abb.exibir(abb);
        System.out.println();

        System.out.println("Removendo o valor 10:");
        abb = abb.remover(abb, 10);
        System.out.println("Exibindo a árvore em ordem crescente:");
        abb.exibir(abb);

    }
}
