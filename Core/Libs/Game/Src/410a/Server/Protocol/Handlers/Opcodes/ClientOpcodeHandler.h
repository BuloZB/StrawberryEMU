
/*
 * Copyright (C) 2010-2011 Strawberry-Pr0jcts <http://www.strawberry-pr0jcts.com/>
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with tis program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "OpcodeHandler.h"

#ifndef CLIENT_OPCODES
#define CLIENT_OPCODES

/**
* Declaration of Opcode values.
* Ordered by Category and value.
*/
enum ClientOpcodes
{
    /***********************************************************/
    /********************* ATTACK OPCODES **********************/
    /***********************************************************/
    CMSG_ATTACKSWING                                    = 0x74A8,    // 29864 - 4.0.6.13623
    CMSG_ATTACKSTOP                                     = 0x62C4,    // 25284 - 4.0.6.13623

    /***********************************************************/
    /******************** AUCTION OPCODES **********************/
    /***********************************************************/
    CMSG_AUCTION_SELL_ITEM                              = 0xEE8C,    // 61068 - 4.0.6.13623
    CMSG_AUCTION_REMOVE_ITEM                            = 0x3EEC,    // 16108 - 4.0.6.13623
    CMSG_AUCTION_LIST_ITEMS                             = 0xE48C,    // 58508 - 4.0.6.13623
    CMSG_AUCTION_LIST_OWNER_ITEMS                       = 0x2D8C,    // 11660 - 4.0.6.13623
    CMSG_AUCTION_PLACE_BID                              = 0xA6A0,    // 42656 - 4.0.6.13623
    CMSG_AUCTION_LIST_BIDDER_ITEMS                      = 0x21C0,    // 8640  - 4.0.6.13623
    CMSG_AUCTION_LIST_PENDING_SALES                     = 0xEDEC,    // 60908 - 4.0.6.13623

    /***********************************************************/
    /***************** AUTHENTICATION OPCODES ******************/
    /***********************************************************/
    CMSG_AUTH_SESSION                                   = 0x0E0E,    // 3598  - 4.0.6.13623
    CMSG_REALM_SPLIT                                    = 0x60AC,    // 18301 - 4.0.6.13623
    CMSG_REDIRECTION_FAILED                             = 0x0509,    // 1289  - 4.0.6.13623
    CMSG_UNKNOWN_1296                                   = 0x510,
    CMSG_REDIRECTION_AUTH_PROOF                         = 0x0E4C,    // 3660  - 4.0.6.13623

    // SRP6
    CMSG_AUTH_SRP6_BEGIN                                = 0x033,     // 51   - 4.0.6.13623
    CMSG_AUTH_SRP6_PROOF                                = 0x034,     // 52   - 4.0.6.13623
    CMSG_AUTH_SRP6_RECODE                               = 0x035,     // 53   - 4.0.6.13623

    /***********************************************************/
    /******************* BATTLEFIELD OPCODES *******************/
    /***********************************************************/
    CMSG_BATTLEFIELD_LIST                               = 0x0093,    // 147   - 4.0.6.13623
    CMSG_BATTLEFIELD_JOIN                               = 0x0C91,    // 3217  - 4.0.6.13623
    CMSG_BATTLEFIELD_STATUS                             = 0x8188,    // 33160 - 4.0.6.13623
    CMSG_BATTLEFIELD_PORT                               = 0x0E11,    // 3601  - 4.0.6.13623
    CMSG_BATTLEMASTER_HELLO                             = 0x2D7,
    CMSG_LEAVE_BATTLEFIELD                              = 0x7DC4,    // 32196 - 4.0.6.13623
    CMSG_BATTLEMASTER_JOIN_ARENA                        = 0x0311,    // 785   - 4.0.6.13623
    CMSG_BATTLEFIELD_MGR_ENTRY_INVITE_RESPONSE          = 0x4DF,
    CMSG_BATTLEFIELD_MGR_QUEUE_INVITE_RESPONSE          = 0x8108,    // 33032 - 4.0.6.13623
    CMSG_BATTLEFIELD_MGR_QUEUE_REQUEST                  = 0x4E3,
    CMSG_BATTLEFIELD_MGR_EXIT_REQUEST                   = 0x8580,    // 34176 - 4.0.6.13623

    /***********************************************************/
    /******************* BATTLEFIELD OPCODES *******************/
    /***********************************************************/
    CMSG_REQUEST_RATED_BATTLEGROUND_INFO                = 0x8501,    // 34049 - 4.0.6.13623
    CMSG_BATTLEGROUND_PLAYER_POSITIONS                  = 0x0293,    // 659   - 4.0.6.13623
    CMSG_BATTLEMASTER_JOIN                              = 0x0137,    // 311   - 4.0.6.13623

    /***********************************************************/
    /******************** CALENDAR OPCODES *********************/
    /***********************************************************/
    CMSG_CALENDAR_GET_CALENDAR                          = 0x429,
    CMSG_CALENDAR_GET_EVENT                             = 0x3580,    // 13696 - 4.0.6.13623
    CMSG_CALENDAR_GUILD_FILTER                          = 0xADAC,    // 44460 - 4.0.6.13623
    CMSG_CALENDAR_ARENA_TEAM                            = 0xE9AC,    // 59820 - 4.0.6.13623
    CMSG_CALENDAR_ADD_EVENT                             = 0xF488,    // 62600 - 4.0.6.13623
    CMSG_CALENDAR_UPDATE_EVENT                          = 0xF084,    // 61572 - 4.0.6.13623
    CMSG_CALENDAR_REMOVE_EVENT                          = 0x6C88,    // 27784 - 4.0.6.13623
    CMSG_CALENDAR_COPY_EVENT                            = 0xBF84,    // 49028 - 4.0.6.13623
    CMSG_CALENDAR_EVENT_INVITE                          = 0xF6C4,    // 63172 - 4.0.6.13623
    CMSG_CALENDAR_EVENT_RSVP                            = 0x757F,    // 30079 - 4.0.6.13623
    CMSG_CALENDAR_EVENT_REMOVE_INVITE                   = 0xEBCC,    // 60364 - 4.0.6.13623
    CMSG_CALENDAR_EVENT_STATUS                          = 0xBC84,    // 48260 - 4.0.6.13623
    CMSG_CALENDAR_EVENT_MODERATOR_STATUS                = 0xBDE4,    // 48612 - 4.0.6.13623
    CMSG_CALENDAR_COMPLAIN                              = 0x1E75,    // 7797  - 4.0.6.13623
    CMSG_CALENDAR_GET_NUM_PENDING                       = 0xEFAC,    // 61356 - 4.0.6.13623
    CMSG_CALENDAR_CONTEXT_EVENT_SIGNUP                  = 0xAEAC,    // 44716 - 4.0.6.13623

    /***********************************************************/
    /******************** CHARACTER OPCODES ********************/
    /***********************************************************/
    CMSG_MOVE_CHARACTER_CHEAT                           = 0x00D,
    CMSG_CHAR_CREATE                                    = 0x7EEC,    // 32492 - 4.0.6.13623
    CMSG_CHAR_ENUM                                      = 0x6AA4,    // 27300 - 4.0.6.13623
    CMSG_CHAR_DELETE                                    = 0x3B84,    // 15236 - 4.0.6.13623
    CMSG_CHARACTER_POINT_CHEAT                          = 0x223,
    CMSG_CHAR_RENAME                                    = 0x27C4,    // 10180 - 4.0.6.13623
    CMSG_CHAR_CUSTOMIZE                                 = 0x6484,    // 25732 - 4.0.6.13623
    CMSG_CHAR_FACTION_CHANGE                            = 0xBBCC,    // 48076 - 4.0.6.13623
    CMSG_CHAR_RACE_CHANGE                               = 0x6EA4,    // 28324 - 4.0.6.13623

    // Character World Login / Logout
    CMSG_PLAYER_LOGIN                                   = 0x8180,    // 33152 - 4.0.6.13623
    CMSG_PLAYER_LOGOUT                                  = 0xF78C,    // 63372 - 4.0.6.13623
    CMSG_LOGOUT_REQUEST                                 = 0xA7A8,    // 42920 - 4.0.6.13623
    CMSG_LOGOUT_CANCEL                                  = 0x39EB,    // 14827 - 4.0.6.13623

