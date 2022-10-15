
#include "Machine.h"

namespace environment {
    Machine::Machine(): state{free} {}

    bool Machine::isFree() {
        return state == MachineState::free;
    }

    bool Machine::isCooking() {
        return state == MachineState::cooking;
    }

    bool Machine::isReady() {
        return state == MachineState::ready;
    }

    bool Machine::hasProblem() {
        return state == MachineState::hasProblem;
    }
} // environment