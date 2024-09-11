#include "SampleClass.h"

int main() {

    // заполняем структуру данными из ini файла
    Config::i()->ini_handle("config.sample.ini");

    // Создаем два разных экземпляра класса, который печатает данные из структуры
    SampleClass s1("Class_1");
    SampleClass s2("Class_2");

    // Печатаем значения из двух разных экземпляров. Структура едина для обоих экземпляров
    s1.print_config();
    s2.print_config();

    // меняем значения
    Config::i()->setIniString("New string");
    Config::i()->setIniInt(222222);
    Config::i()->setLocalParameter(3333333);

    //  и видим, что они изменились в обоих экземплярах
    s1.print_config();
    s2.print_config();
}