    /***********************************************************/
    /********************** CHAT OPCODES ***********************/
    /***********************************************************/
    CMSG_CHAT_IGNORED                                   = 0xA78C,    // 42892 - 4.0.6.13623
    CMSG_GM_VISION                                      = 0x226,
    CMSG_CHAT_FILTERED                                  = 0x0D5D,    // 3421  - 4.0.3.13329,
    CMSG_GM_WHISPER                                     = 0x3B2,
    CMSG_FORCE_SAY_CHEAT                                = 0x47E,

    // Chat Message
    CMSG_MESSAGECHAT_SAY                                = 0x002A,    // 42    - 4.0.6.13623
    CMSG_MESSAGECHAT_YELL                               = 0x0802,    // 2050  - 4.0.6.13623
    CMSG_MESSAGECHAT_CHANNEL                            = 0x3A88,    // 14984 - 4.0.3.13329
    CMSG_MESSAGECHAT_WHISPER                            = 0x0000,    // 0     - 4.0.6.13623
    CMSG_MESSAGECHAT_GUILD                              = 0x0823,    // 2083  - 4.0.6.13623
    CMSG_MESSAGECHAT_OFFICER                            = 0x0861,    // 2145  - 4.0.6.13623
    CMSG_MESSAGECHAT_AFK                                = 0x086B,    // 2155  - 4.0.6.13623
    CMSG_MESSAGECHAT_DND                                = 0x0003,    // 3     - 4.0.6.13623
    CMSG_MESSAGECHAT_EMOTE                              = 0x0042,    // 66    - 4.0.6.13623
    CMSG_MESSAGECHAT_PARTY                              = 0x2A08,
    CMSG_MESSAGECHAT_PARTY_LEADER                       = 0x080B,    // 2059  - 4.0.6.13623
    CMSG_MESSAGECHAT_RAID                               = 0x0803,    // 2051  - 4.0.6.13623
    CMSG_MESSAGECHAT_RAID_LEADER                        = 0x0863,    // 2147  - 4.0.6.13623
    CMSG_MESSAGECHAT_BATTLEGROUND                       = 0x0063,    // 99    - 4.0.6.13623
    CMSG_MESSAGECHAT_BATTLEGROUND_LEADER                = 0x0860,    // 2144  - 4.0.6.13623
    CMSG_MESSAGECHAT_RAID_WARNING                       = 0x0061,    // 97    - 4.0.6.13623

    // Channel
    CMSG_JOIN_CHANNEL                                   = 0x0002,    // 2     - 4.0.6.13623
    CMSG_LEAVE_CHANNEL                                  = 0x000B,    // 11    - 4.0.6.13623
    CMSG_CHANNEL_LIST                                   = 0x0069,    // 105   - 4.0.6.13623
    CMSG_CHANNEL_PASSWORD                               = 0x080A,    // 2058  - 4.0.6.13623
    CMSG_CHANNEL_SET_OWNER                              = 0x0800,    // 2048  - 4.0.6.13623
    CMSG_CHANNEL_OWNER                                  = 0x0848,    // 2120  - 4.0.6.13623
    CMSG_CHANNEL_MODERATOR                              = 0x0828,    // 2088  - 4.0.6.13623
    CMSG_CHANNEL_UNMODERATOR                            = 0x0809,    // 2057  - 4.0.6.13623
    CMSG_CHANNEL_MUTE                                   = 0x0023,    // 35    - 4.0.6.13623
    CMSG_CHANNEL_UNMUTE                                 = 0x0841,    // 2113  - 4.0.6.13623
    CMSG_CHANNEL_INVITE                                 = 0x0020,    // 32    - 4.0.6.13623
    CMSG_CHANNEL_KICK                                   = 0x0068,    // 104   - 4.0.6.13623
    CMSG_CHANNEL_ROSTER_INFO                            = 0x0069,    // 105   - 4.0.6.13623
    CMSG_CHANNEL_BAN                                    = 0x000A,    // 10    - 4.0.6.13623
    CMSG_CHANNEL_UNBAN                                  = 0x0048,    // 72    - 4.0.6.13623
    CMSG_CHANNEL_ANNOUNCEMENTS                          = 0x004B,    // 75    - 4.0.6.13623
    CMSG_CHANNEL_MODERATE                               = 0x0A8,
    CMSG_CHANNEL_SILENCE_VOICE                          = 0x0801,    // 2049  - 4.0.6.13623
    CMSG_CHANNEL_SILENCE_ALL                            = 0x0021,    // 33    - 4.0.6.13623
    CMSG_CHANNEL_UNSILENCE_VOICE                        = 0x002B,    // 43    - 4.0.6.13623
    CMSG_CHANNEL_UNSILENCE_ALL                          = 0x0840,    // 2112  - 4.0.6.13623
    CMSG_CHANNEL_DISPLAY_LIST                           = 0x0009,    // 9     - 4.0.6.13623
    CMSG_GET_CHANNEL_MEMBER_COUNT                       = 0x3D4,
    CMSG_SET_CHANNEL_WATCH                              = 0x7FE0,    // 32736 - 4.0.6.13623
    CMSG_CLEAR_CHANNEL_WATCH                            = 0xA1E0,    // 41440 - 4.0.6.13623
    CMSG_DECLINE_CHANNEL_INVITE                         = 0xE68C,    // 59020 - 4.0.6.13623

    // Char Server Message
    CMSG_SERVER_BROADCAST                               = 0x2B2,
    CMSG_SERVER_INFO_QUERY                              = 0x4A0,

    /***********************************************************/
    /********************* COMBAT OPCODES **********************/
    /***********************************************************/
    CMSG_ENABLE_DAMAGE_LOG                              = 0x27D,

    /***********************************************************/
    /********************** DUEL OPCODES ***********************/
    /***********************************************************/
    CMSG_DUEL_ACCEPTED                                  = 0xA688,    // 42632 - 4.0.6.13623
    CMSG_DUEL_CANCELLED                                 = 0x6F8C,    // 28556 - 4.0.6.13623

    /***********************************************************/
    /******************** FACTION OPCODES **********************/
    /***********************************************************/
    CMSG_SET_FACTION_ATWAR                              = 0x125,
    CMSG_SET_FACTION_CHEAT                              = 0x126,
    CMSG_SET_ACTION_BUTTON                              = 0x72E8,    // 29416 - 4.0.6.13623
    CMSG_RESET_FACTION_CHEAT                            = 0x281,
    CMSG_SET_FACTION_INACTIVE                           = 0x317,
    CMSG_SET_WATCHED_FACTION                            = 0x318,

    /***********************************************************/
    /******************* GAMEMASTER OPCODES ********************/
    /***********************************************************/
    CMSG_GM_INVIS                                       = 0x1E6,
    CMSG_GM_SET_SECURITY_GROUP                          = 0x1F9,
    CMSG_GM_NUKE                                        = 0x1FA,
    CMSG_GM_TEACH                                       = 0x20F,
    CMSG_GM_CREATE_ITEM_TARGET                          = 0x210,
    CMSG_GM_SILENCE                                     = 0x228,
    CMSG_GM_REVEALTO                                    = 0x229,
    CMSG_GM_RESURRECT                                   = 0x22A,
    CMSG_GM_SUMMONMOB                                   = 0x22B,
    CMSG_GM_MOVECORPSE                                  = 0x22C,
    CMSG_GM_FREEZE                                      = 0x22D,
    CMSG_GM_UBERINVIS                                   = 0x22E,
    CMSG_GM_REQUEST_PLAYER_INFO                         = 0x22F,
    CMSG_GM_UNTEACH                                     = 0x2E5,
    CMSG_GM_NUKE_ACCOUNT                                = 0x30F,
    CMSG_GM_DESTROY_ONLINE_CORPSE                       = 0x311,
    CMSG_MAELSTROM_GM_SENT_MAIL                         = 0x395,
    CMSG_GM_SHOW_COMPLAINTS                             = 0x3CA,
    CMSG_GM_UNSQUELCH                                   = 0x3CB,
    CMSG_GM_CHARACTER_RESTORE                           = 0x3FA,
    CMSG_GM_CHARACTER_SAVE                              = 0x3FB,
    CMSG_GMRESPONSE_RESOLVE                             = 0x2E88,    // 11912 - 4.0.6.13623
    CMSG_GM_REPORT_LAG                                  = 0x3FA0,    // 16288 - 4.0.6.13623

