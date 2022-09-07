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

class EkfController {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.phi = null;
      this.teta = null;
      this.psy = null;
      this.p = null;
      this.q = null;
      this.r = null;
    }
    else {
      if (initObj.hasOwnProperty('phi')) {
        this.phi = initObj.phi
      }
      else {
        this.phi = 0.0;
      }
      if (initObj.hasOwnProperty('teta')) {
        this.teta = initObj.teta
      }
      else {
        this.teta = 0.0;
      }
      if (initObj.hasOwnProperty('psy')) {
        this.psy = initObj.psy
      }
      else {
        this.psy = 0.0;
      }
      if (initObj.hasOwnProperty('p')) {
        this.p = initObj.p
      }
      else {
        this.p = 0.0;
      }
      if (initObj.hasOwnProperty('q')) {
        this.q = initObj.q
      }
      else {
        this.q = 0.0;
      }
      if (initObj.hasOwnProperty('r')) {
        this.r = initObj.r
      }
      else {
        this.r = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EkfController
    // Serialize message field [phi]
    bufferOffset = _serializer.float64(obj.phi, buffer, bufferOffset);
    // Serialize message field [teta]
    bufferOffset = _serializer.float64(obj.teta, buffer, bufferOffset);
    // Serialize message field [psy]
    bufferOffset = _serializer.float64(obj.psy, buffer, bufferOffset);
    // Serialize message field [p]
    bufferOffset = _serializer.float64(obj.p, buffer, bufferOffset);
    // Serialize message field [q]
    bufferOffset = _serializer.float64(obj.q, buffer, bufferOffset);
    // Serialize message field [r]
    bufferOffset = _serializer.float64(obj.r, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EkfController
    let len;
    let data = new EkfController(null);
    // Deserialize message field [phi]
    data.phi = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [teta]
    data.teta = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [psy]
    data.psy = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [p]
    data.p = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [q]
    data.q = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [r]
    data.r = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 48;
  }

  static datatype() {
    // Returns string type for a message object
    return 'tcc_msg/EkfController';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a3c6fe06aab872658fab94d8664675f5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 phi
    float64 teta
    float64 psy
    float64 p
    float64 q
    float64 r
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new EkfController(null);
    if (msg.phi !== undefined) {
      resolved.phi = msg.phi;
    }
    else {
      resolved.phi = 0.0
    }

    if (msg.teta !== undefined) {
      resolved.teta = msg.teta;
    }
    else {
      resolved.teta = 0.0
    }

    if (msg.psy !== undefined) {
      resolved.psy = msg.psy;
    }
    else {
      resolved.psy = 0.0
    }

    if (msg.p !== undefined) {
      resolved.p = msg.p;
    }
    else {
      resolved.p = 0.0
    }

    if (msg.q !== undefined) {
      resolved.q = msg.q;
    }
    else {
      resolved.q = 0.0
    }

    if (msg.r !== undefined) {
      resolved.r = msg.r;
    }
    else {
      resolved.r = 0.0
    }

    return resolved;
    }
};

module.exports = EkfController;
