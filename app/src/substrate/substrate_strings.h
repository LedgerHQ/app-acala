/*******************************************************************************
 *  (c) 2019 - 2024 Zondax AG
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Modules names
static const char* STR_MO_SYSTEM = "System";
static const char* STR_MO_UTILITY = "Utility";
static const char* STR_MO_MULTISIG = "Multisig";
static const char* STR_MO_PROXY = "Proxy";
static const char* STR_MO_BALANCES = "Balances";
static const char* STR_MO_CURRENCIES = "Currencies";
static const char* STR_MO_VESTING = "Vesting";
static const char* STR_MO_TRANSACTIONPAYMENT = "Transactionpayment";
static const char* STR_MO_BOUNTIES = "Bounties";
static const char* STR_MO_COLLATORSELECTION = "Collatorselection";
static const char* STR_MO_SESSION = "Session";
static const char* STR_MO_XCMPQUEUE = "Xcmpqueue";
static const char* STR_MO_XTOKENS = "Xtokens";
static const char* STR_MO_DEMOCRACY = "Democracy";
static const char* STR_MO_DEX = "Dex";
static const char* STR_MO_AGGREGATEDDEX = "Aggregateddex";
static const char* STR_MO_HONZON = "Honzon";
static const char* STR_MO_HOMA = "Homa";
static const char* STR_MO_INCENTIVES = "Incentives";
static const char* STR_MO_NFT = "Nft";
static const char* STR_MO_EVM = "Evm";
static const char* STR_MO_EVMACCOUNTS = "Evmaccounts";
static const char* STR_MO_STABLEASSET = "Stableasset";

// Methods names
static const char* STR_ME_FILL_BLOCK = "Fill block";
static const char* STR_ME_REMARK = "Remark";
static const char* STR_ME_SET_HEAP_PAGES = "Set heap pages";
static const char* STR_ME_SET_CODE = "Set code";
static const char* STR_ME_SET_CODE_WITHOUT_CHECKS = "Set code without checks";
static const char* STR_ME_REMARK_WITH_EVENT = "Remark with event";
static const char* STR_ME_BATCH = "Batch";
static const char* STR_ME_BATCH_ALL = "Batch all";
static const char* STR_ME_FORCE_BATCH = "Force batch";
static const char* STR_ME_AS_MULTI_THRESHOLD_1 = "As multi threshold 1";
static const char* STR_ME_AS_MULTI = "As multi";
static const char* STR_ME_APPROVE_AS_MULTI = "Approve as multi";
static const char* STR_ME_CANCEL_AS_MULTI = "Cancel as multi";
static const char* STR_ME_PROXY = "Proxy";
static const char* STR_ME_ADD_PROXY = "Add proxy";
static const char* STR_ME_REMOVE_PROXY = "Remove proxy";
static const char* STR_ME_REMOVE_PROXIES = "Remove proxies";
static const char* STR_ME_CREATE_PURE = "Create pure";
static const char* STR_ME_KILL_PURE = "Kill pure";
static const char* STR_ME_ANNOUNCE = "Announce";
static const char* STR_ME_REMOVE_ANNOUNCEMENT = "Remove announcement";
static const char* STR_ME_REJECT_ANNOUNCEMENT = "Reject announcement";
static const char* STR_ME_PROXY_ANNOUNCED = "Proxy announced";
static const char* STR_ME_TRANSFER = "Transfer";
static const char* STR_ME_SET_BALANCE = "Set balance";
static const char* STR_ME_FORCE_TRANSFER = "Force transfer";
static const char* STR_ME_TRANSFER_KEEP_ALIVE = "Transfer keep alive";
static const char* STR_ME_TRANSFER_ALL = "Transfer all";
static const char* STR_ME_FORCE_UNRESERVE = "Force unreserve";
static const char* STR_ME_TRANSFER_NATIVE_CURRENCY = "Transfer native currency";
static const char* STR_ME_UPDATE_BALANCE = "Update balance";
static const char* STR_ME_SWEEP_DUST = "Sweep dust";
static const char* STR_ME_CLAIM = "Claim";
static const char* STR_ME_SET_ALTERNATIVE_FEE_SWAP_PATH = "Set alternative fee swap path";
static const char* STR_ME_DISABLE_CHARGE_FEE_POOL = "Disable charge fee pool";
static const char* STR_ME_WITH_FEE_PATH = "With fee path";
static const char* STR_ME_WITH_FEE_CURRENCY = "With fee currency";
static const char* STR_ME_WITH_FEE_PAID_BY = "With fee paid by";
static const char* STR_ME_WITH_FEE_AGGREGATED_PATH = "With fee aggregated path";
static const char* STR_ME_PROPOSE_BOUNTY = "Propose bounty";
static const char* STR_ME_APPROVE_BOUNTY = "Approve bounty";
static const char* STR_ME_PROPOSE_CURATOR = "Propose curator";
static const char* STR_ME_UNASSIGN_CURATOR = "Unassign curator";
static const char* STR_ME_ACCEPT_CURATOR = "Accept curator";
static const char* STR_ME_AWARD_BOUNTY = "Award bounty";
static const char* STR_ME_CLAIM_BOUNTY = "Claim bounty";
static const char* STR_ME_CLOSE_BOUNTY = "Close bounty";
static const char* STR_ME_EXTEND_BOUNTY_EXPIRY = "Extend bounty expiry";
static const char* STR_ME_SET_INVULNERABLES = "Set invulnerables";
static const char* STR_ME_SET_DESIRED_CANDIDATES = "Set desired candidates";
static const char* STR_ME_SET_CANDIDACY_BOND = "Set candidacy bond";
static const char* STR_ME_REGISTER_AS_CANDIDATE = "Register as candidate";
static const char* STR_ME_REGISTER_CANDIDATE = "Register candidate";
static const char* STR_ME_LEAVE_INTENT = "Leave intent";
static const char* STR_ME_WITHDRAW_BOND = "Withdraw bond";
static const char* STR_ME_SET_KEYS = "Set keys";
static const char* STR_ME_PURGE_KEYS = "Purge keys";
static const char* STR_ME_SERVICE_OVERWEIGHT = "Service overweight";
static const char* STR_ME_SUSPEND_XCM_EXECUTION = "Suspend xcm execution";
static const char* STR_ME_RESUME_XCM_EXECUTION = "Resume xcm execution";
static const char* STR_ME_UPDATE_SUSPEND_THRESHOLD = "Update suspend threshold";
static const char* STR_ME_UPDATE_DROP_THRESHOLD = "Update drop threshold";
static const char* STR_ME_UPDATE_RESUME_THRESHOLD = "Update resume threshold";
static const char* STR_ME_UPDATE_THRESHOLD_WEIGHT = "Update threshold weight";
static const char* STR_ME_UPDATE_WEIGHT_RESTRICT_DECAY = "Update weight restrict decay";
static const char* STR_ME_UPDATE_XCMP_MAX_INDIVIDUAL_WEIGHT = "Update xcmp max individual weight";
static const char* STR_ME_PROPOSE = "Propose";
static const char* STR_ME_SECOND = "Second";
static const char* STR_ME_EMERGENCY_CANCEL = "Emergency cancel";
static const char* STR_ME_EXTERNAL_PROPOSE = "External propose";
static const char* STR_ME_EXTERNAL_PROPOSE_MAJORITY = "External propose majority";
static const char* STR_ME_EXTERNAL_PROPOSE_DEFAULT = "External propose default";
static const char* STR_ME_FAST_TRACK = "Fast track";
static const char* STR_ME_VETO_EXTERNAL = "Veto external";
static const char* STR_ME_CANCEL_REFERENDUM = "Cancel referendum";
static const char* STR_ME_UNDELEGATE = "Undelegate";
static const char* STR_ME_CLEAR_PUBLIC_PROPOSALS = "Clear public proposals";
static const char* STR_ME_UNLOCK = "Unlock";
static const char* STR_ME_CANCEL_PROPOSAL = "Cancel proposal";
static const char* STR_ME_SWAP_WITH_EXACT_SUPPLY = "Swap with exact supply";
static const char* STR_ME_SWAP_WITH_EXACT_TARGET = "Swap with exact target";
static const char* STR_ME_ADD_LIQUIDITY = "Add liquidity";
static const char* STR_ME_ADD_PROVISION = "Add provision";
static const char* STR_ME_CLAIM_DEX_SHARE = "Claim dex share";
static const char* STR_ME_REMOVE_LIQUIDITY = "Remove liquidity";
static const char* STR_ME_LIST_PROVISIONING = "List provisioning";
static const char* STR_ME_UPDATE_PROVISIONING_PARAMETERS = "Update provisioning parameters";
static const char* STR_ME_END_PROVISIONING = "End provisioning";
static const char* STR_ME_ENABLE_TRADING_PAIR = "Enable trading pair";
static const char* STR_ME_DISABLE_TRADING_PAIR = "Disable trading pair";
static const char* STR_ME_REFUND_PROVISION = "Refund provision";
static const char* STR_ME_ABORT_PROVISIONING = "Abort provisioning";
static const char* STR_ME_UPDATE_AGGREGATED_SWAP_PATHS = "Update aggregated swap paths";
static const char* STR_ME_ADJUST_LOAN = "Adjust loan";
static const char* STR_ME_CLOSE_LOAN_HAS_DEBIT_BY_DEX = "Close loan has debit by dex";
static const char* STR_ME_TRANSFER_LOAN_FROM = "Transfer loan from";
static const char* STR_ME_AUTHORIZE = "Authorize";
static const char* STR_ME_UNAUTHORIZE = "Unauthorize";
static const char* STR_ME_UNAUTHORIZE_ALL = "Unauthorize all";
static const char* STR_ME_EXPAND_POSITION_COLLATERAL = "Expand position collateral";
static const char* STR_ME_SHRINK_POSITION_DEBIT = "Shrink position debit";
static const char* STR_ME_ADJUST_LOAN_BY_DEBIT_VALUE = "Adjust loan by debit value";
static const char* STR_ME_TRANSFER_DEBIT = "Transfer debit";
static const char* STR_ME_MINT = "Mint";
static const char* STR_ME_REQUEST_REDEEM = "Request redeem";
static const char* STR_ME_FAST_MATCH_REDEEMS = "Fast match redeems";
static const char* STR_ME_CLAIM_REDEMPTION = "Claim redemption";
static const char* STR_ME_RESET_CURRENT_ERA = "Reset current era";
static const char* STR_ME_FORCE_BUMP_CURRENT_ERA = "Force bump current era";
static const char* STR_ME_FAST_MATCH_REDEEMS_COMPLETELY = "Fast match redeems completely";
static const char* STR_ME_DEPOSIT_DEX_SHARE = "Deposit dex share";
static const char* STR_ME_WITHDRAW_DEX_SHARE = "Withdraw dex share";
static const char* STR_ME_CLAIM_REWARDS = "Claim rewards";
static const char* STR_ME_ETH_CALL = "Eth call";
static const char* STR_ME_CALL = "Call";
static const char* STR_ME_CREATE = "Create";
static const char* STR_ME_CREATE2 = "Create2";
static const char* STR_ME_TRANSFER_MAINTAINER = "Transfer maintainer";
static const char* STR_ME_PUBLISH_CONTRACT = "Publish contract";
static const char* STR_ME_PUBLISH_FREE = "Publish free";
static const char* STR_ME_ENABLE_CONTRACT_DEVELOPMENT = "Enable contract development";
static const char* STR_ME_DISABLE_CONTRACT_DEVELOPMENT = "Disable contract development";
static const char* STR_ME_SELFDESTRUCT = "Selfdestruct";
static const char* STR_ME_CLAIM_ACCOUNT = "Claim account";
static const char* STR_ME_CLAIM_DEFAULT_ACCOUNT = "Claim default account";
static const char* STR_ME_SWAP = "Swap";
static const char* STR_ME_REDEEM_PROPORTION = "Redeem proportion";
static const char* STR_ME_REDEEM_SINGLE = "Redeem single";
static const char* STR_ME_REDEEM_MULTI = "Redeem multi";
static const char* STR_ME_WITH_WEIGHT = "With weight";

// Items names
static const char* STR_IT_ratio = "Ratio";
static const char* STR_IT_remark = "Remark";
static const char* STR_IT_pages = "Pages";
static const char* STR_IT_code = "Code";
static const char* STR_IT_items = "Items";
static const char* STR_IT_keys = "Keys";
static const char* STR_IT_prefix = "Prefix";
static const char* STR_IT_subkeys = "Subkeys";
static const char* STR_IT_calls = "Calls";
static const char* STR_IT_index = "Index";
static const char* STR_IT_call = "Call";
static const char* STR_IT_as_origin = "As origin";
static const char* STR_IT_other_signatories = "Other signatories";
static const char* STR_IT_threshold = "Threshold";
static const char* STR_IT_maybe_timepoint = "Maybe timepoint";
static const char* STR_IT_max_weight = "Max weight";
static const char* STR_IT_call_hash = "Call hash";
static const char* STR_IT_timepoint = "Timepoint";
static const char* STR_IT_real = "Real";
static const char* STR_IT_force_proxy_type = "Force proxy type";
static const char* STR_IT_delegate = "Delegate";
static const char* STR_IT_proxy_type = "Proxy type";
static const char* STR_IT_delay = "Delay";
static const char* STR_IT_spawner = "Spawner";
static const char* STR_IT_height = "Height";
static const char* STR_IT_ext_index = "Ext index";
static const char* STR_IT_dest = "Dest";
static const char* STR_IT_amount = "Amount";
static const char* STR_IT_who = "Who";
static const char* STR_IT_new_free = "New free";
static const char* STR_IT_new_reserved = "New reserved";
static const char* STR_IT_source = "Source";
static const char* STR_IT_keep_alive = "Keep alive";
static const char* STR_IT_currency_id = "Currency id";
static const char* STR_IT_accounts = "Accounts";
static const char* STR_IT_lock_id = "Lock id";
static const char* STR_IT_schedule = "Schedule";
static const char* STR_IT_vesting_schedules = "Vesting schedules";
static const char* STR_IT_fee_swap_path = "Fee swap path";
static const char* STR_IT_pool_size = "Pool size";
static const char* STR_IT_swap_threshold = "Swap threshold";
static const char* STR_IT_payer_addr = "Payer addr";
static const char* STR_IT_payer_sig = "Payer sig";
static const char* STR_IT_fee_aggregated_path = "Fee aggregated path";
static const char* STR_IT_description = "Description";
static const char* STR_IT_bounty_id = "Bounty id";
static const char* STR_IT_curator = "Curator";
static const char* STR_IT_fee = "Fee";
static const char* STR_IT_beneficiary = "Beneficiary";
static const char* STR_IT_new_ = "New";
static const char* STR_IT_max = "Max";
static const char* STR_IT_bond = "Bond";
static const char* STR_IT_new_candidate = "New candidate";
static const char* STR_IT_proof = "Proof";
static const char* STR_IT_weight_limit = "Weight limit";
static const char* STR_IT_dest_weight_limit = "Dest weight limit";
static const char* STR_IT_asset = "Asset";
static const char* STR_IT_currencies = "Currencies";
static const char* STR_IT_fee_item = "Fee item";
static const char* STR_IT_assets = "Assets";
static const char* STR_IT_proposal = "Proposal";
static const char* STR_IT_ref_index = "Ref index";
static const char* STR_IT_vote = "Vote";
static const char* STR_IT_proposal_hash = "Proposal hash";
static const char* STR_IT_voting_period = "Voting period";
static const char* STR_IT_to = "To";
static const char* STR_IT_conviction = "Conviction";
static const char* STR_IT_balance = "Balance";
static const char* STR_IT_target = "Target";
static const char* STR_IT_maybe_ref_index = "Maybe ref index";
static const char* STR_IT_prop_index = "Prop index";
static const char* STR_IT_path = "Path";
static const char* STR_IT_supply_amount = "Supply amount";
static const char* STR_IT_min_target_amount = "Min target amount";
static const char* STR_IT_target_amount = "Target amount";
static const char* STR_IT_max_supply_amount = "Max supply amount";
static const char* STR_IT_currency_id_a = "Currency id a";
static const char* STR_IT_currency_id_b = "Currency id b";
static const char* STR_IT_max_amount_a = "Max amount a";
static const char* STR_IT_max_amount_b = "Max amount b";
static const char* STR_IT_min_share_increment = "Min share increment";
static const char* STR_IT_stake_increment_share = "Stake increment share";
static const char* STR_IT_amount_a = "Amount a";
static const char* STR_IT_amount_b = "Amount b";
static const char* STR_IT_owner = "Owner";
static const char* STR_IT_remove_share = "Remove share";
static const char* STR_IT_min_withdrawn_a = "Min withdrawn a";
static const char* STR_IT_min_withdrawn_b = "Min withdrawn b";
static const char* STR_IT_by_unstake = "By unstake";
static const char* STR_IT_min_contribution_a = "Min contribution a";
static const char* STR_IT_min_contribution_b = "Min contribution b";
static const char* STR_IT_target_provision_a = "Target provision a";
static const char* STR_IT_target_provision_b = "Target provision b";
static const char* STR_IT_not_before = "Not before";
static const char* STR_IT_paths = "Paths";
static const char* STR_IT_updates = "Updates";
static const char* STR_IT_collateral_adjustment = "Collateral adjustment";
static const char* STR_IT_debit_adjustment = "Debit adjustment";
static const char* STR_IT_max_collateral_amount = "Max collateral amount";
static const char* STR_IT_from = "From";
static const char* STR_IT_increase_debit_value = "Increase debit value";
static const char* STR_IT_min_increase_collateral = "Min increase collateral";
static const char* STR_IT_decrease_collateral = "Decrease collateral";
static const char* STR_IT_min_decrease_debit_value = "Min decrease debit value";
static const char* STR_IT_debit_value_adjustment = "Debit value adjustment";
static const char* STR_IT_from_currency = "From currency";
static const char* STR_IT_to_currency = "To currency";
static const char* STR_IT_debit_transfer = "Debit transfer";
static const char* STR_IT_allow_fast_match = "Allow fast match";
static const char* STR_IT_redeemer_list = "Redeemer list";
static const char* STR_IT_redeemer = "Redeemer";
static const char* STR_IT_soft_bonded_cap_per_sub_account = "Soft bonded cap per sub account";
static const char* STR_IT_estimated_reward_rate_per_era = "Estimated reward rate per era";
static const char* STR_IT_commission_rate = "Commission rate";
static const char* STR_IT_fast_match_fee_rate = "Fast match fee rate";
static const char* STR_IT_last_era_bumped_block = "Last era bumped block";
static const char* STR_IT_frequency = "Frequency";
static const char* STR_IT_era_index = "Era index";
static const char* STR_IT_bump_amount = "Bump amount";
static const char* STR_IT_lp_currency_id = "Lp currency id";
static const char* STR_IT_pool_id = "Pool id";
static const char* STR_IT_metadata = "Metadata";
static const char* STR_IT_properties = "Properties";
static const char* STR_IT_attributes = "Attributes";
static const char* STR_IT_class_id = "Class id";
static const char* STR_IT_quantity = "Quantity";
static const char* STR_IT_token = "Token";
static const char* STR_IT_action = "Action";
static const char* STR_IT_input = "Input";
static const char* STR_IT_gas_limit = "Gas limit";
static const char* STR_IT_storage_limit = "Storage limit";
static const char* STR_IT_access_list = "Access list";
static const char* STR_IT_valid_until = "Valid until";
static const char* STR_IT_salt = "Salt";
static const char* STR_IT_contract = "Contract";
static const char* STR_IT_new_maintainer = "New maintainer";
static const char* STR_IT_eth_address = "Eth address";
static const char* STR_IT_eth_signature = "Eth signature";
static const char* STR_IT_pool_asset = "Pool asset";
static const char* STR_IT_precisions = "Precisions";
static const char* STR_IT_mint_fee = "Mint fee";
static const char* STR_IT_swap_fee = "Swap fee";
static const char* STR_IT_redeem_fee = "Redeem fee";
static const char* STR_IT_initial_a = "Initial a";
static const char* STR_IT_fee_recipient = "Fee recipient";
static const char* STR_IT_yield_recipient = "Yield recipient";
static const char* STR_IT_precision = "Precision";
static const char* STR_IT_amounts = "Amounts";
static const char* STR_IT_min_mint_amount = "Min mint amount";
static const char* STR_IT_i = "I";
static const char* STR_IT_j = "J";
static const char* STR_IT_dx = "Dx";
static const char* STR_IT_min_dy = "Min dy";
static const char* STR_IT_asset_length = "Asset length";
static const char* STR_IT_min_redeem_amounts = "Min redeem amounts";
static const char* STR_IT_min_redeem_amount = "Min redeem amount";
static const char* STR_IT_max_redeem_amount = "Max redeem amount";
static const char* STR_IT_a = "A";
static const char* STR_IT_future_a_block = "Future a block";
static const char* STR_IT_weight = "Weight";
static const char* STR_IT_gas_price = "Gas price";
static const char* STR_IT_maybe_hash = "Maybe hash";

#ifdef __cplusplus
}
#endif
