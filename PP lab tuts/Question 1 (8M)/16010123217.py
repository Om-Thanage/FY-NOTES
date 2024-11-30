#q.1 a)
string = "EXAM"
for i in range(0,(len(string)+1)):
    word1 = string[0:i]
    print(word1)
for i in range(0,len(string)):
    word2 = string[0:(len(string)-(i+1))]
    print(word2)
    