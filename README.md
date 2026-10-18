# 📞 Telecom Management System (C++ / OOP)

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![OOP](https://img.shields.io/badge/Paradigm-Object--Oriented%20Programming-green.svg)]()
[![Status](https://img.shields.io/badge/Project-Complete-brightgreen.svg)]()

> A robust, highly-scalable **Telecom Management System** designed and engineered in C++ using advanced **Object-Oriented Programming (OOP)** principles and custom **Data Structures**.

---

## 🌟 Executive Overview

This project simulates an enterprise-level telecommunications architecture. It efficiently handles multi-tier customer accounts, billing options (Prepaid & Postpaid), data bundle management, and comprehensive call activity logging.

The system is built with modularity, maintainability, and clean code standards at its core, showcasing strict adherence to standard software design principles.

---

## ⚡ Key Technical Features & Capabilities

* 👤 **Multi-Type Customer Infrastructure:**
  * Support for individual (`SingleCustomer`) and corporate (`CompanyCustomer`) user models.
  * Linked list management (`CustomerList` & `CustomerNode`) for dynamic data handling.

* 💳 **Service & Billing Architecture:**
  * **Prepaid Services:** Real-time balance tracking, instant bundle recharges, and usage validation.
  * **Postpaid Services:** Flexible billing cycles and automated usage logging.

* 🌐 **Data Bundle Engine:**
  * Custom data package initialization (`DataBundle`), activation, and usage tracking.

* 📊 **Call & Activity Logging System:**
  * Precise session recording (`CallRecording`) for tracking call durations and account activity logs.

---

## 🏗️ Architecture & OOP Design Principles

The architecture leverages core OOP paradigms to maximize code reuse and abstraction:

* 🧬 **Inheritance & Polymorphism:** Base class `Customer` extended by specialized customer types, enabling runtime behavior overrides.
* 🔒 **Encapsulation:** Complete data hiding through scoped header interfaces (`.h`) and clean separation from implementation (`.cpp`).
* 🧩 **Abstraction:** Clean separation between high-level service logic and underlying data structures.

---

## 📁 Repository Structure

```text
Telecom-System/
├── include/                 # Header Interface Files (.h)
│   ├── customer.h
│   ├── customerlist.h
│   ├── customernode.h
│   ├── companycustomer.h
│   ├── singlecustomer.h
│   ├── service.h
│   ├── prepaid.h
│   ├── postpaid.h
│   ├── databundle.h
│   └── callrecording.h
├── src/                     # Core Implementation Files (.cpp)
│   ├── customer.cpp
│   ├── customerlist.cpp
│   ├── customernode.cpp
│   ├── companycustomer.cpp
│   ├── singlecustomer.cpp
│   ├── service.cpp
│   ├── prepaid.cpp
│   ├── postpaid.cpp
│   ├── databundle.cpp
│   └── callrecording.cpp
└── main.cpp                 # Main Application Driver File
انسخ الكلام دة قصدك
