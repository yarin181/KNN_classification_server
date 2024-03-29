#ifndef KNN_CLASSIFICATION_SERVER_COMMAND_H
#define KNN_CLASSIFICATION_SERVER_COMMAND_H
#include <string>
#include "../IO/DefaultIO.h"

//macros
#define UPLOAD_CSV_TRAIN "Please upload your local train CSV file."
#define UPLOAD_CSV_TEST "Please upload your local test CSV file."
#define ERROR "ERROR"
#define ERROR_MET "invalid value for metric"
#define ERROR_K "invalid value for K"
#define PS_UPLOAD "please upload data"
#define COMPLETE "classifying data complete"
#define CLASSIFY "please classify the data"
#define UPLOAD_COMPLETE "Upload complete"
#define INVALID_INPUT "invalid input"


using namespace std;
class Command {
protected:
    DefaultIO *dio;
public:
    string description;
    Command();

    //execute() abstract method
    virtual void execute() =0;

    //printDescription() abstract method
    void printDescription();
};


#endif //KNN_CLASSIFICATION_SERVER_COMMAND_H
