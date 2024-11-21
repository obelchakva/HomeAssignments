# Assignment 5
## Autor
Обельчак Вячеслав Андреевич, группа 24.Б81-мм
## Contacts
st129564@student.spbu.ru obelchakva@gmail.com
## Description
Weapon: A class for weapons with a name and a method to retrieve it. Supports output via the << operator.
Transformer: The base class for all transformers with attributes (name, power level, speed, weapon) and methods (attack, comparison operators, and virtual methods: transform, openFire, ultraMove).
Autobot: Inherits from Transformer, adds the ability to fly, and overrides attack and virtual methods.
Decepticon: Inherits from Transformer, adds a list of abilities and unique behavior for virtual methods.
Prime: Leader of the Autobots, inherits from Autobot, and provides specialized methods.
main.cpp:
   Creates objects of various types.
   Demonstrates the functionality of methods, operators, and polymorphism.
   Uses a vector of pointers to call virtual methods dynamically.
## Build
make
## Run
./transformers
