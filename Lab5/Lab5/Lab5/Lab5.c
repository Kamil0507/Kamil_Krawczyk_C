#include <stdio.h>

unsigned long long silnia(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * silnia(n - 1);
}

int a_n(int n2) {
    if (n2 == 1) {
        return -1;
    }
    return -a_n(n2 - 1) * n2 - 2;
}

int nwd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return nwd(b, a % b);
}

void Binar(int n5) {
    if (n5 == 0) {
        return;
    }
    Binar(n5 / 2);
    printf("%d", n5 % 2);
}

int fibonacci(int n6) {
    if (n6 == 0) {
        return 0;
    }
    else if (n6 == 1) {
        return 1;
    }
    else {
        return fibonacci(n6 - 1) + fibonacci(n6 - 2);
    }
}

int main() {

    //ZADANIE 1
    printf("ZADANIE 1 \n\n");

    int n;
    printf("Podaj liczbe: ");
    scanf_s("%d", &n);

    if (n < 0) {
        printf("Silnia nie jest zdefiniowana dla liczb ujemnych.\n");
        return 1;
    }

    printf("Silnia liczby %d wynosi: %llu\n", n, silnia(n));


    //ZADANIE 2
    printf("ZADANIE 2 \n\n");

    int n2;
    printf("Podaj n: ");
    scanf_s("%d", &n2);

    if (n2 < 1) {
        printf("Wartosc n musi byc wieksza lub rowna 1.\n");
        return 1;
    }

    printf("n-ty wyraz ciagu dla n = %d wynosi: %d\n", n, a_n(n));


    //ZADANIE 3
    printf("ZADANIE 3 \n\n");

    int a, b;
    printf("Podaj dwie liczby calkowite: ");
    scanf_s("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    printf("NWD(%d, %d) = %d\n", a, b, nwd(a, b));

    //ZADANIE 4
    //i 2 3 4 5 6 7 8
    //  1 1 3 3 5 5 9


     //ZADANIE 5
    printf("ZADANIE 5 \n\n");

    int n5;

    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf_s("%d", &n5);

    if (n5 == 0) {
        printf("0\n"); 
    }
    else {
        printf("Liczba w systemie dwojkowym: ");
        Binar(n5); 
        printf("\n");
    }


    //ZADANIE 6
    printf("ZADANIE 6 \n\n");

    int n6;

    printf("Podaj wartosc n: ");
    scanf_s("%d", &n6);

    if (n6 < 0) {
        printf("Ciag Fibonacciego nie jest zdefiniowany dla liczb ujemnych.\n");
    }
    else {
        printf("F(%d) = %d\n", n6, fibonacci(n6));
    }

    //ZADANIE 8
    //A
    //1024
    //512
    //8
    //2
    
    //B
    //2 2 4
    //2 3 8
    //3 3 27
    //5 2 25
    //2 5 32
    //10 2 100
    //10 10 1024


    return 0;
}
