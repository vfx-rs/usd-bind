import os

for i in sorted(list(os.listdir("."))):
    with open(i) as o:
        lines = o.readlines()
        if not lines[0].startswith("#if 0"):
            print i

