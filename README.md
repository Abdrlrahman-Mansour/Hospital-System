# Hospital System Project

This project implements a **Hospital System** that manages patients in various specializations. The system supports operations like adding patients, displaying patients, and doctor pick-ups for treatment.

## Features
- **Specializations**: The system supports up to **20 different specializations** (e.g., Children, Surgery).
- **Patient Management**:
  - Each specialization can accommodate **up to 5 patients** in a queue.
  - Patients can be added as **regular** or **urgent**:
    - Regular patients are added to the **end** of the queue.
    - Urgent patients are added to the **beginning** of the queue.
  - If a specialization is full, new patients are **not accepted**.
- **Doctor Pick-Up**: Doctors can choose a specialization to pick up patients. If there are no patients in the specialization, the system will inform the doctor.

## How It Works
1. **Add a Patient**:
   - Input the requested specialization (1-20).
   - Input the patient’s name and status (0 for regular, 1 for urgent).
   - If the queue for that specialization is full, the system will display a message and not add the patient.
2. **View Patients**:
   - Print the list of waiting patients for any specialization that has a queue.
3. **Doctor Pick-Up**:
   - Input the requested specialization. If there are patients, the system will remove one and assign the patient to the doctor.
   - If no patients are waiting, the system will inform the doctor.

## Requirements
- **C++ Compiler**: The project requires a working C++ compiler (e.g., GCC, Clang).
- **Development Environment**: Any C++-supported IDE or text editor (e.g., Visual Studio, Code::Blocks).

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/hospital-system.git
