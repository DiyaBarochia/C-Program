#include<stdio.h>
int main ()
{
    long long population,men,women,overallliteracy,literacy_women,literacy_men,illiterate_women,illiterate_men;
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
    illiterate_women=women-literacy_women;
    printf("\n total illiterate women are: %d",illiterate_women);
    illiterate_men=men-literacy_men;
    printf("\n total illiterate men are: %d",illiterate_men);
    printf("\n This project is done by Diya Barochia.");
}
