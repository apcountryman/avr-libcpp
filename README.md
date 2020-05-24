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
