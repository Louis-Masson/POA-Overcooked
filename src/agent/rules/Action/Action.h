
#ifndef POA_OVERCOOKED_ACTION_H
#define POA_OVERCOOKED_ACTION_H

namespace agent {
    namespace rules {

        class Action {
            virtual void execute() = 0;
        };

    } // agent
} // rules

#endif //POA_OVERCOOKED_ACTION_H
