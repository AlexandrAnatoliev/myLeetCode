* Компиляция теста test_check
```
g++ -std=c++11 test_check.cpp -lgtest -lgtest_main -pthread -o test_check
```

* Запуск
```
./test_check
```

* Компиляция теста test_calc
```
g++ -std=c++11 test_calculator.cpp Calculator.cpp -lgtest -lgtest_main -pthread -o test_calc
```

* Если файлы лежат в разных папках
```
g++ -std=c++11 -I./include test/test_calculator.cpp src/Calculator.cpp -lgtest -lgtest_main -pthread -o test_calc
```

* Запуск
```
./test_calculator
```
