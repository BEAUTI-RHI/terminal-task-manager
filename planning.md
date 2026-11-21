## The plan:

So my very first thought was that this is very similar to the project cli expense tracker project.

**What we need for a single task**:
- an ID
- a title
- a status ( pending or complete )
- a description of the task describing what hte task is
- a priority

Here is how we can structure this project (my first thought):
```
Use a struct for defining as single task type:

enum class Status {
        Complete,
        Pending
    }

struct Date {
        size_t Day;
        size_t month;
    }

enum class Priority {
       High,
       Normal,
       Low,
    }

struct task {
        size_t id;
        std::string title;
        std::string description;
        Priority priority {Normal};
        Date date;
    }

```

**NOTE**: Above is just psuedocode.

## Organizing the Project

we can split the project into files by responsibilities. Here is the rough idea:

```
src-
    TaskManager.cpp
    Input.cpp
    Menu.cpp
    Main.cpp
    App.cpp
```


**TaskManager.cpp**: this will contain all the files for the actual Task Manager Class Object.

**Input.cpp**: Handle the input from the user and all the validation

**App.cpp**: connect each file/component together and it is the main orchestrator.

**Menu.cpp**: Prints the menu for the user.

**Main.cpp**: This file will hold the entry point to the project and it will run the application and keep it running.
