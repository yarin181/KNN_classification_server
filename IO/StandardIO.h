#ifndef KNN_CLASSIFICATION_SERVER_STANDARDIO_H
#define KNN_CLASSIFICATION_SERVER_STANDARDIO_H


#include "DefaultIO.h"
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
using namespace std;
class StandardIO : public DefaultIO {
public:
    string read();
    void write(string string);
};


#endif //KNN_CLASSIFICATION_SERVER_STANDARDIO_H
