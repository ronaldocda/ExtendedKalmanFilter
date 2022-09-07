# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from movement/lidar_get_infoRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class lidar_get_infoRequest(genpy.Message):
  _md5sum = "f9df5232b65af94f73f79fe6d84301bb"
  _type = "movement/lidar_get_infoRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 ask
"""
  __slots__ = ['ask']
  _slot_types = ['uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ask

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(lidar_get_infoRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.ask is None:
        self.ask = 0
    else:
      self.ask = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.ask
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.ask,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.ask
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.ask,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from movement/lidar_get_infoResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class lidar_get_infoResponse(genpy.Message):
  _md5sum = "e3ce26475d0d5fee0e59e3479a798bf0"
  _type = "movement/lidar_get_infoResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint32 horizontalResolution
uint32 numberOfLayers
float64 fov
float64 verticalFov
float64 minRange
float64 maxRange

"""
  __slots__ = ['horizontalResolution','numberOfLayers','fov','verticalFov','minRange','maxRange']
  _slot_types = ['uint32','uint32','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       horizontalResolution,numberOfLayers,fov,verticalFov,minRange,maxRange

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(lidar_get_infoResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.horizontalResolution is None:
        self.horizontalResolution = 0
      if self.numberOfLayers is None:
        self.numberOfLayers = 0
      if self.fov is None:
        self.fov = 0.
      if self.verticalFov is None:
        self.verticalFov = 0.
      if self.minRange is None:
        self.minRange = 0.
      if self.maxRange is None:
        self.maxRange = 0.
    else:
      self.horizontalResolution = 0
      self.numberOfLayers = 0
      self.fov = 0.
      self.verticalFov = 0.
      self.minRange = 0.
      self.maxRange = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2I4d().pack(_x.horizontalResolution, _x.numberOfLayers, _x.fov, _x.verticalFov, _x.minRange, _x.maxRange))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 40
      (_x.horizontalResolution, _x.numberOfLayers, _x.fov, _x.verticalFov, _x.minRange, _x.maxRange,) = _get_struct_2I4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2I4d().pack(_x.horizontalResolution, _x.numberOfLayers, _x.fov, _x.verticalFov, _x.minRange, _x.maxRange))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 40
      (_x.horizontalResolution, _x.numberOfLayers, _x.fov, _x.verticalFov, _x.minRange, _x.maxRange,) = _get_struct_2I4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I4d = None
def _get_struct_2I4d():
    global _struct_2I4d
    if _struct_2I4d is None:
        _struct_2I4d = struct.Struct("<2I4d")
    return _struct_2I4d
class lidar_get_info(object):
  _type          = 'movement/lidar_get_info'
  _md5sum = 'd69a9b3d17121f1bdd796764ea53059a'
  _request_class  = lidar_get_infoRequest
  _response_class = lidar_get_infoResponse
