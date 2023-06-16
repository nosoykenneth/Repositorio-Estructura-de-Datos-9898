// La función recibe un arreglo de N elementos y se para el valor de N, que es el
// tamaño del arreglo

int bubblesort(int A[], int N)
{
    int i, j, AUX;
    // El siguiente ciclo for va a dar N-1 pasadas sobre todo el arreglo;
    // es decir, el numero de pasadas es igual al numero de elementos menos uno
    // para asegurar que el arreglo quede ordenado.

    for (i = 0; i < (N - 1); i++)
    {
        // El siguiente ciclo for representa una pasada sobre el arreglo
        // Solo se intercambian los primeros N-i-1 elementos, porque sabemos
        // que los elementos del final, van quedando ordenados en cada pasada
        for (j = 0; j < (N - i - 1); j++)
        {

            if (A[j - 1] > A[j])
            {
                AUX = A[j - 1];
                A[j - 1] = A[j];
                A[j] = AUX;
            }
        }
    }
    return 1;
}