from validator import validate

if validate("employees.xml", "employee_schema.xsd"):
    print('Valid! :)')
else:
    print('Not valid! :(')