// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const std::string mainnet_seeds[] = {"dnsseed.ipv6admin.com",
											"dnsseedua.local.support",
											"dnsseed.fair.exchange",
											"explorer.safecoin.org",
											"explorer.deepsky.space",
											"140.82.45.57",
											"8.12.22.254",
											"140.82.11.189",
											"185.20.184.51",
											"176.107.179.32",
											"45.63.13.60",
											""};

static const std::string testnet_seeds[] = {""};

static const int mainnet_port = 8770;
static const int testnet_port = 18770;

static unsigned char pchMessageStart[4] = { 0xF1, 0xED, 0xE2, 0x8F };
static unsigned char pchMessageStart_testnet[4] = { 0x5B, 0x1E, 0x7F, 0x63 };

#define REQUIRE_VERSION 170020
static const int minimunClientVersion = 170020;
static const int PROTOCOL_VERSION = 170021; //Upcoming SafeNodes Update
static const int INIT_PROTO_VERSION = 212; //Safecoin
#endif // __INCLUDED_COIN_H__
