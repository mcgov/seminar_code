#functions to write annoying repetetive parts

def write_switch_function():
    for i in 'abcdefghijklmnopqrstuvwxyz':
        print "case '" + i + "':\n\t"+i+"();\n\tbreak;\n"

def write_functions():
    for i in 'abcdefghijklmnopqrstuvwxyz':
        print "void " + i + "()\n{\n}\n"

