#include<stdio.h>
int main ()
{
    long long population,men,women,overallliteracy,literacy_women,literacy_men;
    population=1441981744;
    printf("\n population of Bharat: %d",population);
    women=1441981744*48.4/100;
    men=1441981744*51.6/100;
    overallliteracy=1441981744*85.95/100;
    printf("\n total women population: %d",women);
    printf("\n total men population: %d",men);
    printf("\n overall literacy rate is: %d",overallliteracy);
    literacy_women=women*(62.84/100);
    printf("\n total literate women: %d",literacy_women);
    literacy_men=men*(80.95/100);
    printf("\n total literate men: %d",literacy_men);
}
