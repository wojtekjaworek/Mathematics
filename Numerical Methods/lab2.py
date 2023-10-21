import sympy as sp # for symbolic math, to calculate derivatives and define functions
import warnings # to suppress warnings
import math

EPS = 1e-3 # eplison value, precision of numerical convergenc=

def newton(function: sp.function, x0):

    xn = x0 # init start value
    i = 0 # init counter

    while True:
        i = i + 1 # increment counter
        x_prev = xn # store previous value
        xn = xn - function.subs(x, xn) / sp.diff(function, x).subs(x, xn) # new estimate
        if abs(xn - x_prev) < EPS: # if close enough, stop
            return xn.evalf(), i # return value as float and number of iterations
        if i > 1000: # prevent infinite loop
            warnings.warn("\nNewton's method did not converge! Returning last estimate.\n")
            return xn.evalf(), i # return value as float and number of iterations


    
def secant(function, x0, x1):


    xn = x1 # init start value x n 
    xn_1 = x0 # init start value x n-1
    i = 0 # init counter

    while True:
        i = i + 1 # increment counter
        x_prev = xn # store previous value
        xn = xn - function.subs(x, xn) / (function.subs(x, xn) - function.subs(x, xn_1)) * (xn - xn_1) # new estimate
        xn_1 = x_prev # store previous value
        if abs(xn - x_prev) < EPS: # if close enough, stop
            return xn.evalf(), i # return value as float and number of iterations
        if i > 1000: # prevent infinite loop
            warnings.warn("\nSecant method did not converge! Returning last estimate.\n")
            return xn.evalf(), i # return value as float and number of iterations



def bisection(function, a, b):
    
        i = 0 # init counter
    
        while True:
            i = i + 1 # increment counter
            c = (a + b) / 2 # midpoint
            if abs(function.subs(x, c)) < EPS: # if root found, stop
                return c, i # return value as float and number of iterations

            elif function.subs(x, a) * function.subs(x, b) > 0:
                return None, i # no root or multiple roots in interval

            else:
                if function.subs(x, a) * function.subs(x, c) < 0:
                    b = c
                elif function.subs(x, b) * function.subs(x, c) < 0:
                    a = c
            
            if i > 1000: # prevent infinite loop
                warnings.warn("\nBisection method did not converge! Returning last estimate.\n")
                return c, i # return value as float and number of iterations

            






if __name__ == "__main__": # run script

    x = sp.symbols('x') # define x as a symbol
    function = sp.exp(x)-2 # define function
    newton_ans, newton_iter  = newton(function, 1.8) # call newton function with initial guess 1
    secant_ans, secant_iter = secant(function, 0.1, 1.8) # call secant function with initial guesses 0 and 1
    bisection_ans, bisection_iter = bisection(function, 0, 2)
    print("Function: \t", function)
    print("Precision: \t", EPS)
    print("Newton's Method: \t", newton_ans, "\tIterations: \t", newton_iter)
    print("Secant Method: \t", secant_ans, "\tIterations: \t", secant_iter)
    print("Bisection Method: \t", bisection_ans, "\tIterations: \t", bisection_iter)