    // Gamemaster Ticket
    CMSG_GMTICKET_CREATE                                = 0x6380,    // 25472 - 4.0.6.13623
    CMSG_GMTICKET_UPDATETEXT                            = 0x7F8C,    // 32652 - 4.0.6.13623
    CMSG_GMTICKET_GETTICKET                             = 0xB4C4,    // 46276 - 4.0.6.13623
    CMSG_GMTICKET_DELETETICKET                          = 0xFBE4,    // 64484 - 4.0.6.13623
    CMSG_GMTICKET_SYSTEMSTATUS                          = 0xACE0,    // 44256 - 4.0.6.13623
    CMSG_GMTICKETSYSTEM_TOGGLE                          = 0x29A,
    CMSG_GM_UPDATE_TICKET_STATUS                        = 0x327,
    CMSG_GMSURVEY_SUBMIT                                = 0xE280,    // 57984 - 4.0.6.13623

    /***********************************************************/
    /****************** (GAME)OBJECT OPCODES *******************/
    /***********************************************************/
    CMSG_QUERY_OBJECT_POSITION                          = 0x004,
    CMSG_QUERY_OBJECT_ROTATION                          = 0x006,
    CMSG_CREATEGAMEOBJECT                               = 0x014,
    CMSG_GAMEOBJ_USE                                    = 0x29E4,    // 10724 - 4.0.6.13623
    CMSG_GAMEOBJ_REPORT_USE                             = 0x23A0,    // 9120  - 4.0.6.13623
    CMSG_DUMP_OBJECTS                                   = 0x48B,

    /***********************************************************/
    /********************** GOSSIP OPCODES *********************/
    /***********************************************************/
    CMSG_GOSSIP_HELLO                                   = 0x74C8,    // 29896 - 4.0.6.13623
    CMSG_GOSSIP_SELECT_OPTION                           = 0xFF88,    // 65416 - 4.0.6.13623
    CMSG_NPC_TEXT_QUERY                                 = 0xA2EC,    // 41708 - 4.0.6.13623

    // Gossip Questgiver
    CMSG_QUESTGIVER_STATUS_QUERY                        = 0xFDEC,    // 65004 - 4.0.6.13623
    CMSG_QUESTGIVER_HELLO                               = 0x36AC,    // 13996 - 4.0.6.13623
    CMSG_QUESTGIVER_QUERY_QUEST                         = 0x2CC0,    // 11456 - 4.0.6.13623
    CMSG_QUESTGIVER_QUEST_AUTOLAUNCH                    = 0x187,
    CMSG_QUESTGIVER_ACCEPT_QUEST                        = 0x20C4,    // 8388  - 4.0.6.13623
    CMSG_QUESTGIVER_COMPLETE_QUEST                      = 0xB5AC,    // 46508 - 4.0.6.13623
    CMSG_QUESTGIVER_REQUEST_REWARD                      = 0x23A8,    // 9128  - 4.0.6.13623
    CMSG_QUESTGIVER_CHOOSE_REWARD                       = 0x6AC0,    // 27328 - 4.0.6.13623
    CMSG_QUESTGIVER_CANCEL                              = 0x61EC,    // 25068 - 4.0.6.13623

    // Gossip Trainer
    CMSG_TRAINER_LIST                                   = 0xE5AC,    // 58796 - 4.0.6.13623
    CMSG_TRAINER_BUY_SPELL                              = 0xFDC8,    // 64968 - 4.0.6.13623

    /***********************************************************/
    /********************** GROUP OPCODES **********************/
    /***********************************************************/
    CMSG_GROUP_INVITE                                   = 0x27C0,    // 10176 - 4.0.6.13623
    CMSG_GROUP_CANCEL                                   = 0x070,
    CMSG_GROUP_ACCEPT                                   = 0x368C,    // 13964 - 4.0.6.13623
    CMSG_GROUP_DECLINE                                  = 0xB4CC,    // 46284 - 4.0.6.13623
    CMSG_GROUP_UNINVITE                                 = 0xE3C8,    // 58312 - 4.0.6.13623
    CMSG_GROUP_UNINVITE_GUID                            = 0x076,
    CMSG_GROUP_SET_LEADER                               = 0x078,
    CMSG_GROUP_DISBAND                                  = 0xBE88,    // 48776 - 4.0.6.13623
    CMSG_GROUP_CHANGE_SUB_GROUP                         = 0x27E,
    CMSG_GROUP_SWAP_SUB_GROUP                           = 0x280,
    CMSG_GROUP_RAID_CONVERT                             = 0x28E,
    CMSG_GROUP_ASSISTANT_LEADER                         = 0x28F,

    /***********************************************************/
    /********************** GUILD OPCODES **********************/
    /***********************************************************/
    CMSG_GUILD_CREATE                                   = 0x081,
    CMSG_GUILD_INVITE                                   = 0x2DA8,    // 11688 - 4.0.6.13623
    CMSG_GUILD_ACCEPT                                   = 0x3729,    // 14121 - 4.0.6.13623
    CMSG_GUILD_DECLINE                                  = 0x352D,    // 13613 - 4.0.6.13623
    CMSG_GUILD_INFO                                     = 0x6884,    // 26756 - 4.0.6.13623
    CMSG_GUILD_ROSTER                                   = 0xB2A4,    // 45732 - 4.0.6.13623
    CMSG_GUILD_PROMOTE                                  = 0x2109,    // 8457  - 4.0.6.13623
    CMSG_GUILD_DEMOTE                                   = 0x330D,    // 13069 - 4.0.6.13623
    CMSG_GUILD_LEAVE                                    = 0x3329,    // 13097 - 4.0.6.13623
    CMSG_GUILD_REMOVE                                   = 0x312D,    // 12589 - 4.0.6.13623
    CMSG_GUILD_DISBAND                                  = 0x08F,
    CMSG_GUILD_LEADER                                   = 0x2650,    // 9808  - 4.0.6.13623
    CMSG_GUILD_MOTD                                     = 0x272D,    // 10029 - 4.0.6.13623
    CMSG_GUILD_RANK                                     = 0x2709,    // 9993  - 4.0.6.13623
    CMSG_GUILD_ADD_RANK                                 = 0x2309,    // 8969  - 4.0.6.13623
    CMSG_GUILD_DEL_RANK                                 = 0x2129,    // 8489  - 4.0.6.13623
    CMSG_GUILD_SET_NOTE                                 = 0x232D,    // 9005  - 4.0.6.13623
    CMSG_GUILD_INFO_TEXT                                = 0x270D,    // 9997  - 4.0.6.13623
    CMSG_MAELSTROM_RENAME_GUILD                         = 0x400,

    // Guild Bank
    CMSG_GUILD_BANKER_ACTIVATE                          = 0xFFC4,    // 65476 - 4.0.6.13623
    CMSG_GUILD_BANK_QUERY_TAB                           = 0xA788,    // 42888 - 4.0.6.13623
    CMSG_GUILD_BANK_SWAP_ITEMS                          = 0xA8C4,    // 43204 - 4.0.6.13623
    CMSG_GUILD_BANK_BUY_TAB                             = 0x78AC,    // 30892 - 4.0.6.13623
    CMSG_GUILD_BANK_UPDATE_TAB                          = 0xE3CC,    // 58316 - 4.0.6.13623
    CMSG_GUILD_BANK_DEPOSIT_MONEY                       = 0x6FE8,    // 28648 - 4.0.6.13623
    CMSG_GUILD_BANK_WITHDRAW_MONEY                      = 0x73A8,    // 29608 - 4.0.6.13623
    CMSG_SET_GUILD_BANK_TEXT                            = 0x7680,    // 30336 - 4.0.6.13623

