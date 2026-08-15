# RTOS-101

## Real Time Operating Systems (RTOS)
A Real-Time Operating System (RTOS) is a type of computer operating system designed to be small and deterministic. RTOS is are commonly used in embedded systems such as medical devices and automotive ECUs that need to react to external events within strict time constraints.
An RTOS is typically smaller and lighter weight than a general purpose operating system, making RTOSes suitable for memory, compute and power constrained devices.


## Multitasking
A conventional single core processor can only execute a single task at a time, but by rapidly switching between tasks a multitasking operating system can make it appear as if each task is executing concurrently.

Using RTOS, a single core processor can LARP multitasking, without actually doing it 🥀

<img width="407" height="204" alt="image" src="https://github.com/user-attachments/assets/21fba4fe-6fdf-4e6b-bc79-ed99c587b05f" />

## Scheduling
A scheduler decides which task should be executed at a particular time.
Embedded Systems are designed to provide a timely response to real world events which can have deadlines. These deadlines can be met by assigning a priority to each task.
Scheduling policy of RTOS ensures that the task with the highest priority gets executed in the given processing time.

In simple words, scheduling is similar to a restaurant (Atleast thats what i understood). 
Dishes with the highest number of orders are priortized first. Tasks like washing dishes, managing inventory, etc have the least priority.

State Diagram:

          +---------+
          |  Ready  |
          +---------+
               |
               v
          +---------+
          | Running |
          +---------+
               |
       +-------+-------+
       |               |
       v               v
 +-----------+    +-----------+
 | Blocked   |    | Completed |
 +-----------+    +-----------+

Overall Scheduling:

                 +----------------+
                 |    Scheduler   |
                 +----------------+
                          |
                          v

       +---------+  +---------+  +---------+
       | Task A  |  | Task B  |  | Task C  |
       | Prio 3  |  | Prio 2  |  | Prio 1  |
       +---------+  +---------+  +---------+
             \          |          /
              \         |         /
               \        |        /
                +---------------+
                |      CPU      |
                +---------------+







