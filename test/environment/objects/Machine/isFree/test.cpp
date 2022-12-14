#include <gtest/gtest.h>
#include "environment/objects/Machine/Machine.h"

using namespace environment::objects;

TEST(environment_objects_Machine_isFree, freeState) {
    Machine machine;

    machine.state = MachineState::free;

    EXPECT_TRUE(machine.isFree());
}

TEST(environment_objects_Machine_isFree, cookingState) {
    Machine machine;

    machine.state = MachineState::cooking;

    EXPECT_FALSE(machine.isFree());
}

TEST(environment_objects_Machine_isFree, readyState) {
    Machine machine;

    machine.state = MachineState::ready;

    EXPECT_FALSE(machine.isFree());
}

TEST(environment_objects_Machine_isFree, hasProblemState) {
    Machine machine;

    machine.state = MachineState::hasProblem;

    EXPECT_FALSE(machine.isFree());
}
