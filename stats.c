#include "stats.h"
#include <math.h>

struct Stats compute_statistics(const float* numberset, int setlength)
{
	struct Stats s;
	float var = 0;
	if((numberset == NULL) || (setlength == NULL_VALUE))
	{
		/**Invalid arguments**/
		s.average = NAN;
		s.max = NAN;
		s.min = NAN;
	}/*end of if*/

	else
	{
		/**Valid arguments**/
		s.min = numberset[0];
		s.max = numberset[0];
		for(int i = 0; i < setlength ; i++)
		{
			var += numberset[i];
			/**Get the min value**/
			if(s.min > numberset[i] )
				s.min = numberset[i];
			/**Get the max value**/
			if(s.max < numberset[i] )
				s.max = numberset[i];
		}/*end of for loop*/
		s.average = var / setlength;

	}/*end of else*/

	return s;
}
