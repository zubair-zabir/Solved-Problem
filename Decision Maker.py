import math
import random


#########################################

# Function Confirms that the input is a positive integer


def confirm_digit(question, predicate, predicate_response, parse_input=None):
    print(parse_input)
    num_str = input(question)
    while True:

        # Only put code that crashes or causes an error
        # statement in the "try:" Then if it does, it goes to
        # "except:"
        try:
            parsed_input = None
            if parse_input is None:
                parsed_input = num_str
            else:
                parsed_input = parse_input(num_str)
            if not predicate(parsed_input):
                num_str = input(predicate_response)
            else:
                break
        except:
            num_str = input(predicate_response)
    return parsed_input, num_str


# End of Function

##################################################

# Begin Function Math Security Question

def math_q():
    name_first_len = len(name_first_str)
    name_last_len = len(name_last_str)
    math_result_float = math.sqrt(name_first_len * name_last_len)
    math_result_rounded = round(math_result_float, 2)
    math_result_rounded_float = float(math_result_rounded)
    math_result_rounded_str = str(math_result_rounded_float)
    print('Here is a math problem for security purposes.\n')
    print('It is here to prevent a bot from accessing this site.\n')
    math_result_guess_str = input('''Using your calculation, multiple the total number of characters (letters/spaces/hyphens)
                                   in your first name you entered, by the total number of characters (letters/spaces/hyphens) in you last name. Then take the product and then square root the product. So if your first name had 5 characters and your last name had 6 characters, the product is 30. Then take the square root of 30. 
                                  Please enter the answer rounding to the second decimal: \n''')
    math_points = 0
    math_result_guess_float = float(math_result_guess_str)
    if math.isclose(math_result_guess_float, math_result_rounded, rel_tol=0.001):
        math_points = 1
        print('You Guessed it! \n')
    else:
        print('Unfortunately you were not correct. The answer was: ' + math_result_rounded_str + '\n')

        math_result_guess_str = input(
            'Again, for security purposes, please input the correct answer given to continue: \n')
        math_result_guess_float = float(math_result_guess_str)
        # if correct, then hits 71 and moves on. if wrong the enters the while loop
        while not math.isclose(math_result_guess_float, math_result_rounded, rel_tol=0.001):
            print('Unfortunately you were not correct. The answer was ' + math_result_rounded_str + '\n')
            math_result_guess = input('For security purposes, please input the correct answer given to continue: \n')
        print('You answered correctly! Thank you for the security question. \n')
    # Extra points math question

    ####

    random_num = random.randint(0, name_last_len)
    random_num_guess = input('Please pick a number between and including 0 to ' + str(name_first_len) + ': \n')
    if random_num_guess == random_num:
        math_points = math_points + 1
        print('You Guessed it!\n')
    else:
        print('Unfortunately you were not correct. The answer was: ' + str(random_num) + '\n')
    return math_points


# End Function Math Security Question

#############################################

# Begin Function Pizza Question

def pizza_style(pizza, toppings):
    if pizza == "NY Style":
        if toppings == "Double Cheese" or toppings == "Pepperoni":
            return 3
        else:
            return 2
    else:
        if toppings == "Double Cheese" or toppings == "Pepperoni":
            return 2
        else:
            return 1


# Begin Function Pizza Question

##################################################


print('Welcome to Rollins College Housing Assignment!\n')
print('The priority date for choosing when you will pick your housing is based on a points system.\n')
print('You will be asked a series of questions and many of your answers will be assigned points. \n')
print(
    'Then the points are accumulated and you will be assigned your earliest priority date to register and choose your housing. \n')
print("Let's get started! \n")

name_first_str = input('Please enter your first name: \n')
print('For your first name, you entered: ' + name_first_str + '\n')
# .lower() changes Yes or Y to lowercase
y_n = input('Is this correct, y or n: \n').lower()
while y_n != 'y' and y_n != 'yes':
    name_first_str = input('Please enter your first name: \n')
    # I forgot to add .lower() on this line, but becasue it was the exact same text, I thought it was from the line above. Maybe alter text slightly.
    y_n = input('Is this correct, y or n: \n').lower()

name_last_str = input('Please enter your last name: \n')
print('For your last name, you entered: ' + name_last_str + '\n')
y_n = input('Is this correct, y or n: \n').lower()
while y_n != 'y' and y_n != 'yes':
    name_last_str = input('Please enter your last name: \n')
    y_n = input('Is this correct, y or n: ').lower()

print('Welcome ' + name_first_str + '! We look forward to helping you get the best available housing priority date.\n')




###CLA, Holt or Commuter
def tars(student_type):
    if student_type == "CLA":
        print("Great chances are you can get housing on Campus. \n")
    else:
        print("You are not getting housing on Campus. On Campus Housing is for only CLA students.")
        sys.exit()


student = input("Are you in CLA, commuter, or Holt? \n")
tars(student)





###Credit Hour Points


###Shortcut for the 3 lines below. So to use this, un-# this line, then # those three lines
# credit_hrs_int, credit_hrs_str = confirm_digit('Please enter how many credit hours you will have before the beginning of the fall semester. This will include credits taken here at Rollins, credits you are transferring in, or all AP exam credits for scores 4 or 5: ', lambda num_credit: num_credits >= 0 and num_credits < 300)

def valid_credit_hours(num_range):
    return (num_range >= 0 and num_range < 300)


credit_hrs_int, credit_hrs_str = confirm_digit(
    'Please enter how many credit hours you will have before the beginning of the fall semester. This will include credits taken here at Rollins, credits you are transferring in, or all AP exam credits for scores 4 or 5: \n',
    valid_credit_hours,
    'Please enter a numerical integer between and including 0 to 300 credits: \n', int)

