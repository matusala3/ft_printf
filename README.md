# 🔨 ft\_printf

### *Because ft\_putnbr() and ft\_putstr() aren't enough.*

## 📝 About the Project

In this project, you will re-implement the iconic **`printf`** function from the C Standard Library.
More than just a simple exercise, it challenges you to master **variadic functions**, **memory safety**, and **modular design**.

Once completed, your **`ft_printf`** will become a reusable, high-performance library component that you can include in all your future C projects.

---

## 🚀 Getting Started

### Prerequisites

* A C compiler (e.g., `cc`, `gcc`, `clang`) prefer cc with -Wall -Werror -Wextra if your in Hive

### Installation

```bash
git clone https://github.com/matusala3/ft_printf.git
cd ft_printf
make
```

This will generate **`libftprintf.a`**, your static library.

---

## ⚙️ Usage

### Integration in Your Projects

1. Include the header:

   ```c
   #include "ft_printf.h"
   ```

2. Link the library when compiling:

   ```bash
   cc -Wall -Wextra -Werror main.c libftprintf
   ```

3. Example usage:

   ```c
   ft_printf("Hello, %s! You have %d new messages.\n", "User", 5);
   ```

---

## 🧹 Supported Conversions

| Specifier | Description                          |
| --------- | ------------------------------------ |
| `%c`      | Character                            |
| `%s`      | String                               |
| `%p`      | Pointer (hexadecimal representation) |
| `%d`      | Signed decimal integer               |
| `%i`      | Signed decimal integer               |
| `%u`      | Unsigned decimal integer             |
| `%x`      | Unsigned hexadecimal (lowercase)     |
| `%X`      | Unsigned hexadecimal (uppercase)     |
| `%%`      | Literal percent sign                 |

---

## 🎯 Bonus Features

* **Flags:**

  * `-` : Left-justify within the given field width
  * `0` : Pad with zeros instead of spaces
  * `.` : Precision specification
  * Field width handling
  * `#` : Alternate form (prefixes for `x`, `X`, `o`)
  * `+` : Show plus sign for positive numbers
  * Space (` `): Insert space before positive numbers

> **Note**: The bonus will only be evaluated if the mandatory part is perfect.

---

## 🛠️ Development Guidelines

* **Language**: C
* **Coding Standard**: *42 Norminette*
* **Compilation Flags**: `-Wall -Wextra -Werror`
* **Memory Safety**: No leaks, no crashes, no undefined behavior
* **Makefile Rules**:

  * `all`, `clean`, `fclean`, `re`, `bonus`

---

## 🧪 Testing

You are highly encouraged to develop and maintain your own **test suites**.
A simple test might look like:

```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    ft_printf("Custom: %d\n", 42);
    printf("Original: %d\n", 42);
}
```

Compare outputs to ensure your implementation mirrors the standard `printf`.

---

## 👥 Credits

Developed by:
**Matusala Gebrehiwot**

---

## 📄 License

This project is part of the **42 School Curriculum** and is intended for educational purposes.
