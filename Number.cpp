////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                        //
// CONSTRUCTOR / DESTRUCTOR                                                               //
//                                                                                        //
////////////////////////////////////////////////////////////////////////////////////////////

#include "Number.h"


Number::Number() 

{ 

    this->run();

}; 


Number::~Number() { };

////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                        //
//                                   FUNCTIONS                                            //
//                                                                                        //
////////////////////////////////////////////////////////////////////////////////////////////

int Number::find_sum(vector<int>&digits)
{
    /////////////////////////////////////////////////////////////////////////////////////


    ++digits[5];
    
    if(digits[5]==13){
        ++digits[4];
        digits[5]=0;
    }
    
    if(digits[4]==13){
        ++digits[3];
        digits[4]=0;
    }
    
    if(digits[3]==13){
        ++digits[2];
        digits[3]=0;
    }
    
    if(digits[2]==13){
        ++digits[1];
        digits[2]=0;
    }
    
    if(digits[1]==13){
        ++digits[0];
        digits[1]=0;
    }
    
    

     /////////////////////////////////////////////////////////////////////////////////////
     return digits[0]+digits[1]+digits[2]+digits[3]+digits[4]+digits[5];
};

void Number::run()
{
    /////////////////////////////////////////////////////////////////////////////////////

    
    vector<long>sums(73);
    vector<int>digits(6,0);

    while(true)
    {
        ++sums[sum];
        if(sum==72){break;}

        sum = find_sum(digits);
    
    }
    

    for(int i=0;i<sums.size();++i)
    {
        res += sums[i]*sums[i]*13;
        
    }
    
    
    cout<<"*************"<<"\n"<<res<<"\n"<<"*************"<<"\n";

    /////////////////////////////////////////////////////////////////////////////////////
    return;

};
