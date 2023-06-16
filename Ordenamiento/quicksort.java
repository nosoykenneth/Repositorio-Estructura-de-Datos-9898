public class quicksort {
    public static void intercambiar(int[] arreglo, int a, int b) {
        int temp = arreglo[a];
        arreglo[a] = arreglo[b];
        arreglo[b] = temp;
    }

    public static int particionar(int[] arreglo, int izquierda, int derecha) {
        int pivote = arreglo[izquierda];
        int i = izquierda + 1;
        int j = derecha;

        while (true) {
            while (i <= j && arreglo[i] <= pivote) {
                i++;
            }
            while (i <= j && arreglo[j] >= pivote) {
                j--;
            }
            if (i < j) {
                intercambiar(arreglo, i, j);
            } else {
                break;
            }
        }

        intercambiar(arreglo, izquierda, j);
        return j;
    }

    public static void quicksort(int[] arreglo, int izquierda, int derecha) {
        if (izquierda < derecha) {
            int indicePivote = particionar(arreglo, izquierda, derecha);
            quicksort(arreglo, izquierda, indicePivote - 1);
            quicksort(arreglo, indicePivote + 1, derecha);
        }
    }

    public static void main(String[] args) {
        int[] arreglo = {21, 40, 4, 9, 10, 35};

        quicksort(arreglo, 0, arreglo.length - 1);

        System.out.print("Arreglo ordenado: ");
        for (int i = 0; i < arreglo.length; i++) {
            System.out.print(arreglo[i] + " ");
        }
        System.out.println();
    }
}
