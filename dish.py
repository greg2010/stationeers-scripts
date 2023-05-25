import random
import math

def polar2cart(r, theta, phi):
    return [
         r * math.sin(theta) * math.cos(phi),
         r * math.sin(theta) * math.sin(phi),
         r * math.cos(theta)
    ]

def polar2cartDegrees(r, thetaDeg, phiDeg):
    theta = math.radians(thetaDeg)
    phi = math.radians(phiDeg)
    return polar2cart(r, theta, phi)

def dotproduct(v1, v2):
  return sum((a*b) for a, b in zip(v1, v2))

def length(v):
  return math.sqrt(dotproduct(v, v))

def angle(v1, v2):
  return math.acos(dotproduct(v1, v2) / (length(v1) * length(v2)))

def rad2deg(rad):
   return rad * 180/math.pi

class trader:
    _horAngle = random.randint(0, 180)
    _vertAngle = random.randint(0, 180)
    coords = polar2cartDegrees(1, _horAngle, _vertAngle)

    def angleDiff(this, horAngle, vertAngle):
        cart = polar2cartDegrees(1, horAngle, vertAngle)
        return rad2deg(angle(this.coords, cart))


t = trader()

vertAngle = 45
horAngle = 0
while (angleDiff > 40):
   print(angleDiff)
   horAngle = horAngle + 5
   angleDiff = t.angleDiff(vertAngle, horAngle)

print("Done: {}".format(angleDiff))