# Лабораторная работа №5 — Знакомство с CI/CD (GitHub Actions)

Репозиторий-шаблон под CMake/C++ с простыми unit-тестами и настроенным workflow `main.yml`, 
который запускает сборку и тесты на двух раннерах: **ubuntu-latest** и **windows-latest** после каждого `push`.

## Структура
```text
.
├── .github/workflows/main.yml     # Workflow GitHub Actions
├── CMakeLists.txt                 # CMake-конфигурация
├── include/rectangle.h            # Заголовок модуля
├── src/rectangle.cpp              # Реализация модуля
├── src/main.cpp                   # Мини-пример (не обязателен для тестов)
├── tests/test_rectangle.cpp       # Юнит-тесты (assert)

```

## Локальный запуск
Требуется CMake 3.16+ и компилятор C++17.
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
ctest --test-dir build -C Release --output-on-failure
```
На Windows (PowerShell) команды те же. Если используете MSVC, параметр `-C Release` обязателен.

## GitHub Actions
Workflow автоматически запускается на каждый `push`.

Шаги:
1. Создайте новый пустой репозиторий на GitHub.
2. Инициализируйте локально и залейте:
   ```bash
   git init
   git add .
   git commit -m "Lab 5: CI/CD with GitHub Actions"
   git branch -M main
   git remote add origin <URL_ВАШЕГО_РЕПОЗИТОРИЯ>
   git push -u origin main
   ```
3. Откройте вкладку **Actions** в репозитории — увидите запущенный workflow.
4. После успешного завершения сделайте скриншот и положите его в `report/` (например, `report/ci_success.png`), затем коммит:
   ```bash
   git add report/ci_success.png
   git commit -m "Add CI screenshot to report"
   git push
   ```

## Что проверяет CI
- Конфигурация и сборка CMake проекта
- Запуск набора тестов через `ctest`

## Лицензия
MIT
