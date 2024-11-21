//Decepticon.h
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon(const std::string& name, int powerLevel);

    void transform() const override;
    void openFire() const override;
    void ultraMove() const override;
};

#endif

