#include <gtest/gtest.h>
#include "environment/Machine.h"

using namespace environment;

TEST(Machine_isReady, freeState) {
    Machine machine;

    machine.state = MachineState::free;

    EXPECT_FALSE(machine.isReady());
}

TEST(Machine_isReady, cookingState) {
    Machine machine;

    machine.state = MachineState::cooking;

    EXPECT_FALSE(machine.isReady());
}

TEST(Machine_isReady, readyState) {
    Machine machine;

    machine.state = MachineState::ready;

    EXPECT_TRUE(machine.isReady());
}

TEST(Machine_isReady, hasProblemState) {
    Machine machine;

    machine.state = MachineState::hasProblem;

    EXPECT_FALSE(machine.isReady());
}
