#ifndef STATS_H_
#define STATS_H_

struct Stats
{
	float average;
	float max;
	float min;
};

#define NULL_VALUE 0

struct Stats compute_statistics(const float* numberset, int setlength);
 
#endif
