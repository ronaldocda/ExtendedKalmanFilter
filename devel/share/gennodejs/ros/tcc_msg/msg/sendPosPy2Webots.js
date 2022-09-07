// Auto-generated. Do not edit!

// (in-package tcc_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class sendPosPy2Webots {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.positions = null;
      this.velocity = null;
    }
    else {
      if (initObj.hasOwnProperty('positions')) {
        this.positions = initObj.positions
      }
      else {
        this.positions = new Array(12).fill(0);
      }
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = new Array(12).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type sendPosPy2Webots
    // Check that the constant length array field [positions] has the right length
    if (obj.positions.length !== 12) {
      throw new Error('Unable to serialize array field positions - length must be 12')
    }
    // Serialize message field [positions]
    bufferOffset = _arraySerializer.float64(obj.positions, buffer, bufferOffset, 12);
    // Check that the constant length array field [velocity] has the right length
    if (obj.velocity.length !== 12) {
      throw new Error('Unable to serialize array field velocity - length must be 12')
    }
    // Serialize message field [velocity]
    bufferOffset = _arraySerializer.int16(obj.velocity, buffer, bufferOffset, 12);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type sendPosPy2Webots
    let len;
    let data = new sendPosPy2Webots(null);
    // Deserialize message field [positions]
    data.positions = _arrayDeserializer.float64(buffer, bufferOffset, 12)
    // Deserialize message field [velocity]
    data.velocity = _arrayDeserializer.int16(buffer, bufferOffset, 12)
    return data;
  }

  static getMessageSize(object) {
    return 120;
  }

  static datatype() {
    // Returns string type for a message object
    return 'tcc_msg/sendPosPy2Webots';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '502a1295b892f5068b280d9a9d0ad702';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64[12] positions
    int16[12] velocity
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new sendPosPy2Webots(null);
    if (msg.positions !== undefined) {
      resolved.positions = msg.positions;
    }
    else {
      resolved.positions = new Array(12).fill(0)
    }

    if (msg.velocity !== undefined) {
      resolved.velocity = msg.velocity;
    }
    else {
      resolved.velocity = new Array(12).fill(0)
    }

    return resolved;
    }
};

module.exports = sendPosPy2Webots;
