public class radixsort {
    public static int getMax(int[] arreglo) {
        int maximo = arreglo[0];
        for (int i = 1; i < arreglo.length; i++) {
            if (arreglo[i] > maximo) {
                maximo = arreglo[i];
            }
        }
        return maximo;
    }

    public static void countSort(int[] arreglo, int exp) {
        int[] conteo = new int[10];
        int[] resultado = new int[arreglo.length];

        for (int i = 0; i < arreglo.length; i++) {
            conteo[(arreglo[i] / exp) % 10]++;
        }

        for (int i = 1; i < 10; i++) {
            conteo[i] += conteo[i - 1];
        }

        for (int i = arreglo.length - 1; i >= 0; i--) {
            resultado[conteo[(arreglo[i] / exp) % 10] - 1] = arreglo[i];
            conteo[(arreglo[i] / exp) % 10]--;
        }

        for (int i = 0; i < arreglo.length; i++) {
            arreglo[i] = resultado[i];
        }
    }

    public static void radixSort(int[] arreglo) {
        int maximo = getMax(arreglo);

        int exp = 1;
        while (maximo / exp > 0) {
            countSort(arreglo, exp);
            exp *= 10;
        }
    }

    public static void main(String[] args) {
        int[] arreglo = {170, 45, 75, 90, 802, 24, 2, 66};

        radixSort(arreglo);

        System.out.print("Arreglo ordenado: ");
        for (int i = 0; i < arreglo.length; i++) {
            System.out.print(arreglo[i] + " ");
        }
        System.out.println();
    }
}

