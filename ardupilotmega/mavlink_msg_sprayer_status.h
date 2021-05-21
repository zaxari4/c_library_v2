#pragma once
// MESSAGE SPRAYER_STATUS PACKING

#define MAVLINK_MSG_ID_SPRAYER_STATUS 197


typedef struct __mavlink_sprayer_status_t {
 uint32_t total_ml; /*<  Total amount of sprayed liquid in milliliters*/
 uint16_t flow_rate; /*<  Current liquid flow rate*/
 uint8_t enabled; /*<  On/Off status*/
 uint8_t power; /*<  Current working power*/
 uint8_t tank_level; /*<  Liquid level in the tank*/
} mavlink_sprayer_status_t;

#define MAVLINK_MSG_ID_SPRAYER_STATUS_LEN 9
#define MAVLINK_MSG_ID_SPRAYER_STATUS_MIN_LEN 9
#define MAVLINK_MSG_ID_197_LEN 9
#define MAVLINK_MSG_ID_197_MIN_LEN 9

#define MAVLINK_MSG_ID_SPRAYER_STATUS_CRC 205
#define MAVLINK_MSG_ID_197_CRC 205



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SPRAYER_STATUS { \
    197, \
    "SPRAYER_STATUS", \
    5, \
    {  { "enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_sprayer_status_t, enabled) }, \
         { "power", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_sprayer_status_t, power) }, \
         { "tank_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_sprayer_status_t, tank_level) }, \
         { "flow_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_sprayer_status_t, flow_rate) }, \
         { "total_ml", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_sprayer_status_t, total_ml) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SPRAYER_STATUS { \
    "SPRAYER_STATUS", \
    5, \
    {  { "enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_sprayer_status_t, enabled) }, \
         { "power", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_sprayer_status_t, power) }, \
         { "tank_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_sprayer_status_t, tank_level) }, \
         { "flow_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_sprayer_status_t, flow_rate) }, \
         { "total_ml", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_sprayer_status_t, total_ml) }, \
         } \
}
#endif

