//
// Created by Tobi on 02.05.2022.
//

#ifndef PRAKTIKUM_USERINTERACTION_H
#define PRAKTIKUM_USERINTERACTION_H

#include "keyValStore.h"

int user_interact(int fileDescriptor, KeyValueDatabase *db);
int user_show_unavailable(int fileDescriptor);

#endif //PRAKTIKUM_USERINTERACTION_H
