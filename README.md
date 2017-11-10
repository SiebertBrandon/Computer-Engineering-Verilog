# TCNJ - Verlog Projects

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)]()
[![GitHub license](https://img.shields.io/badge/language-Verilog-orange.svg)]()
[![GitHub license](https://img.shields.io/badge/language-Java-orange.svg)]()

## What are these?

  These are completed and functional Verilog projected created while attending The College of New Jersey. There are 8 Labs in total across two semesters. They include Arithmatic Logic Unit designs, Multi-Policy Cache Design, and LEGv8 ARM CPU.

## Run Intructions

  The Verilog files can be run easily in two different ways

#### Xilinx ISE Desktop Application

  - Open Xilinx
  - Load Project
  - Select "Simulation" radio button
  - Begin a "Simulate Behavioral Model" process
  - Observe the SIM Waveform

#### [EDA Playground](http://www.edaplayground.com/home) Online Editor
  - Log in with an account
  - Testbench + Design: SystemVerilog/Verilog
  - Tools & Simulators: Icarus Verilog 0.9.7

## Project Summaries

  ### Binary Adder Implementations
  
  #### Behavioral Adder (64 Bit)

  The behavioral representation of a 64 Bit Adder unit. Uses a simple adding statement to take two 64 bit inputs and output a 64 bit result. Used to contrast against the other methods of creating adders. This project is broken into two files: `Behavioral64BitAdder.v` and `Behavioral64BitAdder_TestBench.v`.

  #### Physical Look-Ahead Adder (64 Bit)

  This adder is a physical-like implementation of a look-ahead adder. In contrast to the Behavioral 64 Bit Adder, this project was implemented using logic gates and cascaded modules. In order to implement 64 bits for the adder, 32 cascaded modules were wired up together. This project includes three files: `PhysicalLookAheadAdder1Bit.v`, `PhysicalLookAheadAdder1Bit_TestBench.v`, `PhysicalLookAheadAdder64Bit.v`, and `PhysicalLookAheadAdder64Bit_TestBench.v`.

  #### Physical Ripple Carry Adder (64 Bit)

  Description

  #### Custom Instruction Processor

  Description

  ### Spring 2018

  #### Java Cache Simulation

  Description

  #### LEGv8 ARM with Pipelining

  Description

  #### LEGv8 ARM with Pipelining and Hazard Detection

  Description

## License

  All source code in **Computer-Engineering-Verilog** is released under the MIT license. See LICENSE for details.
