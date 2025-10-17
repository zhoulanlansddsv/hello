###
import json
str="""
[{
"name":"Bob",
"gender":"male","birthday":"1992-10-18"},
{"name":"Selina","gender":"female","birthday":"1995-10-18"}]
"""


print(type(str))
data=json.loads(str)
print(data)
print(type(data))

#jason∂¡»°


import csv

with open('data.csv','w') as csvfile:
    writer=csv.writer(csvfile)
    writer.writerow(['id','name','age'])
    writer.writerow(['1001','Mike',20])
    writer.writerow(['1002','Bob',22])
    writer.writerow(['1003','Jordan',21])

    ###import pandas
    #data=[{'id':'10001','name':'Mike','age':20},{'id':'1002','name':'job','age':22},
     #     {'id':'10003','name':'Jordan','age':21}]

    #df=pandas.DataFrame(data)
    #df.to_csv('data.csv',index=False)
    ###











