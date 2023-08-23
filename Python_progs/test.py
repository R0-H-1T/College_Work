from datetime import datetime


def whats_the_input(user_input:str) -> str:
    while True:
        if user_input.casefold() == '?':
            print('\nYour date should be in format - dd/mm/yyy.\nExample: 12/12/2001.\nEnter again.')
            user_input = input()
            continue
        elif user_input.casefold() == 'q':
            try:
                print('\nBye! Hope you run this program again.')
            finally:
                break
        else:
            try:
                d, m, y = input('Enter your dob in dd/mm/yyy format: ').split('/')
                td, tm, ty = datetime.today().strftime("%d/%m/%Y").split('/')
                td, tm, ty = int(td), int(tm), int(ty)
                d, m, y = int(d), int(m), int(y)
                if ((30>=d or 31>=d)) and (12>=m) and ty>=y:
                    print('Age: ', ty - y)
                    user_input = input('\nEnter your dob in dd/mm/yyyy format: ')
            except ValueError:
                print('\nIncorrect dob format')
                user_input = '?'
            
                

whats_the_input(input('Enter your dob in dd/mm/yyyy format: '))