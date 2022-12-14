
#ifndef POA_OVERCOOKED_PLATE_H
#define POA_OVERCOOKED_PLATE_H

namespace environment {
    namespace objects {
        enum class PlateState {
            empty,
            steakOnly,
            friesOnly,
            ready
        };

        class Plate {
        public:
            PlateState state;

            Plate();

            bool isEmpty();

            bool isReady();

            bool containsSteak();

            bool containsFries();

            void setEmpty();
            void setSteakOnly();
            void setFriesOnly();
            void setReady();

            void print_state();
        };
    }
}

#endif //POA_OVERCOOKED_PLATE_H
