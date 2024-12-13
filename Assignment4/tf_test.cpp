/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Prime.h"

TEST(TransformerTest, InitializationTest) {
    Weapon weapon("Laser");

    Transformer transformer1("Optimus");
    EXPECT_EQ(transformer1.getName(), "Optimus");
    EXPECT_EQ(transformer1.getPowerLevel(), 0);
    EXPECT_EQ(transformer1.getSpeed(), 0);

    Transformer transformer2("Megatron", 80);
    EXPECT_EQ(transformer2.getName(), "Megatron");
    EXPECT_EQ(transformer2.getPowerLevel(), 80);
    EXPECT_EQ(transformer2.getSpeed(), 0);

    Transformer transformer3("Bumblebee", 70, 50, weapon);
    EXPECT_EQ(transformer3.getName(), "Bumblebee");
    EXPECT_EQ(transformer3.getPowerLevel(), 70);
    EXPECT_EQ(transformer3.getSpeed(), 50);
}

TEST(TransformerTest, AttackTest) {
    Weapon weapon("Sword");
    Transformer transformer("Megatron", 80, 40, weapon);
    EXPECT_EQ(transformer.attack(), "Attack with Sword");
}

TEST(TransformerTest, ComparisonTest) {
    Transformer optimus("Optimus", 100);
    Transformer megatron("Megatron", 80);
    
    EXPECT_TRUE(optimus > megatron);
    EXPECT_FALSE(optimus < megatron);
    EXPECT_TRUE(optimus != megatron);

    Transformer optimusClone("Optimus", 100);
    EXPECT_TRUE(optimus == optimusClone);
}

TEST(TransformerTest, OutputOperatorTest) {
    Weapon weapon("Blaster");
    Transformer transformer("Optimus", 100, 70, weapon);
    
    std::ostringstream oss;
    oss << transformer;
    EXPECT_EQ(oss.str(), "Transformer Name: Optimus, Power Level: 100, Speed: 70, Weapon: Blaster");
}

TEST(AutobotTest, InitializationTest) {
    Weapon weapon("Blaster");
    Autobot autobot("Bumblebee", 70, 55, weapon, true);

    EXPECT_EQ(autobot.getName(), "Bumblebee");
    EXPECT_EQ(autobot.getPowerLevel(), 70);
    EXPECT_EQ(autobot.getSpeed(), 55);
    EXPECT_TRUE(autobot.getCanFly());
}

TEST(AutobotTest, AttackTest) {
    Weapon weapon("Particle Cannon");
    Autobot autobot("Ironhide", 90, 45, weapon, false);
    EXPECT_EQ(autobot.attack(), "Attack with Particle Cannon (Autobot)");
}

TEST(AutobotTest, OutputOperatorTest) {
    Weapon weapon("Shield");
    Autobot autobot("Ratchet", 60, 40, weapon, false);

    std::ostringstream oss;
    oss << autobot;
    EXPECT_EQ(oss.str(), "Transformer Name: Ratchet, Power Level: 60, Speed: 40, Weapon: Shield, Can Fly: No");
}

TEST(DecepticonTest, InitializationTest) {
    Weapon weapon("Flamethrower");
    std::vector<std::string> abilities = {"Invisibility", "Teleportation"};
    Decepticon decepticon("Starscream", 85, 60, weapon, abilities);

    EXPECT_EQ(decepticon.getName(), "Starscream");
    EXPECT_EQ(decepticon.getPowerLevel(), 85);
    EXPECT_EQ(decepticon.getSpeed(), 60);
    EXPECT_EQ(decepticon.getSpecialAbilities(), abilities);
}

TEST(DecepticonTest, AttackTest) {
    Weapon weapon("Shadow Blade");
    Decepticon decepticon("Soundwave", 75, 50, weapon, {});
    EXPECT_EQ(decepticon.attack(), "Attack with Shadow Blade (Decepticon)");
}

TEST(DecepticonTest, OutputOperatorTest) {
    Weapon weapon("Missile Launcher");
    std::vector<std::string> abilities = {"Flight"};
    Decepticon decepticon("Thundercracker", 70, 55, weapon, abilities);

    std::ostringstream oss;
    oss << decepticon;
    EXPECT_EQ(oss.str(), "Transformer Name: Thundercracker, Power Level: 70, Speed: 55, Weapon: Missile Launcher, Special Abilities: Flight ");
}

TEST(PrimeTest, InitializationTest) {
    Weapon weapon("Matrix of Leadership");
    Prime prime("Optimus Prime", 100, 70, weapon, true);

    EXPECT_EQ(prime.getName(), "Optimus Prime");
    EXPECT_EQ(prime.getPowerLevel(), 100);
    EXPECT_EQ(prime.getSpeed(), 70);
    EXPECT_TRUE(prime.getCanFly());
}

TEST(PrimeTest, AttackTest) {
    Weapon weapon("Energy Axe");
    Prime prime("Optimus Prime", 100, 70, weapon, true);
    EXPECT_EQ(prime.attack(), "Attack with Energy Axe (Autobot) (Prime)");
}

TEST(PrimeTest, OutputOperatorTest) {
    Weapon weapon("Matrix");
    Prime prime("Rodimus Prime", 95, 65, weapon, true);

    std::ostringstream oss;
    oss << prime;
    EXPECT_EQ(oss.str(), "Transformer Name: Rodimus Prime, Power Level: 95, Speed: 65, Weapon: Matrix, Can Fly: Yes");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
