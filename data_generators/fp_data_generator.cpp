
#include <iostream>
#include <fstream>
#include<cstdlib>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(int argc, char *argv[]) {

std::ofstream out(argv[1]);

const int ROWS = atoi(argv[4]);
srand((unsigned) time(NULL));
int total_unique_items =atoi(argv[2]);
int max_items_in_list = atoi(argv[3])-1;
int items_in_list;
int item;
int total_items = 0;
out<<"id"<<'&'<<"items"<<'\n';
for (int i = 0; i < ROWS; i++)
{
    vector<int> items;
    items_in_list = rand() % max_items_in_list;
    items_in_list++;
    total_items +=items_in_list;
    for (int j = 0; j < items_in_list; j++)
    {
        item = rand() % total_unique_items;
        items.push_back(item);
    }

    sort(items.begin(), items.end() );
    items.erase( unique( items.begin(), items.end() ), items.end() );
    
    out<<i<<'&'<<'[';
    out<<items[0];
    for (int j = 1; j < items.size(); j++)
    {
        out<<','<<items[j];
    }
    out << ']'<<'\n';
}
float mean_item_per_list = total_items/ ROWS;
out<<"";

}