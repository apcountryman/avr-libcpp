# avr-libcpp
[![CI](https://github.com/apcountryman/avr-libcpp/actions/workflows/ci.yml/badge.svg)](https://github.com/apcountryman/avr-libcpp/actions/workflows/ci.yml)
[![Contributor Covenant](https://img.shields.io/badge/Contributor%20Covenant-2.0-4baaaa.svg)](CODE_OF_CONDUCT.md)

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

The `avr-libcpp` static library does not include `::avrlibcpp::VERSION`.
To use `::avrlibcpp::VERSION`, link with the `avr-libcpp-version` static library.
```cmake
target_link_libraries(
    foo
    avr-libcpp
    avr-libcpp-version
)
```

### Configuration Options
avr-libcpp supports the following project configuration options:
- `AVRLIBCPP_USE_PARENT_PROJECT_BUILD_FLAGS` (defaults to `ON`): use parent project's
  build flags
    - The following project configuration options are available if
      `AVRLIBCPP_USE_PARENT_PROJECT_BUILD_FLAGS` is `OFF`:
        - `AVRLIBCPP_MCU`: MCU type
- `AVRLIBCPP_SUPPRESS_SFR_MACROS` (defaults to `OFF`): suppress SFR macros


## Usage (Development)
This repository's Git `pre-commit` hook script is the simplest way to configure, build,
and test this project during development.
See the `pre-commit` script's help text for usage details
```shell
./git/hooks/pre-commit --help
```

Additional checks, such as static analysis, are performed by this project's GitHub Actions
CI workflow.

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

## Code of Conduct
`avr-libcpp` has adopted the Contributor Covenant 2.0 code of conduct.
For more information, [see the `CODE_OF_CONDUCT.md` file in this
repository](CODE_OF_CONDUCT.md).

## Contributing
If you are interested in contributing to `avr-libcpp`, please [read the `CONTRIBUTING.md`
file in this repository](CONTRIBUTING.md).

## Authors
- Andrew Countryman

## License
`avr-libcpp` is licensed under the Apache License, Version 2.0.
For more information, [see the `LICENSE` file in this repository](LICENSE).
