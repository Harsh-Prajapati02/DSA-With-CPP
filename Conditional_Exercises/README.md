# 🚀 C++ Conditional Programs  

This repository contains **C++ programs** that utilize **if-else statements** to solve real-world problems, including **voting eligibility checks, shopping bill calculations, and electricity bill computations**.  

Each program is structured to ensure **accuracy, proper validation, and efficient execution**.  

---

## 📌 Project Overview  

### **1️⃣ Voting System (`voting_system.cpp`)**  
🔹 Determines whether a user is eligible to vote based on their age.  
🔹 Ensures **valid age input** (rejects negative values, zero, and unrealistic ages).  
🔹 If under 18, informs the user how many years are left for eligibility.  

### **2️⃣ Shopping Bill Calculator (`shopping_bill_calc.cpp`)**  
🔹 Calculates the final bill amount after applying a discount based on the purchase amount.  
🔹 Discount Structure:  
   - ₹0 - ₹500 → **5%**  
   - ₹501 - ₹1000 → **10%**  
   - ₹1001 - ₹5000 → **15%**  
   - ₹5001 - ₹10000 → **20%**  
   - ₹10001+ → **25%**  

### **3️⃣ Electricity Bill Calculation (`electricity_bill_calc.cpp`)**  
🔹 Computes the total electricity bill based on unit consumption.  
🔹 Pricing Structure:  
   - **0 - 50 units** → ₹7/unit  
   - **51 - 100 units** → ₹7.5/unit  
   - **101 - 150 units** → ₹8/unit  
   - **151+ units** → ₹9/unit  
🔹 Ensures **negative values are not accepted**.  

---

## 🛠️ How to Run  

### **🔹 Using a C++ Compiler (Command Line Method)**  
1. **Clone this repository**  
   ```sh
   git clone https://github.com/yourusername/CPP_Conditional_Projects.git
   cd CPP_Conditional_Projects
