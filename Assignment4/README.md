# Assignment 3
## Author
Обельчак Вячеслав Андреевич, группа 24.Б81-мм
## Contacts
st129564@student.spbu.ru, obelchakva@gmail.com
## Description
Classes:
Weapon:
A class representing a weapon used by transformers. It contains the name of the weapon and provides a method to retrieve it.
Transformer:
The base class representing a transformer. It contains common attributes such as name, power level, speed, and weapon.
Methods include getting/setting values and attacking (using the weapon).
Autobot (inherits from Transformer):
A class for Autobots (good transformers). It has an additional attribute indicating whether the transformer can fly.
Overrides the attack method to indicate that it's an Autobot attack.
Decepticon (inherits from Transformer):
A class for Decepticons (evil transformers). It includes a list of special abilities.
Overrides the attack method to indicate that it's a Decepticon attack.
Prime (inherits from Autobot):
A special class for the leaders of Autobots (Primes). It includes the same characteristics as Autobots but with additional specialization.
Overrides the attack method to indicate that it's a Prime attack.
Main Program (main.cpp):
Creates objects for various transformers (e.g., Optimus Prime, Megatron, and Ultra Magnus).
Demonstrates their usage by calling the attack methods and displaying the results.
Tests:
Google Test is used to verify the correctness of the classes:
tf_test.cpp: contains tests for all classes (object initialization, method functionality checks, value setting, etc.).
Makefile: manages the compilation of the program and tests, providing commands for their compilation and execution.
## Build
make
## Build and run test
make test
## Run
./transformers
## Run test
./tests
