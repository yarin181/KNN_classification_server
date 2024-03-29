#ifndef ADVANCED_PROGRAMING_ASS2_KNN_H
#define ADVANCED_PROGRAMING_ASS2_KNN_H
#include <iostream>
#include "UnlabeledVector.h"
#include <vector>
#include "LabeledVector.h"
#include "Distance.h"
#include <map>
#include <list>

using namespace std;
/**
 * The KNN class stands for the object that handel the algorithm functionality.
 */
class KNN {
private:
    list<LabeledVector> Labeled_vectors;
    list<UnlabeledVector> Unlabeled_vectors;
    string classificationStr;
    int vecSize=0;
    string mat = "AUC";
    int k=5;
    bool validData=false;
    int vectNum=0;
public:
/**
 * sets the unlabeled  vectors list
 * @param (list<UnlabeledVector> list)
 */
    void setUnLabeledList(list<UnlabeledVector> list);
/**
 * sets the LabeledVector  vectors list
 * @param (list<LabeledVector> list)
 */
    void setLabeledList(list<LabeledVector> list);
/**
 * The Knn constructor
 * @return (string)
 */
KNN();
/**
 * classification string setter
 */
void setClassification(string s);
/**
 * classification string getter
 */
string getClassification();
/**
 * metric setter
 */
void setMat(string mat);
/**
 * k neighborhood setter
 */
void setK(int k);
/**
 * k neighborhood getter
 */
int getK();
/**
 * validData getter
 */
bool getValidData();
/**
 * mat getter
 */
string getMat();
/**
 * creat string that contain all the unlabeled vectors classification.
 */
void classification();
/**
 * the function gets 2 vectors and calculate the distance between them according
 * to the distance algorithm name the in the member mat
 *
 * @param (vector<double>,vector<double>)
 * @return (double)
 */
    double stringBasedMetricCalc(vector<double>,vector<double>);
/**
 * the function get vector and return it's classification by implements the KNN algorithm
 *
 * @param (vector<double>)
 * @return (string)
 */
    string findClassification(const vector<double>& vector);
/**
* sets the vector size
* @param int x
*/
    void setVectorSize(int x);
/**
 * returns the vectorSize
 * @return int
 */
    int getVectorsize();
    /**
 * returns the labeled vectors list
 * @return  list<LabeledVector>
 */
    list<LabeledVector> getLabeledList();
 /**
* returns the labeled vectors list
* @return  list<UnlabeledVector>
*/
    list<UnlabeledVector> getUnLabeledList();
 /**
* sets valid data parameter
* @param  bool
*/
    void setValidData(bool b);
/**
 * initial classification string getter
 */
    void initialClassification();
/**
 * initial vrcsize
 */
    void initialSize();
 /**
 * vectNum setter
 */
    void setVectNum(int x);
/**
 * vectNum getter
 */
    int getVectNum();
};


#endif //ADVANCED_PROGRAMING_ASS2_KNN_H
