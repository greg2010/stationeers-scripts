def calculate_ratio(target_ratio, t1_c, t2_c):
    t1_k = c_to_k(t1_c)
    t2_k = c_to_k(t2_c)

    a = target_ratio / (1-target_ratio)
    b = a * (t1_k/t2_k)
    s = b / (b + 1)

    return s


def c_to_k(temp_c):
    return temp_c + 273.15


# Fuel mixing ratio
target_ratio = 0.333334

# Grab these from the tanks via a tablet
t1_c = -146.8
t2_c = 0.963

print('Desired ratio: {}'.format(target_ratio))


ratio = calculate_ratio(target_ratio, t1_c, t2_c)
# convert to percent and round
set_ratio = round((ratio * 100), 6)
print("Set mixer to {}".format(set_ratio))