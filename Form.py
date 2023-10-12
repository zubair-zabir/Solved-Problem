import re
from word2number import w2n


def age_in_number(age):
    try:
        age_num = w2n.word_to_num(age)
        return age_num
    except ValueError:
        return None


def test_age(age):
    if age.strip().isdigit() or age.strip().startswith('-') and age.strip()[1:].isdigit():
        age_int = int(age)
    else:
        age_int = age_in_number(age)
        if age_int is None:
            return "Age should be a number."

    if 0 < age_int <= 150:
        return age_int
    return "Age should be between 1 and 150."


def validate_email(email):
    email_pattern = re.compile(r'^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$')
    if email_pattern.match(email):
        return True, email
    else:
        return False, "Invalid email format."



def format_phone(phone):
    # Remove any non-numeric character
    digits = ''.join(filter(str.isdigit, phone))

    if len(digits) == 10:  # U.S. format without country code
        return "{}-{}-{}".format(digits[:3], digits[3:6], digits[6:])
    elif len(digits) > 10:  # International format with country code
        return "+{} {}-{}-{}".format(digits[:-10], digits[-10:-7], digits[-7:-4], digits[-4:])
    else:
        return None  # Invalid format


def test_phone(phone):
    # Check if phone format is valid
    pattern = r"^(\+?\d{1,4}\s?)?((\(\d{1,4}\)\s?)|\d{1,4}(?:\s|-))?\d{1,4}(?:\s|-)?\d{1,4}(?:\s|-)?\d{1,4}$"
    if re.match(pattern, phone):
        return format_phone(phone)
    return False


def test_gender(gender):
    standard_genders = ['male', 'female', 'm', 'f', 'others', 'o']
    gender_lower = gender.lower().strip()

    if gender_lower in standard_genders:
        # Convert short forms to full forms for uniformity
        if gender_lower == 'm':
            return 'Male'
        elif gender_lower == 'f':
            return 'Female'
        elif gender_lower in ['o', 'others']:
            specify = input("Would you like to specify? (yes/no): ").lower().strip()
            if specify == 'yes':
                custom_gender = input("Please specify your gender: ")
                return custom_gender
            else:
                return 'Others'
    return None


def test_state_region(region, country=None):
        # A sample list of US states, can be extended
        us_states = [
            "AL", "AK", "AZ", "AR", "CA", "CO", "CT", "DE", "FL", "GA",
            "HI", "ID", "IL", "IN", "IA", "KS", "KY", "LA", "ME", "MD",
            "MA", "MI", "MN", "MS", "MO", "MT", "NE", "NV", "NH", "NJ",
            "NM", "NY", "NC", "ND", "OH", "OK", "OR", "PA", "RI", "SC",
            "SD", "TN", "TX", "UT", "VT", "VA", "WA", "WV", "WI", "WY"
        ]

        if region.upper() in us_states:
            return region.upper(), "USA"
        else:
            # Assume user has input a valid state/region from their homeland
            # Request the user to input the country name
            if not country:
                country = input("Please enter the country for state {}: ".format(region))
            return region.title(), country.title()


def test_name(name):
    # Whitelist of allowed special characters in names
    allowed_chars = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ -'._")

    # Ensure every character in the name is either alphanumeric or in the allowed character set
    if all(char in allowed_chars for char in name):
        return name.title()
    else:
        print("Enter your name correctly. Some characters might not be allowed.")
        return False


def test_reason(reason):
    reasons = ["Visit", "Interview", "Alumni", "Tour", "Lecture", "Other"]
    reason_cap = reason.capitalize()

    if reason_cap in reasons:
        if reason_cap == "Other":
            custom_reason = input("Please specify your reason for visit: ").strip()
            return custom_reason if custom_reason else "Other"  # if the user doesn't specify anything, return "Other"
        return reason_cap
    return None


def validate_address(address):
    # Split address into components
    components = address.split()

    # Check and validate street number
    street_num = components[0]
    if not street_num.isdigit() or int(street_num) <= 0:
        return "Invalid street number."

    # Check for box number if present and validate
    box_num_pattern = re.compile(r'box (\d+)', re.IGNORECASE)
    box_match = box_num_pattern.search(address)
    if box_match:
        box_num = box_match.group(1)
        if not box_num.isdigit():
            return "Invalid box number."
    else:
        box_num = None

    # Get street name
    if box_num:
        street_name = address.split(box_num_pattern.pattern)[0].split(street_num, 1)[1].strip()
    else:
        street_name = address.split(street_num, 1)[1].strip()

    # Check if street name exists and is not just numeric
    if not street_name or street_name.isdigit():
        return "Invalid street name."

    return {
        'Street Number': int(street_num),
        'Street Name': street_name,
        'Box Number': int(box_num) if box_num else None
    }


