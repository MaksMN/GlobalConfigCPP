# Глобальная конфигурация приложения.

Реализация Паттерна Singleton, который гарантирует, что у класса есть только один экземпляр, и предоставляет глобальную точку доступа к этому экземпляру.

>Недавно у меня возник вопрос почему я реализовал синглтон через приватные абстрактные классы если на этот паттерн достаточно пару тройку строчек кода. Мне просто не понравилось что у обычного синглтона инстансы доступны сами себе:

```cpp
Config::instance()->instance()->instance()->...;
```
>shared_ptr оказались очень капризны к приватным конструкторам. В итоге этот вариант делает открытыми только те поля и методы которые должны быть открыты.

### Описание приложения

Очень часто возникает ситуация, когда в приложении требуются глобальные данные, которые доступны в любом месте приложения и чтобы при изменении этих данных в одном классе их значения автоматически менялись в других классах. И при этом чтобы не надо было заботиться о передаче указателей и ссылок между классами.

В этом репозитории показан пример как можно организовать структуру данных, чтобы к ним можно было обращаться из любого класса.

Единая структура, которая позволяет хранить и получать доступ к единым данным из любого экземпляра любого класса вот таким образом:

```cpp
Config::i()->getValue();
Config::i()->setValue("new value");
```
Этот пример показывает, что где-то в классе Config есть некая Value, которую можно читать и менять в любом месте программы.
