/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

enum eDecisionMakerEvents {
    DM_EVENT_DRAGGED_OUT_CAR,
    DM_EVENT_KNOCK_OFF_BIKE,
    DM_EVENT_DAMAGE,
    DM_EVENT_DEAD_PED,
    DM_EVENT_POTENTIAL_GET_RUN_OVER,
    DM_EVENT_POTENTIAL_WALK_INTO_PED,
    DM_EVENT_SHOT_FIRED,
    DM_EVENT_PED_ENTERED_MY_VEHICLE,
    DM_EVENT_SEXY_PED,
    DM_EVENT_ATTRACTOR,
    DM_EVENT_VEHICLE_THREAT,
    DM_EVENT_GUN_AIMED_AT,
    DM_EVENT_ACQUAINTANCE_PED_HATE,
    DM_EVENT_ACQUAINTANCE_PED_DISLIKE,
    DM_EVENT_ACQUAINTANCE_PED_LIKE,
    DM_EVENT_ACQUAINTANCE_PED_RESPECT,
    DM_EVENT_VEHICLE_DAMAGE_WEAPON,
    DM_EVENT_SPECIAL,
    DM_EVENT_GOT_KNOCKED_OVER_BY_CAR,
    DM_EVENT_POTENTIAL_WALK_INTO_OBJECT,
    DM_EVENT_POTENTIAL_WALK_INTO_FIRE,
    DM_EVENT_SCRIPTED_ATTRACTOR,
    DM_EVENT_SHOT_FIRED_WHIZZED_BY,
    DM_EVENT_LOW_ANGER_AT_PLAYER,
    DM_EVENT_HIGH_ANGER_AT_PLAYER,
    DM_EVENT_HEALTH_REALLY_LOW,
    DM_EVENT_HEALTH_LOW,
    DM_EVENT_LEADER_ENTERED_CAR_AS_DRIVER,
    DM_EVENT_LEADER_EXITED_CAR_AS_DRIVER,
    DM_EVENT_POTENTIAL_WALK_INTO_VEHICLE,
    DM_EVENT_FIRE_NEARBY,
    DM_EVENT_SOUND_LOUD,
    DM_EVENT_SOUND_QUIET,
    DM_EVENT_ACQUAINTANCE_PED_HATE_BADLY_LIT,
    DM_EVENT_SEEN_PANICKED_PED,
    DM_EVENT_PLAYER_COMMAND_TO_GROUP,
    DM_EVENT_SEEN_COP,
    DM_EVENT_VEHICLE_DAMAGE_COLLISION,
    DM_EVENT_DANGER,
    DM_EVENT_PLAYER_COMMAND_TO_GROUP_GATHER,
    DM_EVENT_VEHICLE_ON_FIRE,

    DM_TOTAL_NUM_EVENTS
};