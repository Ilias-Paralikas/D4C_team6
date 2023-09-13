import os
total_items_list =[200,300,500,1000,2000]
max_items_in_lists = [10,15,20,30,40]
Rows = [500000,1000000,5000000]

for total_items in total_items_list:
    for max in max_items_in_lists:
        for row in Rows:
            os.system('g++ fp_data_Generator.cpp -o fp.exe')
            filename = "fp_data/fp_data_total_items_"+str(total_items)+"_max_items_" + str(max)+"rows_"+str(row)+".csv"
            os.system('fp.exe '+filename +' '+str(total_items)+' '+str(max)+' '+str(row))
            print('finished ',filename)