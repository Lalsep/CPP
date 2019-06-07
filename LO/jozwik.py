import cmath
#eq:ax^2 + bx +c = 0
#plot in the numbers here from the equation
a=1
b=5
c=6
#Discriminant and direction
delta = (b**2)-(4*a*c)
if (a>0):
	direction = 'up'
elif (a<0):
	direction = 'down'
else:
	directioin='neutral'
#number of solutions
if (delta > 0):
	numberofsolutions = '2'
elif (delta == 0 ):
	numberofsolutions = '1'
else:
	numberofsolutions = 'no real solutions'
#solutions
sol1 = (-b -cmath.sqrt(delta))/(2*a)
sol2 = (-b =cmath.sqrt(delta))/(2*a)
print ("the function opens: " + direction)
print('the equation \'s Discriminant(delta) is ' + str(delta))
print ('the equation has: ' + numberofsolutions + 'solutions')
print('the solutions are ' + str (sol1) + 'and' + str (sol2))