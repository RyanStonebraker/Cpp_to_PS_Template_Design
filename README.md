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
- [x] Abstract Expression class
- [x] Polygon
- [x] Spacer
- [x] Rotated
- [x] Vertical

### Chris
- [x] Abstract Shape class inherited from Expression
- [x] Rectangle
- [x] Square
- [ ] Scaled
- [ ] Horizontal

### Thatcher
- [x] Circle
- [~] Canvas (parent of everything else - calling drawToFile will draw everything)
- [ ] Triangle
- [ ] Layered
- [ ] Test cases with Catch (and example programs)
