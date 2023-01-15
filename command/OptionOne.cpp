#include "OptionOne.h"

OptionOne::OptionOne(DefaultIO io,KNN* knn) {
    this.io=io;
    this->knn=knn;
}

void OptionOne::execute() {
    string labeled_str, unlabeled_str;;
    //asks for a csv path of the classified vectors
    this->dio->write(UPLOAD_CSV_TRAIN);
    //gets the csv content as a string
    labeled_str = this->dio->read();
    //asks for a csv path of the unclassified vectors
    this->dio->write(UPLOAD_CSV_TEST);
    //gets the csv content as a string
    unlabeled_str = this->dio->read();
    //insert the string into the knn data
    this->knn.loadVectorsList(labeled_str,unlabeled_str);
    //if the data is valid
    if(!(this->knn.validData)){
        return;
    }

}