# 🚀 C++ Conditional Programs  

This repository contains **C++ programs** that utilize **if-else statements** to solve real-world problems, including **voting eligibility checks, divisibility tests, number classifications, student grading, shopping bill calculations, electricity bill computations, and finding the maximum number from 2, 3, or 4 inputs**.  

Each program is structured to ensure **accuracy, proper validation, and efficient execution**.  

---

## 📌 Project Overview  

### **1️⃣ Voting Eligibility Checker (`voting_age_validation.cpp`)**  
🔹 Determines whether a user is eligible to vote based on their age.  
🔹 Ensures **valid age input** (rejects negative values, zero, and unrealistic ages).  
🔹 If under 18, informs the user how many years are left for eligibility.  

### **2️⃣ Divisibility Checker (`divisibility_checker.cpp`)**  
🔹 Checks if a given number is **divisible by 7**.  
🔹 Provides a clear output indicating whether the number is divisible or not.  

### **3️⃣ Number Classification (`number_classification.cpp`)**  
🔹 Determines if a number is **positive, negative, or neutral (zero)**.  
🔹 Ensures valid numeric input and displays a precise classification.  

### **4️⃣ Student Grade Calculator (`grade_calculator.cpp`)**  
🔹 Assigns a grade based on the **student’s percentage**.  
🔹 Grading Structure:  
   - **90% and above** → A+  
   - **80% - 89%** → A  
   - **70% - 79%** → B  
   - **60% - 69%** → C  
   - **50% - 59%** → D  
   - **Below 50%** → F (Fail)  

### **5️⃣ Shopping Bill Calculator (`shopping_bill_calc.cpp`)**  
🔹 Calculates the final bill amount after applying a discount based on the purchase amount.  
🔹 Discount Structure:  
   - ₹0 - ₹500 → **5%**  
   - ₹501 - ₹1000 → **10%**  
   - ₹1001 - ₹5000 → **15%**  
   - ₹5001 - ₹10000 → **20%**  
   - ₹10001+ → **25%**  

### **6️⃣ Electricity Bill Calculation (`electricity_bill_calc.cpp`)**  
🔹 Computes the total electricity bill based on unit consumption.  
🔹 Pricing Structure:  
   - **0 - 50 units** → ₹7/unit  
   - **51 - 100 units** → ₹7.5/unit  
   - **101 - 150 units** → ₹8/unit  
   - **151+ units** → ₹9/unit  
🔹 Ensures **negative values are not accepted**.  

---

## 🔢 Maximum Number Finder Programs  

### **7️⃣ Find Maximum of Two Numbers (`MaxFinder_2Nums.cpp`)**  
🔹 Compares **two numbers** and prints the largest.  
🔹 Handles cases where both numbers are **equal**.  

### **8️⃣ Find Maximum of Three Numbers (`MaxFinder_3Nums.cpp`)**  
🔹 Compares **three numbers** and prints the largest.  
🔹 Detects **ties** if two or more numbers are equal.  
🔹 Special case: **All three numbers being equal** is handled properly.  

### **9️⃣ Find Maximum of Four Numbers (`MaxFinder_4Nums.cpp`)**  
🔹 Compares **four numbers** to determine the largest.  
🔹 Uses **nested if-else** for structured decision-making.  
🔹 Checks for equality and **detects ties** when multiple numbers are the maximum.  

---

## 🛠️ How to Run  

### **🔹 Using a C++ Compiler (Command Line Method)**  
1. **Clone this repository**  
   ```sh
   git clone https://github.com/yourusername/CPP_Conditional_Projects.git
   cd CPP_Conditional_Projects