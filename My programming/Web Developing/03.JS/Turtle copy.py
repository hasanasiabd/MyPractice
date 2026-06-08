from turtle import *

setup(600, 600)
speed(20)

# ১. কলম তুলে টার্টলকে কিছুটা বামে সরিয়ে নেওয়া
penup()
goto(-125, 0) # মাঝখানে আনার জন্য x অক্ষ বরাবর বামে সরানো (২৫০ এর অর্ধেক)
pendown()

color("red", "yellow")  # বর্ডার লাল এবং ভেতরে হলুদ রঙ

begin_fill()
while True:
    forward(250)
    left(170)
    if abs(pos() - (-125, 0)) < 1: # শুরুর পজিশনে ফিরলে থামবে
        break
end_fill()

hideturtle() # টার্টল বা তীর চিহ্নটি লুকিয়ে ফেলা
done()