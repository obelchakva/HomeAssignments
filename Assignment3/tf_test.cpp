/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Prime.h"

TEST(TransformerTest, InitializationTest) {
    Weapon weapon("Laser");

    Transformer transformer("Optimus", 100, 50, weapon);
    EXPECT_EQ(transformer.getName(), "Optimus");
    EXPECT_EQ(transformer.getPowerLevel(), 100);
    EXPECT_EQ(transformer.getSpeed(), 50);

    transformer.setPowerLevel(120);
    transformer.setSpeed(60);
    EXPECT_EQ(transformer.getPowerLevel(), 120);
    EXPECT_EQ(transformer.getSpeed(), 60);
}

TEST(TransformerTest, AttackTest) {
    Weapon weapon("Sword");
    Transformer transformer("Megatron", 80, 40, weapon);
    EXPECT_EQ(transformer.attack(), "Attack with Sword");
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

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
