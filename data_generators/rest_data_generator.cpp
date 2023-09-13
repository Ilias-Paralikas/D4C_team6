
#include <iostream>
#include <fstream>
#include<cstdlib>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(int argc, char *argv[]) {

std::ofstream out(argv[1]);
srand((unsigned) time(NULL));
int ROWS = atoi(argv[2]);
int max_range = 10000;
int numerical_data_population = 100;
int categirical_data_population = 10;
int categirical_data[] ={2,2,3,4,5,6,7,8,9,10 };
int dummy_categorical_data[10] = {0};
int value;
int position;
for (int i = 0; i < ROWS; i++)
{
    value = rand() % max_range ;
    out<<value;
    for (int j = 1; j < numerical_data_population; j++)
    {
        value = rand() % max_range ;
        out<<','<<value;
    }

    for (int j = 0; j < categirical_data_population; j++)
    {   
        position = rand() % categirical_data[j]; 
        dummy_categorical_data[position] = 1;
        out<<dummy_categorical_data[0];
        for (int k = 1; k < categirical_data[j]; k++)
        {
            out<<','<<dummy_categorical_data[k];
        }
        dummy_categorical_data[position] = 0;
        out<<',';

        
    }
    out<<argv[3]<<'\n';
}

}