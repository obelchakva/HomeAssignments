/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#ifndef DECEPTICONE_H
#define DECEPTICONE_H

#include "Transformer.h"
#include <vector>

class Decepticon : public Transformer {
public:
	Decepticon(const std::string& name, int powerLevel, int speed, const Weapon& weapon, const std::vector<std::string>&
abilities);

	std::vector<std::string> getSpecialAbilities() const;
	std::string attack() const override;

	friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);

private:
	std::vector<std::string> specialAbilities_;

};

#endif