    // Guild Petition
    CMSG_PETITION_SHOWLIST                              = 0xFCC4,    // 64708 - 4.0.6.13623
    CMSG_PETITION_BUY                                   = 0xB3E4,    // 46052 - 4.0.6.13623
    CMSG_PETITION_SHOW_SIGNATURES                       = 0x2CA8,    // 11432 - 4.0.6.13623
    CMSG_PETITION_SIGN                                  = 0x3AA0,    // 15008 - 4.0.6.13623
    CMSG_OFFER_PETITION                                 = 0x7AC4,    // 31428 - 4.0.6.13623
    CMSG_TURN_IN_PETITION                               = 0xA584,    // 42372 - 4.0.6.13623
    CMSG_PETITION_QUERY                                 = 0xB1AC,    // 45484 - 4.0.6.13623

    // Guild Party
    CMSG_REQUEST_PARTY_MEMBER_STATS                     = 0x70C8,    // 28872 - 4.0.6.13623
    CMSG_PARTY_SILENCE                                  = 0x3DD,
    CMSG_PARTY_UNSILENCE                                = 0x3DE,

    /***********************************************************/
    /******************** INSTANCE OPCODES *********************/
    /***********************************************************/
    CMSG_INSTANCE_LOCK_WARNING_RESPONSE                 = 0x13F,
    CMSG_REQUEST_RAID_INFO                              = 0x3DE4,    // 15844 - 4.0.6.13623
    CMSG_EXPIRE_RAID_INSTANCE                           = 0x415,
    CMSG_SET_ALLOW_LOW_LEVEL_RAID1                      = 0x35EC,    // 13804 - 4.0.6.13623
    CMSG_SET_ALLOW_LOW_LEVEL_RAID2                      = 0x29C4,    // 10692 - 4.0.6.13623

    // LFG
    CMSG_LFG_JOIN                                       = 0x35C,
    CMSG_LFG_LEAVE                                      = 0x35D,
    CMSG_SEARCH_LFG_JOIN                                = 0x35E,
    CMSG_SEARCH_LFG_LEAVE                               = 0x35F,
    CMSG_LFG_PROPOSAL_RESULT                            = 0xA7A4,    // 42916 - 4.0.6.13623
    CMSG_SET_LFG_COMMENT                                = 0x366,
    CMSG_LFG_SET_ROLES                                  = 0xE8CC,    // 59596 - 4.0.6.13623
    CMSG_LFG_SET_NEEDS                                  = 0x36B,
    CMSG_LFG_SET_BOOT_VOTE                              = 0x36C,
    CMSG_LFD_PLAYER_LOCK_INFO_REQUEST                   = 0xE5E8,    // 58856 - 4.0.6.13623
    CMSG_LFG_TELEPORT                                   = 0xFA88,    // 64136 - 4.0.6.13623
    CMSG_LFD_PARTY_LOCK_INFO_REQUEST                    = 0x371,

    // Meetingstone
    CMSG_MEETINGSTONE_INFO                              = 0xF984,    // 63876 - 4.0.6.13623
    CMSG_MEETINGSTONE_CHEAT                             = 0x294,

    /***********************************************************/
    /********************** ITEM OPCODES ***********************/
    /***********************************************************/
    CMSG_CREATEITEM                                     = 0x013,
    CMSG_USE_ITEM                                       = 0x7080,    // 28800 - 4.0.6.13623
    CMSG_OPEN_ITEM                                      = 0xA2A8,    // 41640 - 4.0.6.13623
    CMSG_READ_ITEM                                      = 0xF3C0,    // 62400 - 4.0.6.13623
    CMSG_DESTROY_ITEMS                                  = 0xB8A8,    // 
    CMSG_SWAP_ITEM                                      = 0xE8AC,    // 59564 - 4.0.6.13623
    CMSG_SWAP_INV_ITEM                                  = 0x3EC4,    // 16068 - 4.0.6.13623
    CMSG_SPLIT_ITEM                                     = 0xFDAC,    // 64940 - 4.0.6.13623
    OBSOLETE_DROP_ITEM                                  = 0x110,
    CMSG_DESTROYITEM                                    = 0xB8A8,    // 47272 - 4.0.6.13623
    CMSG_SELL_ITEM                                      = 0x63A4,    // 25508 - 4.0.6.13623
    CMSG_BUY_ITEM                                       = 0xEA84,    // 60036 - 4.0.6.13623
    CMSG_BUY_ITEM_IN_SLOT                               = 0x1A3,
    CMSG_WRAP_ITEM                                      = 0x1D3,  
    CMSG_SET_DURABILITY_CHEAT                           = 0x287,
    CMSG_BUYBACK_ITEM                                   = 0xA4C4,    // 42180 - 4.0.6.13623
    CMSG_REPAIR_ITEM                                    = 0x39E4,    // 14820 - 4.0.6.13623
    CMSG_SHOWING_HELM                                   = 0xB7C0,    // 47040 - 4.0.6.13623
    CMSG_SHOWING_CLOAK                                  = 0x7AA4,    // 31396 - 4.0.6.13623
    CMSG_SOCKET_GEMS                                    = 0x347,
    CMSG_CANCEL_TEMP_ENCHANTMENT                        = 0xE484,    // 58500 - 4.0.6.13623
    CMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY                    = 0x39A,
    CMSG_UPDATE_MISSILE_TRAJECTORY                      = 0x462,
    CMSG_ITEM_REFUND_INFO                               = 0x31E0,    // 12768 - 4.0.6.13623
    CMSG_ITEM_REFUND                                    = 0x62E8,    // 25320 - 4.0.6.13623
    CMSG_UPDATE_PROJECTILE_POSITION                     = 0x4BE,

    // Item Equipment
    CMSG_AUTOEQUIP_GROUND_ITEM                          = 0x106,
    CMSG_AUTOSTORE_GROUND_ITEM                          = 0x2FC8,    // 12232 - 4.0.6.13623
    CMSG_AUTOSTORE_LOOT_ITEM                            = 0xB2E8,    // 45800 - 4.0.6.13623
    CMSG_AUTOEQUIP_ITEM                                 = 0xE1C0,    // 57792 - 4.0.6.13623
    CMSG_AUTOSTORE_BAG_ITEM                             = 0xEDCC,    // 60876 - 4.0.6.13623
    CMSG_AUTOEQUIP_ITEM_SLOT                            = 0xE8A8,    // 59560 - 4.0.6.13623
    CMSG_EQUIPMENT_SET_DELETE                           = 0x13E,
    CMSG_AUTOSTORE_BANK_ITEM                            = 0xF2AC,    // 62124 - 4.0.6.13623
    CMSG_AUTOBANK_ITEM                                  = 0x66E4,    // 26340 - 4.0.6.13623
    CMSG_EQUIPMENT_SET_SAVE                             = 0x4BD,
    CMSG_EQUIPMENT_SET_USE                              = 0x4D5,

    // Inventory / Trade
    CMSG_INSPECT                                        = 0x78A8,    // 30888 - 4.0.6.13623
    CMSG_INITIATE_TRADE                                 = 0x0413,    // 1043  - 4.0.6.13623
    CMSG_BEGIN_TRADE                                    = 0x0F93,    // 3987  - 4.0.6.13623
    CMSG_BUSY_TRADE                                     = 0x118,
    CMSG_IGNORE_TRADE                                   = 0x119,
    CMSG_ACCEPT_TRADE                                   = 0x0891,    // 2193  - 4.0.6.13623
    CMSG_UNACCEPT_TRADE                                 = 0x0811,    // 2065  - 4.0.6.13623
    CMSG_CANCEL_TRADE                                   = 0x0013,    // 19    - 4.0.6.13623
    CMSG_SET_TRADE_ITEM                                 = 0x0A11,    // 2577  - 4.0.6.13623
    CMSG_CLEAR_TRADE_ITEM                               = 0x0213,    // 531   - 4.0.6.13623
    CMSG_SET_TRADE_GOLD                                 = 0x0C13,    // 3091  - 4.0.6.13623
    CMSG_LIST_INVENTORY                                 = 0xEDC8,    // 60872 - 4.0.6.13623

