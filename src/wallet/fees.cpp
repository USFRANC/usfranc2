// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <wallet/fees.h>

#include <wallet/coincontrol.h>
#include <wallet/wallet.h>


CAmount GetRequiredFee(const CWallet& wallet, unsigned int nTxBytes, uint64_t mweb_weight)
{
    (void)wallet; (void)nTxBytes; (void)mweb_weight;
    // Wallet-required fee forced to zero
    return 0;
}


CAmount GetMinimumFee(const CWallet& wallet, unsigned int nTxBytes, uint64_t mweb_weight,
                      const CCoinControl& coin_control, FeeCalculation* feeCalc)
{
    (void)wallet; (void)nTxBytes; (void)mweb_weight; (void)coin_control;
    // Wallet minimum fee forced to zero
    if (feeCalc) {
        // If FeeCalculation and FeeReason exist in your tree, set reason; otherwise omit
        feeCalc->reason = FeeReason::NONE;
    }
    return 0;
}


CFeeRate GetRequiredFeeRate(const CWallet& wallet)
{
    (void)wallet;
    // No required fee rate
    return CFeeRate(0);
}


CFeeRate GetMinimumFeeRate(const CWallet& wallet,
                           const CCoinControl& coin_control,
                           FeeCalculation* feeCalc)
{
    (void)wallet; (void)coin_control; (void)feeCalc;
    // No minimum fee rate
    return CFeeRate(0);
}


CFeeRate GetDiscardRate(const CWallet& wallet)
{
    unsigned int highest_target = wallet.chain().estimateMaxBlocks();
    CFeeRate discard_rate = wallet.chain().estimateSmartFee(highest_target, false /* conservative */);
    // Don't let discard_rate be greater than longest possible fee estimate if we get a valid fee estimate
    discard_rate = (discard_rate == CFeeRate(0)) ? wallet.m_discard_rate : std::min(discard_rate, wallet.m_discard_rate);
    // Discard rate must be at least dustRelayFee
    discard_rate = std::max(discard_rate, wallet.chain().relayDustFee());
    return discard_rate;
}
