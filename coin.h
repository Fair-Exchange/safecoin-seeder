// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

//actual clientSubVersion
static const std::string CSV1 = "/SafeNode:2.0.6-rc1/";
static const std::string CSV2 = "/SafeNode:2.0.6-1/";
static const std::string CSV3 = "/SafeNode:2.0.6-2/";
static const std::string CSV4 = "/SafeNode:2.0.6-3/";
static const std::string CSV5 = "/SafeNode:2.0.6-4/";
static const std::string CSV6 = "/SafeNode:2.0.6-4(bitcore)/";

static const std::string mainnet_seeds[] = {"dnsseedua.local.support",
					    "dnsseedna.local.support",
					    "dnsseedeu.local.support"
					    "192.169.94.85",
					    "45.76.137.105",
					    "101.100.182.76",
					    "178.63.71.183",
					    "155.138.134.235",
					    "165.227.216.124",
					    "66.42.45.93",
					    "167.86.116.129",
					    "207.148.5.216",
					    "45.32.239.135",
					    "140.82.62.127",
					    "93.114.73.8",
					    "84.232.245.208",
					    "164.68.104.112",
					    "173.249.36.27",
					    "38.242.7.242",
					    "93.170.158.40",
					    "dnsseed.fair.exchange",
					    "explorer.safecoin.org",
					    ""};

static const std::string testnet_seeds[] = {""};

static const int mainnet_port = 8770;
static const int testnet_port = 18770;

static unsigned char pchMessageStart[4] = { 0xF1, 0xED, 0xE2, 0x8F };
static unsigned char pchMessageStart_testnet[4] = { 0x5B, 0x1E, 0x7F, 0x63 };

#define REQUIRE_VERSION 170022
static const int minimunClientVersion = 170022;
static const int PROTOCOL_VERSION = 170023; //dnsseders run
static const int INIT_PROTO_VERSION = 212;
#endif // __INCLUDED_COIN_H__
