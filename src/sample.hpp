#ifndef _class_sample_
#define _class_sample_

class Sample
{
    private:
    int item;

    public:
    Sample(int value){item = value;}
    virtual ~Sample(){}
    int SetValue(int value){int back = item; item = value; return back;}
    int GetValue(){return item;}
    int AddAllNumberFromZero();
};

#endif