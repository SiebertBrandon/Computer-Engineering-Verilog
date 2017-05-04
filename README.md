# TCNJ - Computer Engineering Lab 2 Labs

----
Lab1: Cache Simulator
----
Create a simulation program which reads in memory accesses provided in TRACE1.DAT and TRACE2.DAT and simulates a cache response for size stimulus and replacement policy changes. This is done in whatever language we wish. Java was chosen for the sake of familiarity and simplicity for file parsing.

----
Lab2: Pipelined LEGv8 CPU (To be added to this repo)
----
Create (or appropriate the previously designed CPU from Computer Engineering Lab 1) a LEGv8 CPU capable of operating with pipelined stages. Each instruction is to move from one stage to the next (Fetch, Decode, Execute, Memory, Writeback) every clock cycle. None of these instructions should interfere with another and must operate as if they are in complete isolation. No hazard detection is implemented yet, so many of the test programs require NOP commands.

----
Lab3: Hazard Detection for a LEGv8 CPU (To be added to this repo)
----

----
Lab2: Verilog Cache Simulator (To be added to this repo)
----
Implement the same cache as was in Lab 1 using Verilog. Choose the best cache structure found in Lab 1 and implement it in modules. Read from the trace files in your testbench
