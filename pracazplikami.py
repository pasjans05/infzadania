with open('Tekst1.txt', 'r') as tekst1, open('Tekst2.txt', 'r') as tekst2, open('suma.txt', 'w') as tekst3:
    for line in tekst1:
        tekst3.write(line)
    tekst3.write("\n")
    for line in tekst2:
        tekst3.write(line)