#  4-Servo Humanoid Walking Robot  
*A beginner-friendly Arduino project simulating human walking using servo motors*

---

## 🚀 Overview

This project showcases a minimal yet effective **humanoid robot** that simulates walking using just **four micro servo motors** and an **Arduino Uno R3**. Designed as an introductory robotics and motion-control experiment, the robot performs a **servo sweep test** and executes a **step-by-step walking sequence** using basic servo programming.

---
## 🖼️ Project Preview

Take a closer look at the 4-servo walking robot in action:

<img width="1161" height="682" alt="3" src="https://github.com/user-attachments/assets/6d86febc-b924-40b2-952a-6d5acfd72f72" />
<img width="1130" height="702" alt="4" src="https://github.com/user-attachments/assets/48f5dae2-28ca-49cc-b3f8-b5abe2aff0da" />





## 🧩 Key Features

-  Servo sweep test (0° → 180° → 0°)
-  Basic walking motion with right/left leg control
-  Servo stabilization at 90° (neutral standing pose)


---

## ⚙️ Hardware Used

| Component            | Quantity |
|----------------------|----------|
| Arduino Uno R3       | 1        |
| Micro Servo SG90      | 4        |
| Jumper Wires         | Several  |


---
**For more technical details, full algorithm breakdowns, and component wiring**,  
please refer to the full pdf

---
##  Walking Algorithm

```plaintext
Step 0: Set all joints to 90° (neutral pose)

1. Lift right leg
   - Right Knee → 60°
   - Right Hip → 70°

2. Swing right leg forward
   - Right Hip → 110°

3. Lower right leg
   - Knee & Hip → Return to 90°

4. Shift weight

5. Repeat for left leg


