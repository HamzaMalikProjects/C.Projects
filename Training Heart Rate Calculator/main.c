// Hamza Malik. All rights reserved!// The heart rate calculated is in bpm#include <stdio.h>#include <math.h>intmain(void){ int age ,RHR;char gender, fitness;double INTEN, MHR, THR;//Enter your Gender m or fprintf ("Enter your biological gender 'm' for male and 'f' for female:\n");scanf ("%c", &gender);// Enter your ageprintf ("Enter your age\n");scanf ("%d", &age);// Enter your resting heart rateprintf ("Enter your resting heart rate\n");scanf ("%d", &RHR);//Enter your fitness levelgetchar();printf("Enter your fitness lever as low 'l', medium 'm' or high 'h': \n");scanf ("%c", &fitness);switch(gender){case 'm':case 'M':MHR = 203.7/(1+exp(0.033*(age-104.3)));break;case 'f':case 'F':MHR = 190.2/(1+exp(0.0453*(age-107.5)));break;}switch(fitness){case 'l':case 'L':INTEN = 0.55;break;case 'm':case 'M':INTEN = 0.65;break;case 'h':case 'H':INTEN = 0.80;break;} // Displays your training heart rate in bpmTHR = (MHR - RHR) * INTEN + RHR;printf("Your training heart rate is %1f bpm" , THR);return(0);}