# USFRANC CORE

USFranc Core integration/staging tree

🌐 Website: https://usfranc.com  
💻 Source: https://github.com/USFRANC/usfranc2

---

## What is USFranc?

USFranc (USF) is a decentralized digital currency designed for fast global
transactions with **zero transaction fees**.

The network operates using **peer-to-peer technology** with no central
authority. Transaction validation and block creation are handled collectively
by nodes participating in the network.

USFranc Core is the **official open-source implementation** of the USFranc
protocol.

---

## License

USFranc Core is released under the **MIT License**.

See the `COPYING` file for more information or visit:

https://opensource.org/licenses/MIT

---

## Development Process

The `master` branch is regularly built and tested but is not guaranteed to be
completely stable.

Stable releases are created using tagged versions in the repository.

Development of the USFranc Core software is maintained by the USFranc
development team.

---

## Testing

Testing and code review are critical for maintaining network security.

The project includes several types of automated tests.

### Unit Tests

Unit tests can be run with:


make check


Test sources are located in:


src/test/


---

### Functional Tests

Functional tests simulate real node behavior and network interaction.

They can be run using:


test/functional/test_runner.py


---

## Documentation

Detailed documentation can be found in the `doc/` directory.

Important documents include:

- Blockchain specifications
- Node setup guides
- RPC API documentation
- Build instructions

---

## Building

Instructions for building USFranc Core can be found in:


doc/build-unix.md


---

## Security

If you discover a security vulnerability, please report it privately through
the official website:

https://usfranc.com
