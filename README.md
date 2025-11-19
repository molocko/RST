# RST
## Replace SomeThin'
### Lightweight header-only string replacement library

A small and simple header-only C++ library that provides more convenient string replacement utilities than the standard `std::string::replace`.

---

## How to use

{ **`namespace RST`** }

### firstReplace
`bool firstReplace(std::string* text, const std::string& what, const std::string& to)`  
Replaces the first occurrence of `what` with `to`.

- `text` — pointer to the string to modify  
- `what` — substring to search for  
- `to` — substring to insert instead  

---

### allReplace
`bool allReplace(std::string* text, const std::string& what, const std::string& to)`  
Replaces all occurrences of `what` with `to`.

- `text` — pointer to the string to modify  
- `what` — substring to search for  
- `to` — substring to insert instead  

---

### Return value
Both functions return:

- `true` — at least one replacement was made  
- `false` — nothing was replaced
