//
// Created by Амир Кашапов on 26.02.2024.
//

#ifndef CPPDUNGEON_MOVERIGHT_H
#define CPPDUNGEON_MOVERIGHT_H
#include "Action.h"
#include "ActionsChanger.h"
class MoveRight:public Action, public ActionsChanger{
public:
    void act(Player*) override;
};
#endif //CPPDUNGEON_MOVERIGHT_H
