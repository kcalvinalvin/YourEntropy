# YourEntropy
Don't trust big company scientists. Use one of the oldest form of entropy for your Bitcoin.

Wrapper around Bitcoin Core code for Private/Public key generation. Able to be done completely offline.
Built for the ease of use. Allows for easy generation of a seed completely offline for a low cost.

## Features

1. Coin flips for entropy

RNGs are where the backdoors are with cryptography. I don't get how they work so I like coins.

2. BIP-39 seed generation

While this is a wrapper around Bitcoin Core, it does introduce BIP-39 support.
For security reasons, Bitcoin Core project has chose to not implement BIP-39.
However, that means you need to store the raw key which is usually not a good idea.
Since the user is the greatest risk to their Bitcoin, I have chose to support BIP-39.

3. Address generation

After you generate the seed, it will give you a address you can send Bitcoin to.
Supports both P2SH (the address with segwit support with prefix 3)
and P2WPKH         (the native segwit address with prefix bc1)

4. Bitcoin Core libraries used

All the crypto and core functions are ripped directly off of Bitcoin Core and are updated along
with Bitcoin Core. No additional security assumptions (such as a cryptography library in a different
language) besides the additional code needed for YourEntropy.

## Dependencies

All you need is g++ version higher than 6.3.
For Raspbian users, all you have to do is download NOOBS to an micro sd card.
https://www.raspberrypi.org/help/noobs-setup/2/


Recommended usage is to download a fresh linux distro of your choice, making a bootable drive,
and running this program in that live boot mode.
