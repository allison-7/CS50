from cs50 import get_string

text = get_string("Text: ")
num_letters = 0
num_words = 1
num_sentences = 0

for i in range(len(text)):
    if text[i].isalpha():
        num_letters += 1
    elif text[i].isspace():
        num_words += 1
    elif text[i] == '.' or text[i] == '!' or text[i] == '?':
        num_sentences += 1

l = num_letters / num_words * 100
s = num_sentences / num_words * 100
index = 0.0588 * l - 0.29 * s - 15.8
index = round(index)
if index > 16:
    print("Grade 16+")
elif index > 1 and index < 17:
    print(f"Grade {index}")
else:
    print("Before Grade 1")
