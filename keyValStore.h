//
// Created by HP on 09.04.2022.
//

typedef struct KeyValue_{
    char key[50];
    char value[50];
}KeyValue;


int put(char *key, char *value);
int get(char *key, char *res);
int del(char *key);
void testarray();
#ifndef PRAKTIKUM_KEYVALSTORE_H
#define PRAKTIKUM_KEYVALSTORE_H

#endif //PRAKTIKUM_KEYVALSTORE_H
