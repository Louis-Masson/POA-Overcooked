
#ifndef POA_OVERCOOKED_TABLE_H
#define POA_OVERCOOKED_TABLE_H

namespace environment {
    namespace objects {
        enum class TableState {
            hasPlate,
            hasNoPlate
        };

        class Table {
        public:
            TableState state;

            Table();

            bool hasPlate();

            void setPlate();
            void setNoPlate();

            void print_state();
        };
    }
}

#endif //POA_OVERCOOKED_TABLE_H
