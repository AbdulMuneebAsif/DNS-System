# DNS-System

## Overview

The DNS-System is a C++ application designed to manage a blacklist of DNS entries. It allows users to create, search, and manage entries in a blacklist, which includes details such as domain names, IP addresses, countries, and entry dates. The system provides a console-based menu interface for interacting with the blacklist.

## Features

- **Create New Entries**: Add new DNS entries to the blacklist with details like block ID, domain name, IP address, country, and entry date.
- **Search Functionality**: Search for entries by block ID, domain name, or IP address.
- **View Records**: View entries filtered by country or entry date.
- **Remove Entries**: Remove entries from the blacklist by block ID, domain name, IP address, country, or entry date.
- **Console Interface**: A user-friendly console interface for easy interaction.

## Code Structure

- **Main Application**: The main application logic is contained in `main.cpp`, which initializes the `Blacklist` class and starts the menu interface.
  - Reference: `DNS/DNS/main.cpp` (startLine: 11, endLine: 19)

- **Blacklist Management**: The `Blacklist` class handles all operations related to managing the DNS entries, including insertion, deletion, and searching.
  - Reference: `DNS/DNS/implimentation.cpp` (startLine: 83, endLine: 962)

- **Data Structure**: The `BlockedEntry` class represents individual DNS entries in the blacklist, with attributes for block ID, domain name, IP address, country, and entry date.
  - Reference: `DNS/DNS/BlockedEntryClass.h` (startLine: 7, endLine: 38)

## Getting Started

### Prerequisites

- A C++ compiler that supports C++11 or later.
- Basic understanding of C++ and console-based applications.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/DNS-System.git
   ```

2. Navigate to the project directory:
   ```bash
   cd DNS-System/DNS
   ```

3. Compile the project:
   ```bash
   g++ -o dns_system main.cpp implimentation.cpp
   ```

4. Run the executable:
   ```bash
   ./dns_system
   ```

## Usage

Upon running the application, you will be presented with a menu. You can navigate through the options to create, search, view, or remove DNS entries from the blacklist. Follow the on-screen instructions to perform the desired operations.

## Contributing

Contributions are welcome! fork the repository and submit a pull request for any enhancements or bug fixes.

## Acknowledgments

- This project was developed as part of a DSA Project.
