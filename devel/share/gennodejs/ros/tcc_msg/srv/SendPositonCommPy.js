// Auto-generated. Do not edit!

// (in-package tcc_msg.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SendPositonCommPyRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.ask = null;
    }
    else {
      if (initObj.hasOwnProperty('ask')) {
        this.ask = initObj.ask
      }
      else {
        this.ask = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SendPositonCommPyRequest
    // Serialize message field [ask]
    bufferOffset = _serializer.bool(obj.ask, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SendPositonCommPyRequest
    let len;
    let data = new SendPositonCommPyRequest(null);
    // Deserialize message field [ask]
    data.ask = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'tcc_msg/SendPositonCommPyRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fbe9700edfca44c5eefb040d9b60f6d6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool ask
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SendPositonCommPyRequest(null);
    if (msg.ask !== undefined) {
      resolved.ask = msg.ask;
    }
    else {
      resolved.ask = false
    }

    return resolved;
    }
};

class SendPositonCommPyResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.positions = null;
    }
    else {
      if (initObj.hasOwnProperty('positions')) {
        this.positions = initObj.positions
      }
      else {
        this.positions = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SendPositonCommPyResponse
    // Serialize message field [positions]
    bufferOffset = _arraySerializer.float32(obj.positions, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SendPositonCommPyResponse
    let len;
    let data = new SendPositonCommPyResponse(null);
    // Deserialize message field [positions]
    data.positions = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.positions.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'tcc_msg/SendPositonCommPyResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '500517ac65e26e2ba75ed60def015c0a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[] positions
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SendPositonCommPyResponse(null);
    if (msg.positions !== undefined) {
      resolved.positions = msg.positions;
    }
    else {
      resolved.positions = []
    }

    return resolved;
    }
};

module.exports = {
  Request: SendPositonCommPyRequest,
  Response: SendPositonCommPyResponse,
  md5sum() { return 'acb524fbac00926fc8ce7e7c36ae4e03'; },
  datatype() { return 'tcc_msg/SendPositonCommPy'; }
};
