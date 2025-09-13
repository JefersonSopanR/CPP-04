# CPP-04

This repository contains four exercises (ex00 to ex03) focused on C++ object-oriented programming concepts, including inheritance, polymorphism, abstract classes, and deep copying. Each exercise is organized in its own directory and includes source files, headers, and a Makefile for building the project.

## Table of Contents
- [ex00](#ex00)
- [ex01](#ex01)
- [ex02](#ex02)
- [ex03](#ex03)

---

## ex00
**Topics:** Inheritance, Polymorphism, Virtual Functions

- Classes: `Animal`, `Cat`, `Dog`, `WrongAnimal`, `WrongCat`
- Demonstrates basic inheritance and the importance of virtual functions for proper polymorphic behavior.
- Run: `make` in the `ex00` directory, then execute the generated binary.

## ex01
**Topics:** Deep Copy, Composition

- Adds the `Brain` class and integrates it with `Cat` and `Dog`.
- Shows how to implement deep copying for member objects.
- Run: `make` in the `ex01` directory, then execute the generated binary.

## ex02
**Topics:** Abstract Classes, Pure Virtual Functions

- Refines the animal hierarchy with abstract classes and pure virtual functions.
- Further demonstrates deep copy and polymorphism.
- Run: `make` in the `ex02` directory, then execute the generated binary.

## ex03
**Topics:** Interface Implementation, Abstract Classes, Polymorphism

- Classes: `AMateria`, `Cure`, `Ice`, `Character`, `MateriaSource`, `ICharacter`, `IMateriaSource`
- Implements a system for equipping and using magical items (materia) with characters.
- Demonstrates interface-based design and dynamic polymorphism.
- Run: `make` in the `ex03` directory, then execute the generated binary.

---

## How to Build and Run
1. Navigate to the desired exercise directory (e.g., `cd ex00`).
2. Run `make` to build the project.
3. Execute the generated binary (usually `./ex00` or `./main`).
4. Clean build files with `make clean`.

## Requirements
- C++ compiler (e.g., g++)
- Make

## Author
Jeferson Sopan R

## License
This project is licensed under the MIT License.
