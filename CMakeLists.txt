cmake_minimum_required(VERSION 3.17)
project(ProiectOOP)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -pedantic -Weffc++ -Werror -g)

add_executable(ProiectOOP main.cpp Reminder.cpp Reminder.h DateTime.cpp DateTime.h ToDoList.cpp ToDoList.h ShoppingList.cpp ShoppingList.h Alarm.cpp Alarm.h App.cpp App.h Menu.cpp Menu.h Bill.cpp Bill.h Birthday.cpp Birthday.h Bill_builder.cpp Bill_builder.h Reminder_factory.cpp Reminder_factory.h)