    /***********************************************************/
    /********************** LOOT OPCODES ***********************/
    /***********************************************************/
    CMSG_LOOT_METHOD                                    = 0xFCCC,    // 64716 - 4.0.6.13623
    CMSG_STORE_LOOT_IN_SLOT                             = 0x7FCC,    // 32716 - 4.0.6.13623
    CMSG_LOOT                                           = 0xFCEC,    // 64748 - 4.0.6.13623
    CMSG_LOOT_MONEY                                     = 0x79E0,    // 31200 - 4.0.6.13623
    CMSG_LOOT_RELEASE                                   = 0x3CE8,    // 15592 - 4.0.6.13623
    CMSG_OPT_OUT_OF_LOOT                                = 0x75A4,    // 30116 - 4.0.6.13623

    // Loot Group
    CMSG_LOOT_ROLL                                      = 0xBDA8,    // 48552 - 4.0.6.13623
    CMSG_LOOT_MASTER_GIVE                               = 0x2A3,

    /***********************************************************/
    /******************** MOVEMENT OPCODES *********************/
    /***********************************************************/
    CMSG_MOVE_SET_RAW_POSITION                         = 0xF0C8,    // 61640 - 4.0.6.13623
    CMSG_MOVE_KNOCK_BACK_ACK                           = 0xF580,    // 62848 - 4.0.6.13623
    CMSG_MOVE_HOVER_ACK                                = 0xF4CC,    // 62668 - 4.0.6.13623
    CMSG_MOVE_TIME_SKIPPED                             = 0xE180,    // 57728 - 4.0.6.13623
    CMSG_MOVE_NOT_ACTIVE_MOVER                         = 0xB9A8,    // 47528 - 4.0.6.13623
    CMSG_MINIGAME_MOVE                                 = 0xB2E4,    // 45796 - 4.0.6.13623
    CMSG_MOVE_CHNG_TRANSPORT                           = 0x38D,
    CMSG_UNKNOWN_1303                                  = 0x517,

    // Movement Start / Stop
    CMSG_MOVE_START_SWIM_CHEAT                         = 0x2D8,
    CMSG_MOVE_STOP_SWIM_CHEAT                          = 0x2D9,

    // Movement Force
    CMSG_FORCE_RUN_SPEED_CHANGE_ACK                    = 0x26C8,    // 9928  - 4.0.6.13623
    CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK               = 0x78E4,    // 30948 - 4.0.6.13623
    CMSG_FORCE_SWIM_SPEED_CHANGE_ACK                   = 0xB1A0,    // 45472 - 4.0.6.13623
    CMSG_FORCE_MOVE_ROOT_ACK                           = 0x7184,    // 29060 - 4.0.6.13623
    CMSG_FORCE_MOVE_UNROOT_ACK                         = 0x7FA8,    // 32680 - 4.0.6.13623
    CMSG_FORCE_WALK_SPEED_CHANGE_ACK                   = 0x78CC,    // 30924 - 4.0.6.13623
    CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK              = 0xE8C4,    // 59588 - 4.0.6.13623
    CMSG_FORCE_TURN_RATE_CHANGE_ACK                    = 0xE384,    // 58244 - 4.0.6.13623
    CMSG_FORCE_FLIGHT_SPEED_CHANGE_ACK                 = 0xA98C,    // 43404 - 4.0.6.13623
    CMSG_FORCE_FLIGHT_BACK_SPEED_CHANGE_ACK            = 0xFBC8,    // 64456 - 4.0.6.13623
    CMSG_FORCE_PITCH_RATE_CHANGE_ACK                   = 0xE6C0,    // 59072 - 4.0.6.13623
    CMSG_FORCE_UNK1_SPEED_CHANGE_ACK                   = 0xF0C0,    // 61632 - 4.0.6.13623
    CMSG_FORCE_UNK2_SPEED_CHANGE_ACK                   = 0x7DE8,    // 32232 - 4.0.6.13623

    // Movement Teleport / Fall / Fly / Water
    CMSG_MOVE_FALL_RESET                               = 0x2CA,
    CMSG_MOVE_FEATHER_FALL_ACK                         = 0x6EA8,    // 28328 - 4.0.6.13623
    CMSG_MOVE_WATER_WALK_ACK                           = 0x21C4,    // 8644  - 4.0.6.13623
    CMSG_MOVE_FLIGHT_ACK                               = 0xA3C8,    // 41928 - 4.0.6.13623

    // Movement Set / Unset
    CMSG_MOVE_SET_CAN_FLY_ACK                          = 0xFCAC,    // 64684 - 4.0.6.13623
    CMSG_MOVE_SET_FLY                                  = 0xE0E0,    // 57568 - 4.0.6.13623
    CMSG_MOVE_SET_RUN_SPEED                            = 0x3AB,

    // Spline
    CMSG_MOVE_SPLINE_DONE                              = 0x69E8,    // 27112 - 4.0.6.13623

    // Spline Set / Unset

    /***********************************************************/
    /********************* MOVIE OPCODES ***********************/
    /***********************************************************/
    // Cinematic
    CMSG_TRIGGER_CINEMATIC_CHEAT                       = 0x0F8,
    CMSG_OPENING_CINEMATIC                             = 0xB1E8,    // 45544 - 4.0.6.13623
    CMSG_NEXT_CINEMATIC_CAMERA                         = 0xB2CC,    // 45772 - 4.0.6.13623
    CMSG_COMPLETE_CINEMATIC                            = 0x2ACC,    // 10956 - 4.0.6.13623

    // Movie
    CMSG_COMPLETE_MOVIE                                = 0xE188,    // 57736 - 4.0.6.13623

    /***********************************************************/
    /****************** MOUNT / PET OPCODES ********************/
    /***********************************************************/
    CMSG_MOUNTSPECIAL_ANIM                             = 0x2EE4,    // 12004 - 4.0.6.13623
    CMSG_CANCEL_MOUNT_AURA                             = 0x64CC,    // 25804 - 4.0.6.13623

    // Pet
    CMSG_PET_SET_ACTION                                = 0x174,
    CMSG_PET_ACTION                                    = 0xAFC0,    // 44992 - 4.0.6.13623
    CMSG_PET_ABANDON                                   = 0xA480,    // 42112 - 4.0.6.13623
    CMSG_PET_RENAME                                    = 0x38E8,    // 14568 - 4.0.6.13623
    CMSG_PET_STOP_ATTACK                               = 0x2EA,
    CMSG_PET_UNLEARN                                   = 0x2F0,
    CMSG_PET_LEARN_TALENT                              = 0xA7A0,    // 42912 - 4.0.6.13623
    CMSG_PET_UNLEARN_TALENTS                           = 0x47B,

    /***********************************************************/
    /********************* PLAYER OPCODES **********************/
    /***********************************************************/
    CMSG_UNDRESSPLAYER                                 = 0x020,
    CMSG_GODMODE                                       = 0x022,
    CMSG_PLAYER_DIFFICULTY_CHANGE                      = 0x1FD,
    CMSG_PLAYER_AI_CHEAT                               = 0x26C,
    CMSG_SET_ACTIONBAR_TOGGLES                         = 0x32C4,    // 12996 - 4.0.6.13623
    CMSG_IGNORE_REQUIREMENTS_CHEAT                     = 0x3A8,
    CMSG_SET_PLAYER_DECLINED_NAMES                     = 0xADC0,    // 44480 - 4.0.6.13623

    // Player Achievement
    CMSG_QUERY_INSPECT_ACHIEVEMENTS                    = 0x28EC,    // 10476 - 4.0.6.13623
    CMSG_COMPLETE_ACHIEVEMENT_CHEAT                    = 0x46E,
    CMSG_SET_CRITERIA_CHEAT                            = 0x470,
    CMSG_CHECK_LOGIN_CRITERIA                          = 0x0913,    // 2323  - 4.0.6.13623

    // Player Exploration
    CMSG_SET_EXPLORATION                               = 0x2BE,
    CMSG_SET_EXPLORATION_ALL                           = 0x31B,

