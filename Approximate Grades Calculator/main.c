// Hamza Malik. All rights reserved!//overall mark is in %#include <stdio.h>#include <math.h>// Find weight of the quizzesdouble quizzes(){double sumquizzes,avgquizzes, weightquizzes, quizgrade_Temp;int numquizzes=0;//Asks user how many quizzes they haveprintf("How many quizzes?: ");//input for num of quizzesscanf("%d", &numquizzes);/*intilizaes an array for the quizzes marks whichis the length of the num of quizzes*/double quizzes[numquizzes];/*Initliazes for loop, to go through array,then Asks for quiz grade and Stores quiz markin corresponding array index*/for(int y=0;y<numquizzes;y++){printf("Enter the grade for quiz %d: ", y+1);scanf("%lf", &quizgrade_Temp);quizzes[y]=(quizgrade_Temp/10)*100;}for(int x=0;x<numquizzes;x++){for(int j=x+1;j<numquizzes;j++){if(quizzes[x]>=quizzes[j]){double temp=quizzes[x];quizzes[x]=quizzes[j];quizzes[j]=temp;}}}int cancel_2grades=numquizzes-(numquizzes-2);for(int y=cancel_2grades;y<numquizzes;y++){sumquizzes=sumquizzes+quizzes[y];}avgquizzes=sumquizzes/(numquizzes-2);weightquizzes=(avgquizzes/100)*25;return(weightquizzes);}struct weights_papers {double midtermWeightAchieved, finalWeightAchieved;};struct weights_papers papers(){doublemidterm,midtermWorth,midtermWeightAchieved,final,finalWorth,finalWeightAchieved;//Asks users to input midterm mark %printf("What is your midterm mark? in percent : ");scanf("%lf", &midterm);//Asks users to input final mark %printf("What is your final mark? in percent : ");scanf("%lf", &final);/*If the midterm mark is greater than or equal the final mark,then the midterm is worth 35% and the final is 40% */if(midterm>=final){midtermWorth=35;finalWorth=40;/*If the final mark is greater than the midterm mark,then midterm is worth 25% and the final is 50% */}else if(final>midterm){midtermWorth=25;finalWorth=50;} //Calclates weight of midterm acheivedmidtermWeightAchieved=(midterm/100)*midtermWorth;//Calclates weight of final acheivedfinalWeightAchieved=(final/100)*finalWorth;struct weights_papers s={midtermWeightAchieved,finalWeightAchieved};return(s);}int main(void){double quizzesWeight=quizzes();double sum;struct weights_papers s=papers();//Sums the final grade & prints itsum=quizzesWeight+s.midtermWeightAchieved+s.finalWeightAchieved;printf("Your final mark is %lf ", sum);}