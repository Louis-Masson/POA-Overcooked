
#ifndef POA_OVERCOOKED_TABLE_H
#define POA_OVERCOOKED_TABLE_H

namespace environment {
    enum TableState {
        hasPlate,
        hasNoPlate
    };

    class Table {
    public:
        TableState state;

        Table();
    };

} // environment

#endif //POA_OVERCOOKED_TABLE_H
