import string
import sys


def lookup(tra):
    smorse_alphabet = ".- -... -.-. -.. . ..-. --. .... .. .--- -.- .-.. -- -. --- .--. --.- .-. ... - ..- ...- .-- " \
                      "-..- -.-- --..".split()
    lookup_dict = {}
    for k, v in zip(string.ascii_lowercase, smorse_alphabet):
        lookup_dict[k] = v

    ret = ""
    for c in tra:
        ret = ret + lookup_dict[c]
        print(lookup_dict[c])
    return ret


if __name__ == '__main__':
    print(sys.argv)

    word = sys.argv[1]
    print(lookup(word))
