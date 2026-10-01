# Engineering Calculator

A modular and extensible engineering calculator built with **C++**, designed as a practical project for learning and applying professional C++ programming concepts.

The project provides a collection of mathematical and engineering-oriented operations through a command-line interface, with a focus on clean code organization, reusable components, input validation, and persistent calculation history.

> **Project Status:** Active Development 🚧

---

## ✨ Features

* Basic arithmetic operations

  * Addition
  * Subtraction
  * Multiplication
  * Division
* Percentage calculations
* Power and exponentiation
* Square root
* Nth root
* Factorial
* Logarithmic calculations

  * Natural logarithm
  * Base-10 logarithm
* Trigonometric calculations
* Inverse trigonometric calculations

  * ArcSin
  * ArcCos
* Average calculation
* Calculation history
* Input validation and error handling
* Modular C++ project structure

---

## 🛠️ Technologies

* **C++**
* **Standard Library**
* `std::filesystem`
* Modular header/source architecture
* Git & GitHub

---

## 📁 Project Structure

```text
Engineering-Calculator/
│
├── .gitignore
│
├── include/
│   ├── History/
│   │   ├── History.h
│   │   └── History.cpp
│   │
│   ├── Input/
│   │   ├── Input.h
│   │   └── Input.cpp
│   │
│   ├── Log/
│   │   ├── Log.h
│   │   └── Log.cpp
│   │
│   ├── Math/
│   │   ├── Math.h
│   │   └── Math.cpp
│   │
│   ├── Message/
│   │   ├── Message.h
│   │   └── Message.cpp
│   │
│   └── Out/
│       └── Out.hpp
│
└── src/
    └── EngineeringCalculator.cpp
```

### Architecture

The project is divided into several modules, each responsible for a specific part of the application:

| Module    | Responsibility                              |
| --------- | ------------------------------------------- |
| `Math`    | Mathematical calculations and operations    |
| `Input`   | User input and input validation             |
| `History` | Storing and managing calculation history    |
| `Log`     | Logging and error-related functionality     |
| `Message` | Application messages and user-facing output |
| `Out`     | Output-related utilities                    |
| `src`     | Main application flow                       |

This separation makes the project easier to maintain and provides a foundation for future refactoring.

---

## 🚀 Getting Started

### Requirements

* Windows
* A modern C++ compiler
* C++17 or newer recommended
* Git

### Clone the repository

```bash
git clone https://github.com/KIANSADR/Engineering-Calculator.git
```

```bash
cd Engineering-Calculator
```

### Build

Open the project using your preferred C++ development environment and compile the source files with a C++17-compatible compiler.

---

## 💻 Usage

After building and running the application, the calculator provides an interactive command-line menu.

The user can select an operation, provide the required values, and receive the calculated result.

Some operations also perform input validation to prevent invalid mathematical operations.

---

## 🧠 What This Project Demonstrates

This project is also a practical C++ learning project and focuses on applying concepts such as:

* Functions
* References
* Pointers
* Structures
* Namespaces
* Templates
* Header/source separation
* Static variables
* `constexpr` / `consteval`
* Arrays
* Bitwise operations
* Memory concepts
* Standard Library usage
* File handling
* Filesystem operations
* Modular program architecture
* Git and GitHub workflow

The project will continue to evolve as more advanced C++ concepts are introduced.

---

## 🔧 Development Philosophy

The main goal of this project is not simply to create a calculator.

It is being developed as a practical environment for understanding how larger C++ applications are structured and maintained.

The project will gradually evolve from a command-line calculator into a more structured and maintainable C++ application while introducing increasingly advanced programming concepts.

---

## 📄 License

License information will be added as the project develops.

---

## 👤 Author

**KIANSADR**

GitHub:
https://github.com/KIANSADR

---

## ⭐ Compile Code

compile: g++ -std=c++20 -Iinclude -Iinclude/Log  -Iinclude/Input -Iinclude/Out  -Iinlcude/Math -Iinclude/Message -Iinclude/History src/EngineeringCalculator.cpp include/Log/Log.cpp include/Input/Input.cpp include/Out/Out.hpp include/Math/Math.cpp include/Message/Message.cpp include/History/History.cpp -o main

run: ./main

