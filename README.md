# avr-libcpp
[![Build Status](https://travis-ci.com/apcountryman/avr-libcpp.svg?branch=master)](https://travis-ci.com/apcountryman/avr-libcpp)

A partial implementation of the C++ standard library (C++17 only) for use with
avr-gcc/avr-libc.

## Obtaining the Source Code
HTTPS:
```shell
git clone --recurse-submodules https://github.com/apcountryman/avr-libcpp.git
```
SSH:
```shell
git clone --recurse-submodules git@github.com:apcountryman/avr-libcpp.git
```

## Usage (Dependency)
To use this library as a dependency, simply add the subdirectory containing this
repository to a CMake build, and link with the `avr-libcpp` static library.
```cmake
add_subdirectory( avr-libcpp )
```
```cmake
target_link_libraries(
    foo
    avr-libcpp
)
```

## Usage (Development)
This repository's Git `pre-commit` hook script is the simplest way to configure, build,
and test this project during development.
See the `pre-commit` script's help text for usage details
```shell
./git/hooks/pre-commit --help
```

Additional checks, such as static analysis, are performed by this project's Travis CI
jobs.

## Versioning
Post version 0.1.0, `avr-libcpp` will follow the [Abseil Live at Head
philosophy](https://abseil.io/about/philosophy).

## Workflow
`avr-libcpp` uses the [GitHub flow](https://guides.github.com/introduction/flow/)
workflow.

## Git Hooks
To install this repository's Git hooks, execute the `install` script located in the
`git/hooks` directory.
See the `install` script's help text for usage details.
```shell
./git/hooks/install --help
```

## Authors
- Andrew Countryman

## License
`avr-libcpp` is licensed under the Apache License, Version 2.0.
For more information, [see the `LICENSE` file in this repository](LICENSE).
