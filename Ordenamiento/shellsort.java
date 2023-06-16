public class shellsort {
    public static void intercambiar(int[] arreglo, int a, int b) {
        int temp = arreglo[a];
        arreglo[a] = arreglo[b];
        arreglo[b] = temp;
    }

    public static void shellSort(int[] arreglo) {
        int longitud = arreglo.length;
        int gap = longitud / 2;
        while (gap > 0) {
            for (int i = gap; i < longitud; i++) {
                int temp = arreglo[i];
                int j = i;
                while (j >= gap && arreglo[j - gap] > temp) {
                    arreglo[j] = arreglo[j - gap];
                    j -= gap;
                }
                arreglo[j] = temp;
            }
            gap /= 2;
        }
    }

    public static void main(String[] args) {
        int[] arreglo = {21, 40, 4, 9, 10, 35};

        shellSort(arreglo);

        System.out.print("Arreglo ordenado: ");
        for (int i = 0; i < arreglo.length; i++) {
            System.out.print(arreglo[i] + " ");
        }
        System.out.println();
    }
}

