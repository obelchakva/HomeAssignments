//Transformer.h
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>

class Transformer {
public:
    Transformer(const std::string& name, int powerLevel);
    virtual ~Transformer();

    std::string getName() const;
    int getPowerLevel() const;

    virtual void transform() const;
    virtual void openFire() const;
    virtual void ultraMove() const;

protected:
    std::string name_;
    int powerLevel_;
};

#endif

