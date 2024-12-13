/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>

class Weapon {
public:
	Weapon(const std::string& name) : name_(name) {}
	std::string getName() const { return name_;}

	friend std::ostream& operator<<(std::ostream& os, const Weapon& weapon) {
		os << weapon.name_;
		return os;
	}

private:
	std::string name_;
};

class Transformer {
public:
	Transformer(const std::string& name);
	Transformer(const std::string& name, int powerLevel);
	Transformer(const std::string& name, int powerLevel, int speed, const Weapon& weapon);
	virtual ~Transformer();

	std::string getName() const;
	int getPowerLevel() const;
	int getSpeed() const;

	void setPowerLevel(int power);
	void setSpeed(int speed);
	virtual std::string attack() const;

	friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

	bool operator<(const Transformer& other) const;
	bool operator>(const Transformer& other) const;
	bool operator==(const Transformer& other) const;
	bool operator!=(const Transformer& other) const;

private:
	std::string name_;
	int powerLevel_;
	int speed_;
	Weapon weapon_;
};

#endif
