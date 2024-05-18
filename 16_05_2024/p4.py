sum=0
for i in range(5):
  marks = int(input(f"Enter marks in sub {i+1}: "))
  sum+=marks
print(f"Sum of marks: {sum}\nAverage: {sum/5}")
