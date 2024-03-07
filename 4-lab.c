//
// Created by arsenii on 3/7/24.
//


#include "4-lab.h"
#include <stdio.h>


//Завдання 1
//Напишіть програму, яка обчислює площу прямокутника за допомогою змінних для довжин сторін.

double rectangleArea(double a, double b) {
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;
    return a * b;
}

void calculateRectangleArea() {

    double a = 0.0, b = 0.0;
    printf("Для розрахунку площі прямокутника треба ввести значення двох сторін: \n");

    printf("Введіть значення сторони a: ");
    scanf("%lf", &a);

    printf("Введіть значення сторони b: ");
    scanf("%lf", &b);

    printf("Площа прямокутника дорівнює: %.2lf\n", rectangleArea(a,b));
}







//Завдання 2
//Напишіть функцію для обчислення факторіалу числа.

int factorial(int number) {
    if (number == 0)
        return 1;
    if (number < 0)
        number *= -1;

    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}


void calculateFactorial() {
    int number = 0;
    printf("Для розрахунку факторіалу потрібно ввести значення: \n");
    printf("Введіть число: ");
    scanf("%d", &number);
    printf("Факторіал числа %d дорівнює: %d\n", number, factorial(number));
}






//Завдання 3
//Створіть програму для обчислення середнього значення масиву чисел.


double arrayAverage(int array[], int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    return (double) sum / size;
}



void calculateArrayAverage(){
    int size;
    printf("Для розрахунку середнього значення масиву потрібно ввести його розмір: \n");

    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &size);
    if (size < 1) {
      size*= -1;
    }
    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = i+1;
    }
    printf("Середнє арифметичне масиву: %.2lf\n", arrayAverage(array, size));
}