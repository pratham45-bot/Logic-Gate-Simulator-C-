# 🧠 Logic Gate Simulator (C++)

A console-based **Logic Gate Simulator** built using C++ and Object-Oriented Programming principles.  
This project simulates fundamental digital logic gates and demonstrates runtime polymorphism using dynamic binding.

---

## 🚀 Project Overview

This simulator allows users to:

- Select different logic gates  
- Provide binary inputs (0 or 1)  
- Execute the selected logic operation  
- Chain operations using the previous result  
- View complete operation history  

The project focuses on implementing core OOP concepts in a practical way.

---

## 🏗️ OOP Concepts Used

### ✅ Abstraction
An abstract base class `logicGate` defines a pure virtual function:

```cpp
virtual int execute() = 0;
```

---

### ✅ Inheritance
Each logic gate (AND, OR, NOT, etc.) inherits from the base class:

```cpp
class AND : public logicGate
```

---

### ✅ Polymorphism
A base class pointer is used:

```cpp
logicGate* ptr;
```

This enables dynamic binding at runtime.

---

### ✅ Dynamic Binding
The `virtual` keyword ensures that the correct `execute()` function is called depending on which gate object the pointer references.

---

## 🔢 Supported Logic Gates

- AND  
- OR  
- NOT  
- XOR  
- NAND  
- NOR  
- XNOR (optional)

---

## ⚙️ Features

- Menu-driven interface  
- Binary input validation (0 or 1)  
- Gate chaining  
- Operation history tracking using `vector<string>`  
- Dynamic memory allocation using `new` and `delete`  
- Clean OOP structure  

---

## 🖥️ Sample Output

```
1--AND
2--OR
3--NOT
4--XOR
5--NAND
6--NOR
7--Exit
8--History

Your Choice: 1
Enter Input 1: 1
Enter Input 2: 1

Result: 1
```

History Example:

```
--- Operation History ---
1) AND(1,1) = 1
2) XOR(1,0) = 1
3) NOT(1) = 0
```

---

## 📂 Project Structure

```
LogicGateSimulator/
│
├── main.cpp
└── README.md
```

---

## 🛠️ Compilation & Execution

### Using g++ (Windows / Linux / Mac)

Compile:

```bash
g++ main.cpp -o logicSimulator
```

Run:

```bash
./logicSimulator
```

### Windows (MinGW)

```bash
g++ main.cpp -o logicSimulator.exe
logicSimulator.exe
```

---

## 📈 Future Improvements

- Add file-based history saving  
- Add GUI version  
- Implement full circuit simulation  
- Improve input validation  
- Replace raw pointers with smart pointers  

---

## 🎯 Learning Outcomes

This project demonstrates:

- Runtime Polymorphism  
- Virtual Functions  
- Abstract Classes  
- Dynamic Memory Management  
- STL usage (`vector`, `string`)  
- Menu-driven program design  

---

## 👨‍💻 Author

Prathamesh Mohite
FY electrical Engineer
Intrested Field:-VLSI, Electrical Vehicle,Embadded,IoT

