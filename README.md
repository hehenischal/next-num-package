# next-num-package
Takes a number 0-1000 as an input and gives out the next number. 
Be careful When 
- nextnuming a number greater than 1000
- nextnuming a negative number
- nextnuming a non-integer

# Installation
```bash
pip install nextnum
```

# Usage
```python
from nextnum.functions import nextnum

print(nextnum(1000)) # 1001
print(nextnum(0)) # 1
print(nextnum(1001)) # "Number should be between 0 and 1000"
print(nextnum(-1)) # "Number should be between 0 and 1000"
print(nextnum(1.1)) # "Number should be an integer"
```

# Author
 [Nischal Lamichhane](https://github.com/hehenischal) Built this Package with the best language (c++) in the world. You cad find the source for it at [repository](https://github.com/hehenischal/next-num-package).

```python version 3.8```
