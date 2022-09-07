# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tcc_msg/sendPosPy2Webots.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class sendPosPy2Webots(genpy.Message):
  _md5sum = "502a1295b892f5068b280d9a9d0ad702"
  _type = "tcc_msg/sendPosPy2Webots"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64[12] positions
int16[12] velocity
"""
  __slots__ = ['positions','velocity']
  _slot_types = ['float64[12]','int16[12]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       positions,velocity

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(sendPosPy2Webots, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.positions is None:
        self.positions = [0.] * 12
      if self.velocity is None:
        self.velocity = [0] * 12
    else:
      self.positions = [0.] * 12
      self.velocity = [0] * 12

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
      buff.write(_get_struct_12d().pack(*self.positions))
      buff.write(_get_struct_12h().pack(*self.velocity))
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
      end += 96
      self.positions = _get_struct_12d().unpack(str[start:end])
      start = end
      end += 24
      self.velocity = _get_struct_12h().unpack(str[start:end])
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
      buff.write(self.positions.tostring())
      buff.write(self.velocity.tostring())
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
      end += 96
      self.positions = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=12)
      start = end
      end += 24
      self.velocity = numpy.frombuffer(str[start:end], dtype=numpy.int16, count=12)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_12d = None
def _get_struct_12d():
    global _struct_12d
    if _struct_12d is None:
        _struct_12d = struct.Struct("<12d")
    return _struct_12d
_struct_12h = None
def _get_struct_12h():
    global _struct_12h
    if _struct_12h is None:
        _struct_12h = struct.Struct("<12h")
    return _struct_12h