    // Friends / Contacts / ...
    CMSG_WHO                                            = 0xA4CC,    // 42188 - 4.0.6.13623
    CMSG_WHOIS                                          = 0x2180,    // 8576  - 4.0.6.13623
    CMSG_CONTACT_LIST                                   = 0xEAA4,    // 60068 - 4.0.6.13623
    CMSG_ADD_FRIEND                                     = 0x3980,    // 14720 - 4.0.6.13623
    CMSG_DEL_FRIEND                                     = 0x2980,    // 10624 - 4.0.6.13623
    CMSG_SET_CONTACT_NOTES                              = 0x7DCC,    // 32204 - 4.0.6.13623
    CMSG_SAVE_PLAYER                                    = 0x153,
    CMSG_REFER_A_FRIEND                                 = 0x40E,

    // Player Dance
    CMSG_PLAY_DANCE                                     = 0x2288,    // 8840  - 4.0.6.13623
    CMSG_STOP_DANCE                                     = 0x3080,    // 12416 - 4.0.6.13623
    CMSG_SYNC_DANCE                                     = 0x450,
    CMSG_DANCE_QUERY                                    = 0x22A0,    // 8864  - 4.0.6.13623

    // Player Level
    CMSG_LEVEL_CHEAT                                    = 0x025,
    CMSG_SET_GRANTABLE_LEVELS                           = 0x40C,
    CMSG_GRANT_LEVEL                                    = 0xB980,    // 47488 - 4.0.6.13623
    CMSG_ACCEPT_LEVEL_GRANT                             = 0xB5CC,    // 46540 - 4.0.6.13623

    // Player Pet
    CMSG_PET_LEVEL_CHEAT                                = 0x026,
    CMSG_STABLE_PET                                     = 0x270,
    CMSG_UNSTABLE_PET                                   = 0x271,
    CMSG_BUY_STABLE_SLOT                                = 0x272,
    CMSG_STABLE_REVIVE_PET                              = 0x274,
    CMSG_STABLE_SWAP_PET                                = 0x275,
    CMSG_REQUEST_PET_INFO                               = 0xEAE4,    // 60132 - 4.0.6.13623

    // Player PVP / Honor / ...
    CMSG_DISABLE_PVP_CHEAT                              = 0x030,
    CMSG_REQUEST_PVP_OPTIONS_ENABLED                    = 0x0188,    // 392   - 4.0.6.13623
    CMSG_TOGGLE_PVP                                     = 0x6480,    // 25728 - 4.0.6.13623
    CMSG_SET_PVP_RANK_CHEAT                             = 0x288,
    CMSG_ADD_PVP_MEDAL_CHEAT                            = 0x289,
    CMSG_DEL_PVP_MEDAL_CHEAT                            = 0x28A,
    CMSG_SET_PVP_TITLE                                  = 0x28B,
    CMSG_SET_TITLE                                      = 0xEC8C,    // 60556 - 4.0.6.13623
    CMSG_CHEAT_SET_HONOR_CURRENCY                       = 0x37B,
    CMSG_ACTIVE_PVP_CHEAT                               = 0x399,
    CMSG_REPORT_PVP_AFK                                 = 0xE3AC,    // 58284 - 4.0.6.13623
    CMSG_SET_TITLE_SUFFIX                               = 0x3F7,

    // Player Arena
    CMSG_ARENA_TEAM_CREATE                              = 0x348,
    CMSG_ARENA_TEAM_QUERY                               = 0xB9C8,    // 47560 - 4.0.6.13623
    CMSG_ARENA_TEAM_ROSTER                              = 0x6BAC,    // 27564 - 4.0.6.13623
    CMSG_ARENA_TEAM_INVITE                              = 0xE9CC,    // 59852 - 4.0.6.13623
    CMSG_ARENA_TEAM_ACCEPT                              = 0x61AC,    // 25004 - 4.0.6.13623
    CMSG_ARENA_TEAM_DECLINE                             = 0xF2C0,    // 62144 - 4.0.6.13623
    CMSG_ARENA_TEAM_LEAVE                               = 0x64C4,    // 25796 - 4.0.6.13623
    CMSG_ARENA_TEAM_REMOVE                              = 0x7E84,    // 32388 - 4.0.6.13623
    CMSG_ARENA_TEAM_DISBAND                             = 0x698C,    // 27020 - 4.0.6.13623
    CMSG_ARENA_TEAM_LEADER                              = 0x218C,    // 8588  - 4.0.6.13623
    CMSG_CHEAT_SET_ARENA_CURRENCY                       = 0x37C,
    CMSG_CHANGE_PERSONAL_ARENA_RATING                   = 0x425,

    // Player Tutorial
    CMSG_TUTORIAL_FLAG                                  = 0xE4CC,    // 58572 - 4.0.6.13623
    CMSG_TUTORIAL_CLEAR                                 = 0xA5E4,    // 42468 - 4.0.6.13623
    CMSG_TUTORIAL_RESET                                 = 0xDE75,    // 56949 - 4.0.3.13329

    // Player Emote
    CMSG_EMOTE                                          = 0xFAC4,    // 64196 - 4.0.6.13623
    CMSG_TEXT_EMOTE                                     = 0xE9E0,    // 59872 - 4.0.6.13623

    // Player Corpse / Resurrect / Death
    CMSG_SETDEATHBINDPOINT                              = 0xA94E,    // 43342 - 4.0.6.13623
    CMSG_GETDEATHBINDZONE                               = 0x156,
    CMSG_REPOP_REQUEST                                  = 0xA9E4,    // 43492 - 4.0.6.13623
    CMSG_RESURRECT_RESPONSE                             = 0xBBE8,
    CMSG_RECLAIM_CORPSE                                 = 0x7CC8,    // 31944 - 4.0.6.13623
    CMSG_GHOST                                          = 0x1E5,
    CMSG_HEARTH_AND_RESURRECT                           = 0x49C,
    CMSG_RETURN_TO_GRAVEYARD                            = 0x0593,    // 1427  - 4.0.6.13623

    // Player Health / Power / Mana / ...
    CMSG_SET_RUNE_COUNT                                 = 0x458,
    CMSG_SET_RUNE_COOLDOWN                              = 0x459,

    // Player Glyph
    CMSG_SET_GLYPH_SLOT                                 = 0x466,
    CMSG_SET_GLYPH                                      = 0x467,
    CMSG_REMOVE_GLYPH                                   = 0x48A,

    // Player Talent / Skill
    CMSG_UNLEARN_TALENTS                                = 0x213,
    CMSG_USE_SKILL_CHEAT                                = 0x029,
    CMSG_SKILL_BUY_STEP                                 = 0x21F,
    CMSG_SKILL_BUY_RANK                                 = 0x220,
    CMSG_LEARN_TALENT                                   = 0xA7CC,    // 42956 - 4.0.6.13623
    CMSG_LEARN_PREVIEW_TALENTS                          = 0xFFAC,    // 65452 - 4.0.6.13623
    CMSG_LEARN_PREVIEW_TALENTS_PET                      = 0xBCE8,    // 48360 - 4.0.6.13623

    // Player Mail
    CMSG_SEND_MAIL                                       = 0x2DEC,    // 11756 - 4.0.6.13623
    CMSG_GET_MAIL_LIST                                   = 0xB284,    // 45700 - 4.0.6.13623
    CMSG_MAIL_TAKE_MONEY                                 = 0xE8EC,    // 59628 - 4.0.6.13623
    CMSG_MAIL_TAKE_ITEM                                  = 0x62A8,    // 25256 - 4.0.6.13623
    CMSG_MAIL_MARK_AS_READ                               = 0xE8C0,    // 59584 - 4.0.6.13623
    CMSG_MAIL_RETURN_TO_SENDER                           = 0x65A4,    // 26020 - 4.0.6.13623
    CMSG_MAIL_DELETE                                     = 0x7DE4,    // 32228 - 4.0.6.13623
    CMSG_MAIL_CREATE_TEXT_ITEM                           = 0xFAE4,    // 64228 - 4.0.6.13623

    // Player Voice
    CMSG_VOICE_SET_TALKER_MUTED_REQUEST                  = 0x3A1,
    CMSG_VOICE_SESSION_ENABLE                            = 0xFEA4,    // 65188 - 4.0.6.13623
    CMSG_SET_ACTIVE_VOICE_CHANNEL                        = 0x32A4,    // 12964 - 4.0.6.13623
    CMSG_CHANNEL_VOICE_ON                                = 0x5A98,
    CMSG_CHANNEL_VOICE_OFF                               = 0x7A88,
    CMSG_DEBUG_LIST_TARGETS                              = 0x3D8,
    CMSG_ADD_VOICE_IGNORE                                = 0x3DB,
    CMSG_DEL_VOICE_IGNORE                                = 0x3DC,

