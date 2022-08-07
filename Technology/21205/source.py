def check_registration_rules(**kwargs):
    output = []
    for key in kwargs:
        username = key
        password = kwargs[key]
        if username == "quera" or username == "codecup" or len(username) < 4 \
                or len(password) < 6 or password.isnumeric():
            continue
        output.append(username)
    return output
