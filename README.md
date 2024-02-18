# Вопрос №1

В прикреплённом архиве можно найти решение в файле isEven.h, а проверить работоспособность можно прямо в начале main функции. Я использовал побитовый оператор & для вывода последнего байта из аргумента и логический оператор ! для вывода необходимого результата работы функции.
Преимущество моего решения в скорости его работы, потому что операция модуля требует выполнения деления, которое значительно сложнее, чем побитовое &.
Недостаток моего метода в его читаемости. % является общепринятым подходом для определения чётности и не нуждается в представлении, в то время как & может вызвать некоторые вопросы и даже ввести в заблуждение некоторых программистов.

# Вопрос №2
Я написал реализации использующие vector и deque. Их реализацию можно найти в фалах CirculBuffer_1.cpp и CirculBuffer_2.cpp соотвественно.
Преимущества vector и недостатки deque: 
При небольших размерах буфера вектор будет занимать меньше памяти потому что дэк создаёт небольшие множества со значительным запасом (в разы).
Вектор позволяет быстрее обращаться к элементам потому что требует лишь одинарного разыменования указателя на значение.
Преимущества и недостатки vector:
При увеличении размера буфера вектор начнёт занимать значительно больше места из-за своих внутренних особенностей масштабизации при увеличении объёма. Также, ветору значительно сложнее, в целом, будет даваться увеличение буфера потому что в своей основе он имеет массив и в определённый момент ему будет необходимо пересоздать этот массив перенеся в него все имеющиеся значения, в то время как дэк состоит из указателей и не имеет таких слабостей.
Дэк имеет лучшие инструменты для работы с циклическим буфером, например, отдельные функции для добавления удаления первого элемента или нескольких элементов в интервале, что потенциально позволяет легче и понятней написать класс большей сложности и масштаба.
Процитирую документацию Microsoft: «Vectors должен быть предпочтительным контейнером для управления последовательностью, если случайный доступ к любому элементу находится в категории "Премиум", а вставки или удаления элементов требуются только в конце последовательности.»

# Вопрос №3
Для решения данной задачи я выбрал сортировку методом Хоара потому что она выполняет наименьшее количество сравнений чисел в сравнении с другими методами сортировки.
Решение можно найти в файле My_quick_sort.h.