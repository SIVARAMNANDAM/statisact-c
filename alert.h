#ifndef ALERTER_H_
#define ALERTER_H_

#define NULL_PTR  (void*)0

#define NO_OF_ALERTS 2

typedef void (*alerter_funcptr[NO_OF_ALERTS])(void);
void check_and_alert(float maxThreshold, alerter_funcptr alerters, struct Stats computedStats);
void emailAlerter(void);
void ledAlerter(void);

extern int emailAlertCallCount;
extern int ledAlertCallCount;

#endif /* ALERTER_H_ */
