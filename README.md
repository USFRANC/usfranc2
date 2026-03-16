What is USFranc?

USFranc (USF) is a decentralized digital currency designed for fast global transactions with zero transaction fees.
It operates on a peer-to-peer network without a central authority, allowing users to send and receive funds anywhere in the world.

USFranc is built on a modified Litecoin Core codebase, using the Scrypt Proof-of-Work algorithm, but introduces a fixed-supply monetary model with all coins created at the genesis phase.

The network maintains security and consensus through distributed nodes that validate transactions and blocks.

The USFranc Core software is the official open-source implementation of the USFranc protocol.

For more information and downloads visit:

https://usfranc.com

Source code:

https://github.com/USFRANC/usfranc2

Key Blockchain Parameters
Parameter	Value
Coin Name	USFranc
Ticker	USF
Consensus	Proof-of-Work (Scrypt)
Block Time	2.5 minutes
Total Supply	90,000,000,000 USF
Block Reward	Premine only (block 1)
Transaction Fees	0 USF
P2P Port	9333
RPC Port	9332
Monetary Model

USFranc uses a fixed supply model.

All coins were created in the first block.

Block Height	Reward
Block 1	90,000,000,000 USF
Block 2+	0 USF

Mining continues to secure the blockchain and produce blocks, but no additional coins are minted.

Genesis Block
Field	Value
Message	"USFranc 2025 is born!"
Genesis Hash	224b262e691177d3b6fb27b940de6889827a0f34dcf4fc5a717bf56b42a82c97
Merkle Root	52faed47c9bc90f229220692251772fe30ff5211848223ad717439a70c41c019
Timestamp	1759906343
Nonce	353165
Address Format

USFranc supports legacy and Bech32 addresses.

Example formats:

Legacy:

LcFHXrfUP3y8VCQ8xAJNRJLqV3vqZ5rWy9

Bech32:

usf1xxxxxxxxxxxxxxxxxxxx
USFranc Core Software

The USFranc Core client includes:

usfrancd        Full node daemon
usfranc-cli     RPC command interface
usfranc-qt      Graphical wallet
usfranc-wallet  Wallet utility
usfranc-tx      Raw transaction tool
Running a Node

Start the daemon:

./src/usfrancd -daemon

Check blockchain status:

./src/usfranc-cli getblockchaininfo

Stop the node:

./src/usfranc-cli stop
Example Configuration

Create usfranc.conf inside the data directory.

Example:

server=1
daemon=1

rpcuser=node1
rpcpassword=password
rpcallowip=127.0.0.1
rpcport=9332

listen=1
port=9333
maxconnections=200
txindex=1
Mining

Mining secures the network by validating blocks.

Since USFranc uses a fixed supply model, mining does not produce new coins but continues to maintain the integrity of the blockchain.

Mining nodes can run continuously to process transactions and maintain network consensus.

Building from Source (Linux)

Install dependencies and build:

./autogen.sh
./configure
make -j$(nproc)

After compilation the binaries will be available in:

src/
Development

USFranc Core is open source and community driven.

The project is based on Litecoin Core but includes modifications for the USFranc monetary model and network parameters.

Developers are encouraged to contribute improvements, security reviews, and tooling for the ecosystem.

Repository:

https://github.com/USFRANC/usfranc2

License

USFranc Core is released under the MIT License.

See the COPYING file for details.