/**
 * @brief Pack a sprayer_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param enabled  On/Off status
 * @param power  Current working power
 * @param tank_level  Liquid level in the tank
 * @param flow_rate  Current liquid flow rate
 * @param total_ml  Total amount of sprayed liquid in milliliters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sprayer_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t enabled, uint8_t power, uint8_t tank_level, uint16_t flow_rate, uint32_t total_ml)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SPRAYER_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, total_ml);
    _mav_put_uint16_t(buf, 4, flow_rate);
    _mav_put_uint8_t(buf, 6, enabled);
    _mav_put_uint8_t(buf, 7, power);
    _mav_put_uint8_t(buf, 8, tank_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN);
#else
    mavlink_sprayer_status_t packet;
    packet.total_ml = total_ml;
    packet.flow_rate = flow_rate;
    packet.enabled = enabled;
    packet.power = power;
    packet.tank_level = tank_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SPRAYER_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SPRAYER_STATUS_MIN_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_CRC);
}

/**
 * @brief Pack a sprayer_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enabled  On/Off status
 * @param power  Current working power
 * @param tank_level  Liquid level in the tank
 * @param flow_rate  Current liquid flow rate
 * @param total_ml  Total amount of sprayed liquid in milliliters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sprayer_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t enabled,uint8_t power,uint8_t tank_level,uint16_t flow_rate,uint32_t total_ml)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SPRAYER_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, total_ml);
    _mav_put_uint16_t(buf, 4, flow_rate);
    _mav_put_uint8_t(buf, 6, enabled);
    _mav_put_uint8_t(buf, 7, power);
    _mav_put_uint8_t(buf, 8, tank_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN);
#else
    mavlink_sprayer_status_t packet;
    packet.total_ml = total_ml;
    packet.flow_rate = flow_rate;
    packet.enabled = enabled;
    packet.power = power;
    packet.tank_level = tank_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SPRAYER_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SPRAYER_STATUS_MIN_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_CRC);
}

/**
 * @brief Encode a sprayer_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sprayer_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sprayer_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sprayer_status_t* sprayer_status)
{
    return mavlink_msg_sprayer_status_pack(system_id, component_id, msg, sprayer_status->enabled, sprayer_status->power, sprayer_status->tank_level, sprayer_status->flow_rate, sprayer_status->total_ml);
}

/**
 * @brief Encode a sprayer_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sprayer_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sprayer_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sprayer_status_t* sprayer_status)
{
    return mavlink_msg_sprayer_status_pack_chan(system_id, component_id, chan, msg, sprayer_status->enabled, sprayer_status->power, sprayer_status->tank_level, sprayer_status->flow_rate, sprayer_status->total_ml);
}

/**
 * @brief Send a sprayer_status message
 * @param chan MAVLink channel to send the message
 *
 * @param enabled  On/Off status
 * @param power  Current working power
 * @param tank_level  Liquid level in the tank
 * @param flow_rate  Current liquid flow rate
 * @param total_ml  Total amount of sprayed liquid in milliliters
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sprayer_status_send(mavlink_channel_t chan, uint8_t enabled, uint8_t power, uint8_t tank_level, uint16_t flow_rate, uint32_t total_ml)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SPRAYER_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, total_ml);
    _mav_put_uint16_t(buf, 4, flow_rate);
    _mav_put_uint8_t(buf, 6, enabled);
    _mav_put_uint8_t(buf, 7, power);
    _mav_put_uint8_t(buf, 8, tank_level);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPRAYER_STATUS, buf, MAVLINK_MSG_ID_SPRAYER_STATUS_MIN_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_CRC);
#else
    mavlink_sprayer_status_t packet;
    packet.total_ml = total_ml;
    packet.flow_rate = flow_rate;
    packet.enabled = enabled;
    packet.power = power;
    packet.tank_level = tank_level;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPRAYER_STATUS, (const char *)&packet, MAVLINK_MSG_ID_SPRAYER_STATUS_MIN_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_CRC);
#endif
}

/**
 * @brief Send a sprayer_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sprayer_status_send_struct(mavlink_channel_t chan, const mavlink_sprayer_status_t* sprayer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sprayer_status_send(chan, sprayer_status->enabled, sprayer_status->power, sprayer_status->tank_level, sprayer_status->flow_rate, sprayer_status->total_ml);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPRAYER_STATUS, (const char *)sprayer_status, MAVLINK_MSG_ID_SPRAYER_STATUS_MIN_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SPRAYER_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sprayer_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t enabled, uint8_t power, uint8_t tank_level, uint16_t flow_rate, uint32_t total_ml)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, total_ml);
    _mav_put_uint16_t(buf, 4, flow_rate);
    _mav_put_uint8_t(buf, 6, enabled);
    _mav_put_uint8_t(buf, 7, power);
    _mav_put_uint8_t(buf, 8, tank_level);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPRAYER_STATUS, buf, MAVLINK_MSG_ID_SPRAYER_STATUS_MIN_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_CRC);
#else
    mavlink_sprayer_status_t *packet = (mavlink_sprayer_status_t *)msgbuf;
    packet->total_ml = total_ml;
    packet->flow_rate = flow_rate;
    packet->enabled = enabled;
    packet->power = power;
    packet->tank_level = tank_level;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPRAYER_STATUS, (const char *)packet, MAVLINK_MSG_ID_SPRAYER_STATUS_MIN_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN, MAVLINK_MSG_ID_SPRAYER_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE SPRAYER_STATUS UNPACKING


/**
 * @brief Get field enabled from sprayer_status message
 *
 * @return  On/Off status
 */
static inline uint8_t mavlink_msg_sprayer_status_get_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field power from sprayer_status message
 *
 * @return  Current working power
 */
static inline uint8_t mavlink_msg_sprayer_status_get_power(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field tank_level from sprayer_status message
 *
 * @return  Liquid level in the tank
 */
static inline uint8_t mavlink_msg_sprayer_status_get_tank_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field flow_rate from sprayer_status message
 *
 * @return  Current liquid flow rate
 */
static inline uint16_t mavlink_msg_sprayer_status_get_flow_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field total_ml from sprayer_status message
 *
 * @return  Total amount of sprayed liquid in milliliters
 */
static inline uint32_t mavlink_msg_sprayer_status_get_total_ml(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a sprayer_status message into a struct
 *
 * @param msg The message to decode
 * @param sprayer_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_sprayer_status_decode(const mavlink_message_t* msg, mavlink_sprayer_status_t* sprayer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sprayer_status->total_ml = mavlink_msg_sprayer_status_get_total_ml(msg);
    sprayer_status->flow_rate = mavlink_msg_sprayer_status_get_flow_rate(msg);
    sprayer_status->enabled = mavlink_msg_sprayer_status_get_enabled(msg);
    sprayer_status->power = mavlink_msg_sprayer_status_get_power(msg);
    sprayer_status->tank_level = mavlink_msg_sprayer_status_get_tank_level(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SPRAYER_STATUS_LEN? msg->len : MAVLINK_MSG_ID_SPRAYER_STATUS_LEN;
        memset(sprayer_status, 0, MAVLINK_MSG_ID_SPRAYER_STATUS_LEN);
    memcpy(sprayer_status, _MAV_PAYLOAD(msg), len);
#endif
}
