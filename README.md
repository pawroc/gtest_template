# Disclaimer

This project is a template of project with testing framework integration.
The project incorporates GTest and TypeMock.

## Build

### Executable

```bash
(mkdir -p build; cd build; cmake ..; cmake --build .)
```

### UTs

```bash
(mkdir -p build; cd build; cmake -DBUILD_TESTING=ON ..; cmake --build .)
```