def get_visitor_details():
    """
    Gather the details of a visitor.
    Return the visitor details as a dictionary.
    """
    visitor = {}

    # Collect visitor's name
    v_name = input("\nEnter visitor's full name: ")
    while not test_name(v_name):
        v_name = input("Invalid input. Please enter visitor's full name again: ")
    visitor['Name'] = v_name

    # Collect visitor's age
    v_age = input("Enter visitor's age: ")
    while not isinstance(test_age(v_age), int):  # modified condition to check for integer type
        print(test_age(v_age))
        v_age = input("Invalid input. Please enter visitor's age again: ")
    visitor['Age'] = v_age

    v_address = input("Enter visitor's address: ")
    address_data = validate_address(v_address)

    # While the result is not a dictionary (i.e., it's an error string)
    while isinstance(address_data, str):
        print(address_data)  # print the error message
        v_address = input("Invalid input. Please enter visitor's address again: ")
        address_data = validate_address(v_address)

    visitor['Address'] = address_data  # Now, address_data is a dictionary

    # Collect visitor's gender
    v_gender = input("Enter visitor's gender (Male/Female/Other or M/F/O): ")
    while not test_gender(v_gender):
        v_gender = input("Invalid input. Please enter visitor's gender again (Male/Female or M/F): ")
    visitor['Gender'] = v_gender

    # Collect visitor's reason for visit
    v_reason = input("Reason for visit (Visit, Interview, Alumni, Tour, Lecture, Other): ")
    while not test_reason(v_reason):
        v_reason = input(
            "Invalid input. Please enter reason for visit again (Visit, Interview, Alumni, Tour, Lecture, Other): ")
    visitor['Reason for Visit'] = v_reason

    return visitor


def form():
    print("Welcome to Snillor University's Information Form!")

    # Collect name
    name = input("Enter your full name: ")
    while not test_name(name):
        name = input("Invalid input. Please enter your full name again: ")

    # Collect address
    address = input("Enter your address: ")
    address_data = validate_address(address)
    while isinstance(address_data, str):  # Error message is string type
        print(address_data)  # print the error message
        address = input("Invalid input. Please enter your address again: ")
        address_data = validate_address(address)

    # Collect age
    age = input("Enter age: ")
    result = test_age(age)

    while isinstance(result, str):  # if it returns a string, it's an error message
        print(result)
        age = input("Invalid input. Please enter age again: ")
        result = test_age(age)

    # Collect gender
    gender = input("Enter gender (Male/Female/Others or M/F/O): ")
    result = test_gender(gender)

    while result is None:
        print(f"Gender '{gender}' not recognized.")
        gender = input("Invalid input. Please enter gender again (Male/Female/Others or M/F/O): ")
        result = test_gender(gender)

    # Collect state
    state = input("Enter state (e.g., GA, FL, NY): ")
    while not test_state_region(state):
        state = input("Invalid input. Please enter state again (e.g., GA, FL, NY): ")

    # Collect email
    email = input("Enter your email: ")
    is_valid, result = validate_email(email)
    while not is_valid:
        print(result)  # This will print "Invalid email format." for incorrect emails
        email = input("Please enter a valid email: ")
        is_valid, result = validate_email(email)

    # Collect phone
    phone = input("Enter phone number: ")
    while not test_phone(phone):
        phone = input("Invalid input. Please enter phone number again: ")

    # Collect reason for visit
        # Collect reason for visit
        reason_prompt = "Reason for visit (Visit, Interview, Alumni, Tour, Lecture, Other): "
        reason = input(reason_prompt)
        result = test_reason(reason)

        while result is None:
            print(f"Invalid input. '{reason}' is not a recognized reason.")
            reason = input(reason_prompt)
            result = test_reason(reason)

        print(f"Reason for Visit: {result}")

    guests = []  # List to store guest details
    alone_response = input("\nAre you coming to the campus alone? (yes/no): ").lower().strip()

    # If the primary user is not alone, get details of the first visitor
    if alone_response == 'no':
        guests.append(get_visitor_details())

    # Ask if there are more visitors and get their details
    another_visitor = input("\nDo you have another visitor? (yes/no): ").lower().strip()
    while another_visitor == 'yes':
        guests.append(get_visitor_details())
        another_visitor = input("\nDo you have another visitor? (yes/no): ").lower().strip()

    # Display collected data
    # ... [Other details displayed unchanged]

    # Display visitor details if any
    if guests:
        print("\nVisitor(s) Details:")
        for i, visitor in enumerate(guests, 1):
            print(f"\nVisitor {i}:")
            for key, value in visitor.items():
                print(f"{key}: {value}")

    # Display collected data
    print("\nCollected Data:")
    print(f"Name: {name}")
    print("Address:")
    for key, value in address_data.items():
        print(f"{key}: {value}")
    print(f"Age: {age}")
    print(f"Gender: {gender}")
    print(f"State: {state}")
    print(f"Email: {email}")
    print(f"Phone: {phone}")
    print(f"Reason for Visit: {reason}")


# Call the form function to start the process
form()

