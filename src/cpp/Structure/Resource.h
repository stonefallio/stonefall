//
// Created by David Oyeka on 6/25/18.
//

#ifndef STONEFALL_RESOURCE_H
#define STONEFALL_RESOURCE_H


#include "../Killable.h"

class Resource : public Killable {
    private:

    public:
        Resource(GridBlock& startingBlock);
};


#endif //STONEFALL_RESOURCE_H
