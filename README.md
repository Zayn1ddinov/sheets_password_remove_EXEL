# Excel File Sheet Protection Removal Script

This Python script utilizes the `openpyxl` library to remove sheet protection from an Excel file. It also integrates the `tkinter` library for creating a file selection dialog window.

## Instructions

1. Ensure Python is installed on your system.
2. Install the `openpyxl` library if you haven't already:

   ```bash
   pip install openpyxl
1. Run the remove_excel_sheet_protection.py script.
2. The script will open a file selection dialog window for choosing an Excel file.
3. It loads the selected file, checks for sheet protection on each sheet, and if protection is found, removes it by setting a new empty password.
4. The modified file will be saved as "modified_file.xlsx" in the same directory where the script is located.
# Usage

Run the remove_excel_sheet_protection.py script.
Select the Excel file for which you want to remove sheet protection.
The script will process the selected file and create a new file without sheet protection.
Runtime Requirements

Python 3.x
openpyxl library
tkinter library
Note

This script uses the openpyxl library to handle Excel files and tkinter for creating a file selection dialog window.
