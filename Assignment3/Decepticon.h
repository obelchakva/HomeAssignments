#ifndef DECEPTICONE_H
#define DECEPTICONE_H

#include "Transformer.h"
#include <vector>

class Decepticon : public Transformer {
public:
	Decepticone(const std::string& name, int powerLevel, int speed, const Weapon& weapon, const std::vector<std::string>&
abilities);

	std::vector<std::string> getSpecialAbilities() const;
	std::string attack() const override;

private:
	std::vector<std::string> specialAbilities_;

};

#endif
