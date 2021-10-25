import sys
binary = sys.argv[1]
count = 0
dec_list = []
for i in reversed(range(len(binary))):
    if int(binary[i]) == 0:
        pass
    else:
        dec_list.append(2 ** count)
    count+=1

print(sum(dec_list))
