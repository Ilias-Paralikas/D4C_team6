import os

dataset_rows= {'small': int(1e5),'medium':int(1e6),'big':int(5e6)}

datasets_num = 10

for i in range(datasets_num):
    for size  in dataset_rows:
        rows = dataset_rows[size]
        os.system('g++ rest_data_generator.cpp -o rest.exe')
        filename = "rest_data/"+str(size)+"/rest_data_"+str(i)+".csv"
        os.system('rest.exe '+filename  +' ' + str(rows) +' ' +str(i))            
        print('finished ',filename)