//
// Created by mor on 1/13/23.
//

#ifndef KNN_CLASSIFICATION_SERVER_OPTIONFIVE_H
#define KNN_CLASSIFICATION_SERVER_OPTIONFIVE_H
#include "Command.h"
#include "../utilities/KNN.h"

class OptionFive : public Command{
private:
    KNN* knn;
public:
/**
 *  default constructor
 */
    OptionFive();
/**
*  OptionFive constructor initial the parameters
* @param (DefaultIO * dio,KNN* knn)
*/
    OptionFive(DefaultIO *dio,KNN* knn);
/**
 *  write the classification string to a local file
 */
    void execute() override;
};

#endif //KNN_CLASSIFICATION_SERVER_OPTIONFIVE_H
