# 📘 C++ Project Roadmap (Tailored to my preferences)

### list of projects I asked chatgpt to give me that will make me a better C++ programmer so that I may get a job as a C++ Software Engineer.

### 12 easy projects

### 8 medium projects

### 4 hard projects

## Easy Project: Command-line Calculator / Mini Shell

**Description:** Build a command-line tool that accepts basic math operations or simple shell-like commands (e.g. 'ls', 'cd', 'exit') and executes them.
**Expectations:** Robust CLI interface with error handling and interactive input loop. Supports at least 4 math operations or 3 shell commands.
**Passing Criteria:**

- Accepts user input continuously (REPL style)
- Handles addition, subtraction, multiplication, and division
- Prints result or error message if invalid
- Implements 'exit' to quit the loop

## Easy Project: Linked-list / Tree / Graph Simulation

**Description:** Implement data structures like singly/doubly linked list, binary tree, or simple graph and perform basic operations on them.
**Expectations:** Correct implementation and operations like insert, delete, traverse. Console output showing the structure state.
**Passing Criteria:**

- Insert and delete nodes
- Print all elements in order
- Search for a value
- Clear/free the structure memory

## Easy Project: Multi-threaded File Reader

**Description:** Read multiple files using different threads and combine lines from each into a single output file.
**Expectations:** Thread-safe reading, proper synchronization, and correct merging of file contents.
**Passing Criteria:**

- Accepts multiple filenames
- Launches a thread per file
- Reads and merges line-by-line
- Handles missing or unreadable files gracefully

## Easy Project: Basic Password Manager

**Description:** A simple CLI tool that stores and retrieves passwords using file I/O.
**Expectations:** Basic encryption, command parsing, and persistent storage.
**Passing Criteria:**

- Store new credentials (site, username, password)
- Retrieve credentials for a given site
- Save/load data from file
- Use simple encryption (e.g., XOR cipher)

## Easy Project: Unit Converter

**Description:** Convert between units like meters to feet, Celsius to Fahrenheit, etc.
**Expectations:** Accurate math conversions and intuitive CLI interface.
**Passing Criteria:**

- Support at least 3 unit types
- User selects type and value to convert
- Outputs converted result
- Handles invalid input

## Easy Project: To-Do List CLI App

**Description:** Create a command-line to-do list with task persistence.
**Expectations:** User can add, delete, and view tasks with a file backend.
**Passing Criteria:**

- Add tasks to list
- View task list
- Delete specific task
- Save/load from file

## Easy Project: Simple Chat Bot

**Description:** A rule-based chatbot that responds to user input with predefined rules.
**Expectations:** Pattern matching and string comparison logic.
**Passing Criteria:**

- Responds to at least 10 predefined inputs
- Handles unknown input with a default reply
- Runs in a loop
- Allows user to quit with a command

## Easy Project: Dice Rolling Simulator

**Description:** Simulates dice rolls with varying number of sides.
**Expectations:** Random number generation and replay loop.
**Passing Criteria:**

- Supports custom dice (e.g., d6, d20)
- Rolls random number within bounds
- Allows multiple rolls
- Prints outcome of each roll

## Easy Project: Prime Number Checker

**Description:** Checks if a number is prime and lists primes within a range.
**Expectations:** Efficient prime checking logic.
**Passing Criteria:**

- Check if number is prime
- List primes in a range
- Accepts user input
- Handles invalid entries

## Easy Project: Basic Stopwatch/Timer

**Description:** A console timer with start, stop, and reset commands.
**Expectations:** Accurate time tracking using std::chrono.
**Passing Criteria:**

- Start and stop timer
- Reset and report time
- Displays elapsed time in seconds
- Simple CLI interaction

## Easy Project: Temperature Logger

**Description:** Simulates and logs temperature data over time.
**Expectations:** Data generation, timestamping, file logging.
**Passing Criteria:**

- Generate random temperatures
- Log data to file with timestamp
- Run for N iterations
- Print summary of average/min/max

## Easy Project: Number Guessing Game

**Description:** Guess the randomly generated number within a set range.
**Expectations:** Random logic and feedback loop.
**Passing Criteria:**

- Random number generation
- User gets hints (too high/low)
- Track number of attempts
- Replay option

## Medium Project: Small REST API in C++

**Description:** Build a REST API using Pistache or Crow that supports basic CRUD operations for a 'task manager' or similar concept.
**Expectations:** Routing, JSON parsing, HTTP request handling, data persistence in memory or to a file.
**Passing Criteria:**

- Implements GET, POST, PUT, DELETE
- Parses and returns JSON
- Handles multiple clients
- Stores task list in memory or local file

## Medium Project: Memory Profiler

**Description:** Build a small profiler tool that runs a target program and reports memory usage, growth, and leaks.
**Expectations:** Displays memory statistics and detects obvious leaks via Valgrind or in-code memory monitoring.
**Passing Criteria:**

- Accepts a program as input
- Logs heap and stack usage
- Detects leaks and overuse
- Provides summary output

## Medium Project: Simple Sensor Simulator

**Description:** Simulate input from sensors (like temperature or motion) and process data with filters (moving average, thresholding).
**Expectations:** Generates fake time-series data and processes it in real time using threads or queues.
**Passing Criteria:**

- Generates realistic data at set intervals
- Applies filter algorithms
- Logs filtered output
- Allows user to change thresholds/config

## Medium Project: Simple HTTP Client

**Description:** Create an HTTP client to fetch data from a public API.
**Expectations:** Socket programming or third-party HTTP lib, parse responses.
**Passing Criteria:**

- Connects to URL
- Sends GET request
- Parses and prints JSON
- Handles errors gracefully

## Medium Project: Custom Allocator

**Description:** Implement your own memory allocator (like malloc/free).
**Expectations:** Memory pool creation and block management.
**Passing Criteria:**

- Implements allocate and deallocate
- Tracks free/used memory
- Detects and avoids double-free
- Reports fragmentation

## Hard Project: Device Driver Prototype (e.g., Raspberry Pi I2C)

**Description:** Interface with a hardware device using I2C or SPI, create an abstraction layer in C++ for commands and data collection.
**Expectations:** Real or simulated hardware interaction with robust error handling and modular design.
**Passing Criteria:**

- Initializes and communicates over I2C/SPI
- Sends commands to sensor
- Receives and parses data
- Implements retry and failure detection

## Hard Project: Parallel Computation with OpenCL

**Description:** Write a parallel algorithm (e.g., FFT or matrix multiply) using OpenCL or SYCL and measure performance improvements.
**Expectations:** Kernel creation, host-device data transfer, synchronization, performance timing.
**Passing Criteria:**

- Implements kernel (e.g., FFT)
- Transfers data to/from device
- Compares serial and parallel timing
- Handles memory buffers correctly

## Hard Project: Multi-Agent Edge Processing Simulation

**Description:** Simulate multiple concurrent agents performing data capture, processing, and transmission under constrained resources.
**Expectations:** Concurrency using threads or processes, fallback modes, message passing.
**Passing Criteria:**

- Spawns N agents with shared data queue
- Processes streamed data in real time
- Simulates failure modes and fallback
- Logs system health and processing stats

## Hard Project: Real-time OS Simulation

**Description:** Simulate basic RTOS features like scheduling, context switching.
**Expectations:** Task queue, scheduler logic, interrupt simulation.
**Passing Criteria:**

- Add/remove tasks dynamically
- Implements FIFO/RR scheduler
- Supports task priorities
- Simulates interrupts or preemption
