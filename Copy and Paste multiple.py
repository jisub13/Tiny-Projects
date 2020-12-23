import pyperclip
"""Shitty program that helps me to copy many things at once
Make sure you already have something copied and then run program
Then copy the second thing and then so on
Will update to make sure that it shows everything so you can copy and rearrange
in different order"""
words = []
while True:
    words.append(pyperclip.paste())
    ask = input("Press enter to continue (enter anything else to stop)")
    if ask == "":
        continue
    else:
        pyperclip.copy("\n".join(words))
        break