if credit_hrs_int >= 120:
    y_n_grad_q = input('Are you graduating after this semester, y or n: \n').lower()
    while y_n_grad_q != 'y' and y_n_grad_q != 'yes' and y_n_grad_q != 'n' and y_n_grad_q != 'no':
        y_n_grad_q = input('Please enter y or n, if you are graduating after this semester, y or n: \n').lower()
    if y_n_grad_q == 'y':
        print('Congratulations on Graduating this Semester!!! \n')
        print('While campus housing may not be an option, we have great alternatives. \n')
        print('Please visit our website for Transitioning To Your New World! \n')
        print('www.Rollins.edu/YourNewWorld')
        total_int = 0
        print('This will give you the housing option you are trying to find. \n')
        exit()

    else:
        credit_hrs_rank_int = 5
if credit_hrs_int >= 90:
    credit_hrs_rank_int = 4
elif credit_hrs_int >= 60:
    credit_hrs_rank_int = 3
elif credit_hrs_int >= 30:
    credit_hrs_rank_int = 1
else:
    credit_hrs_rank_int = 0
total = 0
total = total + credit_hrs_rank_int
print('Your total points are:', total, '\n')


def calculate_points(major):
    if major == "double major":
        return 4
    elif major == "triple major":
        return 5
    elif major == "3-2 program":
        return 6
    else:
        return 0  # Default points for other cases

student_major = input("What is your major scenario (double major, triple major, 3-2 program, or other)? \n")
total += calculate_points(student_major)

print(f"Your total points are:  {total}. \n")



###Class Standing Points, i.e. Freshman, Sophomore....###
def valid_class_standing(num_range):
    return (num_range >= 1 and num_range <= 4)


class_standing_int, class_standing_str = confirm_digit(
    'What is your class standing? Put 1 for Freshman, 2 for Sophomore, 3 for Junior, 4 for Senior: \n',
    valid_class_standing,
    'Please enter a numerical integer between and including 1 to 4: \n', int)
# class_standing_str = input('What is your class standing? Put 1 for Freshman, 2 for Sophomore, 3 for Junior, 4 for Senior: ')
# class_standing_int = int(class_standing_str)


if class_standing_str == '1':
    print('Your class standing is Freshman. \n')
elif class_standing_str == '2':
    print('Your class standing is Sophomore. \n')
elif class_standing_str == '3':
    print('Your class standing is Junior. \n')
else:
    print('Your class standing is Senior. \n')

total = total + class_standing_int
print('Your total points are:', total, '\n')


####begin gpa question#####

def valid_gpa(num_range):
    return (num_range >= 0 and num_range <= 5)


gpa_float, gpa_str = confirm_digit('What is your current GPA at Rollins or the last school you attended: \n', valid_gpa,
                                   'Please enter a numerical integer between and including 1 to 4: \n', float)

total = total + gpa_float
print('Your total points are:', total, '\n')


###end gpa question


def calculate_eligibility_points(parking_request, esa_request):

    if parking_request:
        return 2

    if esa_request:
        return 3

# Input from the user
parking_request = input("Do you want on-campus parking? (y/n): ").lower() == "y"
esa_request = input("Do you want to bring an Emotional Support Animal (ESA)? (y/n): ").lower() == "y"

# Calculate eligibility points
total += calculate_eligibility_points(parking_request, esa_request)

print(f"Your total points are: {total} ")



pizza = input('Now for a fun question. What is your favorite pizza? Please enter NY Style, Chicago Style, or Other: \n')
toppings = input('What is your favorite toppings? Please enter Double Cheese, Pepperoni, or Other: \n')
pizza_points = pizza_style(pizza, toppings)

print('\n')


# for math_q() do not need to pass the first and last names through to functions because they are global variable
math_points = math_q()

total = total + pizza_points + math_points

print('Your total points are:', total, '\n')

ta_q = input('Are you a Teaching Assistant, y or n: \n')
if ta_q == 'y':
    total = total + 1

ra_q = input('Are you a Resident Assistant, y or n: \n')
if ra_q == 'y':
    total = total + 1

age_q = input('Are you 23 or older, y or n: \n')
if age_q == 'y':
    total = total + 1

athl_q = input('Are you an Athlete, y or n: \n')
if athl_q == 'y':
    total = total + 5

dis_q = input('Do you have a disability, y or n: \n')
if dis_q == 'y':
    total = total + 5

prop_q = input('Are you on academic probation, y or n: \n')
if prop_q == 'y':
    total = total - 3

sus_q = input('Are you on academic suspension, y or n: \n')
if sus_q == 'y':
    total = total - 6

total_str = str(total)
print('Your total points are:', total, '\n')

if total >= 15:
    print('Your priority date to selected housing is April 15, 2023. \n')
elif total >= 10:
    print('Your priority date to selected housing is May 15, 2023. \n')
elif total >= 5:
    print('Your priority date to selected housing is June 15, 2023. \n')
else:
    print('Your priority date to selected housing is July 15, 2023. \n')





#####################

def confirm_digit(question):
    num_str = input(question)
    while True:

        # Only put code that crashes or causes an error
        # statement in the "try:" Then if it does, it goes to
        # "except:"
        try:
            num_int = int(num_str)
            if not num_int >= 0:
                num_str = input('Please enter a numerical digit: \n')
            else:
                break
        except:
            num_str = input('Please enter a numerical digit: \n')
    return num_int, num_str