    // Player Totem
    CMSG_TOTEM_DESTROYED                                 = 0x34A0,    // 13472 - 4.0.6.13623

    /***********************************************************/
    /********************* QUERY OPCODES ***********************/
    /***********************************************************/
    CMSG_NAME_QUERY                                      = 0x7AAC,    // 31404 - 4.0.6.13623
    CMSG_PET_NAME_QUERY                                  = 0xF180,    // 61824 - 4.0.6.13623
    CMSG_GUILD_QUERY                                     = 0xAFC4,    // 44996 - 4.0.6.13623
    CMSG_ITEM_QUERY_SINGLE                               = 0x8588,    // 34184 - 4.0.6.13623
    CMSG_ITEM_QUERY_MULTIPLE                             = 0x0061,    // 97    - 4.0.6.13623
    CMSG_PAGE_TEXT_QUERY                                 = 0xAC8C,    // 44172 - 4.0.6.13623
    CMSG_QUEST_QUERY                                     = 0xEFE8,    // 61416 - 4.0.6.13623
    CMSG_GAMEOBJECT_QUERY                                = 0x72A0,    // 29344 - 4.0.6.13623
    CMSG_CREATURE_QUERY                                  = 0x268C,    // 9868  - 4.0.6.13623
    CMSG_ITEM_TEXT_QUERY                                 = 0xF280,    // 62080 - 4.0.6.13623
    CMSG_ITEM_NAME_QUERY                                 = 0x2C4,
    CMSG_CORPSE_MAP_POSITION_QUERY                       = 0x23CC,    // 9164  - 4.0.6.13623

    /***********************************************************/
    /********************* QUEST OPCODES ***********************/
    /***********************************************************/
    CMSG_QUESTLOG_SWAP_QUEST                             = 0x193,
    CMSG_QUESTLOG_REMOVE_QUEST                           = 0xEDA8,    // 60840 - 4.0.6.13623
    CMSG_QUEST_CONFIRM_ACCEPT                            = 0x6FCC,    // 28620 - 4.0.6.13623
    CMSG_PUSHQUESTTOPARTY                                = 0x29E8,    // 10728 - 4.0.6.13623
    CMSG_QUEST_POI_QUERY                                 = 0x7DE0,    // 32224 - 4.0.6.13623
    CMSG_QUERY_QUESTS_COMPLETED                          = 0xECE8,    // 60648 - 4.0.6.13623

    // Questgiver
    CMSG_QUESTGIVER_STATUS_MULTIPLE_QUERY                = 0x2DAC,    // 11692 - 4.0.6.13623

    /***********************************************************/
    /********************* SPELL OPCODES ***********************/
    /***********************************************************/
    CMSG_RECHARGE                                        = 0x00F,
    CMSG_LEARN_SPELL                                     = 0x010,
    CMSG_NEW_SPELL_SLOT                                  = 0x12D,
    CMSG_CAST_SPELL                                      = 0x65C4,    // 26052 - 4.0.6.13623
    CMSG_CANCEL_CAST                                     = 0xA1C0,    // 41408 - 4.0.6.13623
    CMSG_CANCEL_CHANNELLING                              = 0xA780,    // 42880 - 4.0.6.13623
    CMSG_UNLEARN_SPELL                                   = 0x201,
    CMSG_DECHARGE                                        = 0x204,
    CMSG_CANCEL_AUTO_REPEAT_SPELL                        = 0x75CC,    // 30156 - 4.0.6.13623
    CMSG_SUMMON_RESPONSE                                 = 0x6BA0,    // 27552 - 4.0.6.13623
    CMSG_SEND_GENERAL_TRIGGER                            = 0x393,
    CMSG_SEND_COMBAT_TRIGGER                             = 0x394,
    CMSG_TARGET_CAST                                     = 0x3D0,
    CMSG_TARGET_SCRIPT_CAST                              = 0x3D1,
    CMSG_SPELLCLICK                                      = 0xF9A4,    // 63908 - 4.0.6.13623
    CMSG_NO_SPELL_VARIANCE                               = 0x416,

    // Spell Aura
    CMSG_CANCEL_AURA                                     = 0x7684,    // 30340 - 4.0.6.13623
    CMSG_PET_CANCEL_AURA                                 = 0xF6C0,    // 63168 - 4.0.6.13623
    CMSG_CANCEL_GROWTH_AURA                              = 0xFECC,    // 65228 - 4.0.6.13623

    // Spell Cooldown
    CMSG_COOLDOWN_CHEAT                                  = 0x028,

    // Spell Pet
    CMSG_PET_CAST_SPELL                                  = 0x2888,    // 10376 - 4.0.6.13623
    CMSG_PET_SPELL_AUTOCAST                              = 0xB6A4,    // 46756 - 4.0.6.13623

    /***********************************************************/
    /******************* TRANSPORT OPCODES *********************/
    /***********************************************************/
    // Transport Taxi
    CMSG_TAXICLEARALLNODES                               = 0x1A6,
    CMSG_TAXIENABLEALLNODES                              = 0x1A7,
    CMSG_TAXISHOWNODES                                   = 0xB8E8,    // 47336 - 4.0.6.13623
    CMSG_TAXINODE_STATUS_QUERY                           = 0xA1EC,    // 41452 - 4.0.6.13623
    CMSG_TAXIQUERYAVAILABLENODES                         = 0xBE8E,    // 48782 - 4.0.6.13623
    CMSG_ACTIVATETAXI                                    = 0x39A4,    // 14756 - 4.0.6.13623
    CMSG_TAXICLEARNODE                                   = 0x241,
    CMSG_TAXIENABLENODE                                  = 0x242,
    CMSG_ACTIVATETAXIEXPRESS                             = 0xFC8C,    // 64652 - 4.0.6.13623
    CMSG_SET_TAXI_BENCHMARK_MODE                         = 0x73C4,    // 29636 - 4.0.6.13623
    CMSG_ENABLETAXI                                      = 0x328C,    // 12940 - 4.0.6.13623

    /***********************************************************/
    /****************** TIME / SPEED OPCODES *******************/
    /***********************************************************/
    // Time
    CMSG_GAMETIME_SET                                    = 0x20C4,    // 8388  - 4.0.6.13623
    CMSG_SERVERTIME                                      = 0x2084,    // 8324  - 4.0.6.13623
    CMSG_PLAYED_TIME                                     = 0xF480,    // 62592 - 4.0.6.13623
    CMSG_QUERY_TIME                                      = 0xB1C0,    // 45504 - 4.0.6.13623
    CMSG_TIME_SYNC_RESP                                  = 0xA8AC,    // 43180 - 4.0.6.13623
    CMSG_KEEP_ALIVE                                      = 0x2CE0,    // 11488 - 4.0.6.13623
    CMSG_WORLD_STATE_UI_TIMER_UPDATE                     = 0x3FA8,    // 16296 - 4.0.6.13623
    CMSG_READY_FOR_ACCOUNT_DATA_TIMES                    = 0x7DA8,    // 32168 - 4.0.6.13623

    // Speed
    CMSG_GAMESPEED_SET                                   = 0x046,

