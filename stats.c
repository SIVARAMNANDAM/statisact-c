#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    if(	setlength!=0)
    {
    //finding avaerage of the given test set
    int i=0,sum=0;
    for(i=0;i<setlength;i++)
    {
        sum+=numberset[i];
    }
    s.average = sum/setlength;
    //finding minimum and maximum of a number
    s.max=s.min=numberset[0];
    for(i=1; i<setlength; i++)
    {
         if(s.min>numberset[i])
		  s.min=numberset[i];   
		   if(s.max<numberset[i])
		    s.max=numberset[i];       
    }
    }
    else
    {
	    s.average = NAN;
	    s.max = NAN;
	    s.min = NAN;
    }
    
    return s;  
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
