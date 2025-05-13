# 🧪 Simple Code Testers: Language Installation Checker

This project provides simple code examples in multiple programming languages to verify successful installation of compilers or interpreters. It also includes Verilog and SystemVerilog setups for hardware description language testing.

---

## 📌 Project Overview

- **Core Code Examples**:
  - C, C++, Go, and Python scripts to test basic functionality (string manipulation, math, and time display).
- **Verilog/SystemVerilog**:
  - Quartus and ModelSim project files for hardware simulation (`testVerilog` and `testSystemVerilog` directories).
- **VS Code Support**:
  - Configuration files for C/C++ development in Visual Studio Code (`.vscode/` directory).

---

## 🧰 Tools Used

- [GCC](https://gcc.gnu.org/) and [G++](https://gcc.gnu.org/) for C/C++ compilation
- [Go](https://golang.org/) for Go runtime
- [Python](https://www.python.org/) for Python scripts
- [Quartus Prime](https://www.intel.com/content/www/us/en/software/programmable/quartus-prime/overview.html) and [ModelSim](https://www.intel.com/content/www/us/en/software/programmable/quartus-prime/model-sim.html) for Verilog/SystemVerilog

---

## 🚀 How to Run

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/kasra-noorbakhsh/Simple-Code-Testers.git
   cd Simple-Code-Testers
   ```

2. **Test a Language**:
   ```bash
   # C: Compile and run
   gcc testC.c -o testC -lm
   ./testC
   ```

   ```bash
   # C++: Compile and run
   g++ testC++.cpp -o testCpp
   ./testCpp
   ```

   ```bash
   # Go: Run the script
   go run testGo.go
   ```

   ```bash
   # Python: Run the script
   python testPython.py
   ```

   ```bash
   # Verilog/SystemVerilog: Simulate in Quartus/ModelSim
   cd testVerilog  # or testSystemVerilog
   # Open in Quartus or ModelSim to simulate
   ```

3. **Verify Output**:
   - Each program prompts for a string, reverses it, shows its length, performs math (square root and cosine of 25), and displays the current time.
   - Verilog/SystemVerilog projects should simulate successfully, generating waveforms (`vsim.wlf`).

---

## 📬 Contact

Made by **Kasra Noorbakhsh**  
📧 Feel free to connect or provide feedback!
