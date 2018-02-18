while True:
    try:
        s=raw_input()
        while True:
            if s.find("BUG") is not -1:
                s=s.replace("BUG","")
            else:
                break
        print(s)
        #do something
    except EOFError:
        break
