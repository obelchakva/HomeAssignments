#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Weapon {
public:
	Weapon(const std::string& name) : name_(name) {}
	std::string getName() const { return name_;}

private:
	std::string name_;
};

class Transformer {
public:
	Transformer(const std::string& name, int powerLevel, int speed,
const Weapon& weapon);
	virtual ~Transformer();

	std::string getName() const;
	int getPowerLevel() const;
	int getSpeed() const;

	void setPowerLevel(int power);
	void setSpeed(int speed);
	virtual std::string attack() const;

private:
	std::string name_;
	int powerLevel_;
	int speed_;
	Weapon weapon_;
};

#endif
