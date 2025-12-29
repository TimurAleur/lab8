//#include <stdio.h>
//#include <conio.h>
//#include <locale.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define n 4  
//#define m 4
//
//void secavg(int arr[n][m], float* avg) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i][m - 1 - i];  
//    }
//    *avg = (float)sum / n;  
//}
//
//void main(void) {
//    setlocale(LC_ALL, "rus");
//    srand(time(NULL));
//    int arr[n][m];
//    printf("Массив: \n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            arr[i][j] = rand() % 30-10;
//            printf("%3d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    float avg;
//    secavg(arr, &avg);
//    printf("\nСреднее арифметическое элементов побочной диагонали: %.2f\n", avg);
//    _getch();
//}
//#include <stdio.h>
//#include <conio.h>
//#include <locale.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define n 4
//#define m 4
//
//void check(int mas[n][m], int a, int* pol, int* last) {
//    *pol = 0;
//    *last = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (mas[i][j] > 0) *pol = 1;
//            if (abs(mas[i][j]) % 10 == a) *last = 1;
//        }
//    }
//}
//void main(void) {
//    setlocale(LC_ALL, "rus");
//    srand(time(NULL));
//    int mas[n][m];
//    printf("Массив: \n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            mas[i][j] = rand() % 30 - 25;
//            printf("%3d ", mas[i][j]);
//        }
//        printf("\n");
//    }
//    int pol, last, a;
//    printf("\nВведите цифру для поиска последней цифры элементов: ");
//    scanf_s("%d", &a);
//    check(mas, a, &pol, &last);
//    if (pol == 1)
//        printf("В массиве есть положительный элемент.\n");
//    else
//        printf("Положительных элементов нет.\n");
//    if (last == 1)
//        printf("В массиве есть элемент с последней цифрой %d.\n", a);
//    else
//        printf("Элементов с последней цифрой %d нет.\n", a);
//    _getch();
//}
//#include <stdio.h>
//#include <conio.h>
//#include <locale.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define N 30  
//
//void massa(int arr[N], int* sum) {
//    *sum = 0;
//    for (int i = 0; i < N; i++) {
//        *sum += arr[i];
//    }
//}
//
//void main(void) {
//    setlocale(LC_ALL, "rus");
//    srand(time(NULL));
//    int arr[N];
//    printf("Массы предметов (кг): \n");
//    for (int i = 0; i < N; i++) {
//        arr[i] = rand() % 50 + 1; 
//        printf("%3d ", arr[i]);
//    }
//    printf("\n");
//    int sum;
//    massa(arr, &sum);
//    int capacity;
//    printf("\nВведите грузоподъемность автомобиля (кг): ");
//    scanf_s("%d", &capacity);
//    printf("Общая масса предметов: %d кг\n", sum);
//    if (sum <= capacity)
//        printf("Грузоподъемность не превышена.\n");
//    else
//        printf("Грузоподъемность превышена!\n");
//    _getch();
//}
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define N 25 

void ros(int mas[N], float* sr, int* k) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += mas[i];
    }
    *sr = (float)sum / N;

    *k = 0;
    for (int i = 0; i < N; i++) {
        if (mas[i] > *sr) {
            (*k)++;
        }
    }
}

void main(void) {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int r[N];
    printf("Рост учеников (см):\n");
    for (int i = 0; i < N; i++) {
        r[i] = rand() % 51 + 140;  
        printf("%3d ", r[i]);
    }
    printf("\n");
    float sr;
    int k;
    ros(r, &sr, &k);
    printf("\nСредний рост: %.2f см\n", sr);
    printf("Количество учеников выше среднего роста: %d\n", k);
    _getch();
}

/*Задачи из лабораторного практикума*/
/*Дополнительные изменения для задания*/
VTOROY CONFLICT
PROSTO TAK
Ne pon

