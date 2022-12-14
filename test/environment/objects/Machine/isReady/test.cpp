#include <gtest/gtest.h>
#include "environment/objects/Machine/Machine.h"

using namespace environment::objects;

TEST(environment_objects_Machine_isReady, freeState) {
    Machine machine;

    machine.state = MachineState::free;

    EXPECT_FALSE(machine.isReady());
}

TEST(environment_objects_Machine_isReady, cookingState) {
    Machine machine;

    machine.state = MachineState::cooking;

    EXPECT_FALSE(machine.isReady());
}

TEST(environment_objects_Machine_isReady, readyState) {
    Machine machine;

    machine.state = MachineState::ready;

    EXPECT_TRUE(machine.isReady());
}

TEST(environment_objects_Machine_isReady, hasProblemState) {
    Machine machine;

    machine.state = MachineState::hasProblem;

    EXPECT_FALSE(machine.isReady());
}
