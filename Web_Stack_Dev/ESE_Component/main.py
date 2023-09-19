from validator import validate

if validate("dogs.xml", "dogs.xsd"):
    print('Valid! :)')
else:
    print('Not valid! :(')