    /***********************************************************/
    /****************** UNCATEGORZIED OPCODES ******************/
    /***********************************************************/
    CMSG_ZONE_MAP                                        = 0x00A,
    CMSG_DEBUG_CHANGECELLZONE                            = 0x00C,
    CMSG_CREATEMONSTER                                   = 0x011,
    CMSG_DESTROYMONSTER                                  = 0x012,
    CMSG_MAKEMONSTERATTACKGUID                           = 0x016,
    CMSG_BOT_DETECTED2                                   = 0x017,
    CMSG_PETGODMODE                                      = 0x01C,
    CMSG_WEATHER_SPEED_CHEAT                             = 0x01F,
    CMSG_BEASTMASTER                                     = 0x021,
    CMSG_CHEAT_SETMONEY                                  = 0x024,
    CMSG_SET_WORLDSTATE                                  = 0x027,
    CMSG_ADVANCE_SPAWN_TIME                              = 0x031,
    CMSG_AREATRIGGER                                     = 0xADA8,    // 44456 - 4.0.6.13623
    CMSG_STANDSTATECHANGE                                = 0xFC88,    // 64648 - 4.0.6.13623
    CMSG_SET_SELECTION                                   = 0x6488,    // 25736 - 4.0.6.13623
    CMSG_UNUSED2                                         = 0x140,
    CMSG_BINDER_ACTIVATE                                 = 0xA48C,    // 42124 - 4.0.6.13623
    CMSG_BANKER_ACTIVATE                                 = 0xE7E0,    // 59360 - 4.0.6.13623
    CMSG_BUY_BANK_SLOT                                   = 0x2BA0,    // 11168 - 4.0.6.13623
    CMSG_BUG                                             = 0x34AC,    // 13484 - 4.0.6.13623
    CMSG_SET_SKILL_CHEAT                                 = 0x1D8,
    CMSG_PING                                            = 0x064E,    // 1614  - 4.0.6.13623
    CMSG_SETSHEATHED                                     = 0xAAE4,    // 43748 - 4.0.6.13623
    CMSG_ZONEUPDATE                                      = 0x33E4,    // 13284 - 4.0.6.13623
    CMSG_UNLEARN_SKILL                                   = 0x63C8,    // 25544 - 4.0.6.13623
    CMSG_SPIRIT_HEALER_ACTIVATE                          = 0xF3AC,    // 62380 - 4.0.6.13623
    CMSG_SET_STAT_CHEAT                                  = 0x21D,
    CMSG_XP_CHEAT                                        = 0x221,
    CMSG_SERVER_COMMAND                                  = 0x227,
    CMSG_CLEAR_EXPLORATION                               = 0x237,
    CMSG_SET_AMMO                                        = 0x268,
    CMSG_SET_ACTIVE_MOVER                                = 0x6CA0,    // 27808 - 4.0.6.13623
    CMSG_FAR_SIGHT                                       = 0xB2EC,    // 45804 - 4.0.6.13623
    CMSG_SELF_RES                                        = 0xAEC4,    // 44740 - 4.0.6.13623
    CMSG_RUN_SCRIPT                                      = 0x2B5,
    CMSG_AREA_SPIRIT_HEALER_QUERY                        = 0xA6C0,    // 42688 - 4.0.6.13623
    CMSG_AREA_SPIRIT_HEALER_QUEUE                        = 0xF388,    // 62344 - 4.0.6.13623
    CMSG_WARDEN_DATA                                     = 0x2F84,    // 12164 - 4.0.6.13623
    CMSG_DEBUG_ACTIONS_START                             = 0x315,
    CMSG_DEBUG_ACTIONS_STOP                              = 0x316,
    CMSG_LUA_USAGE                                       = 0x323,
    CMSG_IGNORE_KNOCKBACK_CHEAT                          = 0x32C,
    CMSG_MAELSTROM_INVALIDATE_CACHE                      = 0x387,
    CMSG_SEND_LOCAL_EVENT                                = 0x392,
    CMSG_BOT_DETECTED                                    = 0x3C0,
    CMSG_CHEAT_PLAYER_LOGIN                              = 0x3C2,
    CMSG_CHEAT_PLAYER_LOOKUP                             = 0x3C3,
    CMSG_COMPLAIN                                        = 0x68C8,    // 26824 - 4.0.6.13623
    CMSG_GET_MIRRORIMAGE_DATA                            = 0xA08C,    // 41100 - 4.0.6.13623
    CMSG_IGNORE_DIMINISHING_RETURNS_CHEAT                = 0x405,
    CMSG_QUERY_SERVER_BUCK_DATA                          = 0x41B,
    CMSG_CLEAR_SERVER_BUCK_DATA                          = 0x41C,
    CMSG_ALTER_APPEARANCE                                = 0x34A4,    // 13476 - 4.0.6.13623
    CMSG_UNITANIMTIER_CHEAT                              = 0x472,
    CMSG_DISMISS_CRITTER                                 = 0xB7CC,    // 47052 - 4.0.6.13623
    CMSG_FLOOD_GRACE_CHEAT                               = 0x497,

    // Lottery
    CMSG_LOTTERY_QUERY_OBSOLETE                          = 0x334,
    CMSG_BUY_LOTTERY_TICKET_OBSOLETE                     = 0x336,

    // Action
    CMSG_FORCEACTION                                     = 0x018,
    CMSG_FORCEACTIONONOTHER                              = 0x019,
    CMSG_FORCEACTIONSHOW                                 = 0x01A,

    // Event
    CMSG_SEND_EVENT                                      = 0x02D,
    CMSG_DEBUG_AISTATE                                   = 0x02E,

    // Commentator
    CMSG_COMMENTATOR_ENABLE                              = 0xB1C4,    // 45508 - 4.0.6.13623
    CMSG_COMMENTATOR_GET_MAP_INFO                        = 0x28C4,    // 10436 - 4.0.6.13623
    CMSG_COMMENTATOR_GET_PLAYER_INFO                     = 0xBBA0,    // 48032 - 4.0.6.136223
    CMSG_COMMENTATOR_ENTER_INSTANCE                      = 0x7BCC,    // 31692 - 4.0.6.13623
    CMSG_COMMENTATOR_EXIT_INSTANCE                       = 0xB8E4,    // 47332 - 4.0.6.13623
    CMSG_COMMENTATOR_INSTANCE_COMMAND                    = 0x7D80,    // 32128 - 4.0.6.13623
    CMSG_COMMENTATOR_SKIRMISH_QUEUE_COMMAND              = 0x6DC8,    // 28104 - 4.0.6.13623
    CMSG_COMMENTATOR_START_WARGAME                       = 0x8588,    // 34184 - 4.0.6.13623

    // Vehicle
    CMSG_DISMISS_CONTROLLED_VEHICLE                      = 0xE3C0,    // 58304 - 4.0.6.13623
    CMSG_REQUEST_VEHICLE_EXIT                            = 0x208C,    // 8332  - 4.0.6.13623
    CMSG_REQUEST_VEHICLE_PREV_SEAT                       = 0x2DE4,    // 11748 - 4.0.6.13623
    CMSG_REQUEST_VEHICLE_NEXT_SEAT                       = 0x64E4,    // 25828 - 4.0.6.13623
    CMSG_REQUEST_VEHICLE_SWITCH_SEAT                     = 0xA8CC,    // 43212 - 4.0.6.13623
    CMSG_CHANGE_SEATS_ON_CONTROLLED_VEHICLE              = 0xE988,    // 59784 - 4.0.6.13623
    CMSG_QUERY_VEHICLE_STATUS                            = 0x69A0,    // 27040 - 4.0.6.13623
    CMSG_PLAYER_VEHICLE_ENTER                            = 0xAEC8,    // 44744 - 4.0.6.13623
    CMSG_EJECT_PASSENGER                                 = 0xF688,    // 63112 - 4.0.6.13623

    /***********************************************************/
    /********************** WORLD OPCODES **********************/
    /***********************************************************/
    // World Teleport
    CMSG_WORLD_TELEPORT                                  = 0x8581,    // 34177 - 4.0.6.13623
    CMSG_WORLD_LOGIN                                     = 0x8508,    // 34056 - 4.0.6.13623
    CMSG_TELEPORT_TO_UNIT                                = 0xE1AC,    // 57772 - 4.0.6.13623
    CMSG_REQUEST_ACCOUNT_DATA                            = 0xEEAC,    // 61100 - 4.0.6.13623
    CMSG_UPDATE_ACCOUNT_DATA                             = 0x72A4,    // 29348 - 4.0.6.13623
};

extern void ClientOpcodeTable();

struct ClientOpcodeHandler
{
    char const* name;
    SessionStatus status;
    PacketProcessing packetProcessing;
    void (WorldSession::*handler)(WorldPacket& recvPacket);
};

extern ClientOpcodeHandler clientOpcodeTable[NUM_MSG_TYPES];

inline const char* LookupClientOpcodeName(uint32 opcodeValue)
{
    return clientOpcodeTable[opcodeValue].name;
}

#endif
