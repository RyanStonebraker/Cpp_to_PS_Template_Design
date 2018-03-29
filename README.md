# Cpp_to_PS
A framework for generating PostScript from C++.

## Client Interface

### Abstract Expression class
- Units <- default: 72 = 1 inch
- List of expression "children"
- drawToString abstract function

### Abstract Shape class inherited from Expression
- Position x,y
- Bounding Box (width, height)

## Work List
### Ryan
- Abstract Expression class
- Polygon
- Spacer
- Rotated
- Vertical

### Chris
- Abstract Shape class inherited from Expression
- Rectangle
- Square
- Scaled
- Horizontal

### Thatcher
- Circle
- Rectangle
- Triangle
- Layered
- Simple test cases
