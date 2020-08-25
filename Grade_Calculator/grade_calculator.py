import argparse

# Our Grade Calculator for BuildwithRushi ep. 6
# Weights can differ depending on the class!

# This script follows and assumes these weights:
# Quizzes: 20% -- input as an array of numbers
# Projects: 30% -- input as array of numbers
# Midterms: 25% -- array
# Final: 25% -- one input

# Parsing the command line arguments -> -q for quizzes, -p for projects, -m for midterms, -f for final

parser = argparse.ArgumentParser()  #going to use this to parse our arguments
parser.add_argument('-q', type=str, help='List of quiz grades')
parser.add_argument('-p', type=str, help='List of project grades')
parser.add_argument('-m', type=str, help='List of midterms grades')
parser.add_argument('-f', type=str, help='Final Exam grade')

arguments = parser.parse_args()

quizzes = arguments.q.split(',')
projects = arguments.p.split(',')
midterms = arguments.m.split(',')

#Assuming final is one grade 

# Calculations

sum = 0
for q in quizzes:
	sum += int(q)

avg_quiz = sum / len(quizzes)

sum = 0
for p in projects:
	sum += int(p)

avg_proj = sum / len(projects)

sum = 0
for m in midterms:
	sum += int(m)

avg_mid = sum / len(midterms)

# Weights
# If you don't have the final grade,
if arguments.f == '?':
	total_sum = (avg_quiz * 0.20 + avg_proj * 0.30 + avg_mid * 0.25) / 0.75
else:
	total_sum = avg_quiz * 0.20 + avg_proj * 0.30 + avg_mid * 0.25 + int(arguments.f) * 0.25

print("Total Grade right now is: ", total_sum)
