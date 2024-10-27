#include <iostream>

using namespace std;

class A {
public:
    void sum(double s1, double s2);
    int sum(int s1, int s2);
};

// Реализация метода для суммирования double
void A::sum(double s1, double s2) {
    cout << "Sum (double): " << s1 + s2 << endl;
}

// Реализация перегруженного метода для суммирования int
int A::sum(int s1, int s2) {
    cout << "Sum (int): " << s1 + s2 << endl;
    return s1 + s2; // Возвращаем результат
}

int main() {
    A obj;

    // Вызов метода с параметрами типа double
    obj.sum(3.5, 2.5);

    // Вызов перегруженного метода с параметрами типа int
    obj.sum(3, 5);

    return 0;
}