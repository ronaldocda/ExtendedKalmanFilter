# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from comm_webots/RecognitionObject.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class RecognitionObject(genpy.Message):
  _md5sum = "d1a091cfdf9ce6628a657e03f119442a"
  _type = "comm_webots/RecognitionObject"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Vector3 position
geometry_msgs/Quaternion orientation
geometry_msgs/Vector3 position_on_image
geometry_msgs/Vector3 size_on_image
int32 number_of_colors
geometry_msgs/Vector3[] colors
string model

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['position','orientation','position_on_image','size_on_image','number_of_colors','colors','model']
  _slot_types = ['geometry_msgs/Vector3','geometry_msgs/Quaternion','geometry_msgs/Vector3','geometry_msgs/Vector3','int32','geometry_msgs/Vector3[]','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       position,orientation,position_on_image,size_on_image,number_of_colors,colors,model

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RecognitionObject, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.position is None:
        self.position = geometry_msgs.msg.Vector3()
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.position_on_image is None:
        self.position_on_image = geometry_msgs.msg.Vector3()
      if self.size_on_image is None:
        self.size_on_image = geometry_msgs.msg.Vector3()
      if self.number_of_colors is None:
        self.number_of_colors = 0
      if self.colors is None:
        self.colors = []
      if self.model is None:
        self.model = ''
    else:
      self.position = geometry_msgs.msg.Vector3()
      self.orientation = geometry_msgs.msg.Quaternion()
      self.position_on_image = geometry_msgs.msg.Vector3()
      self.size_on_image = geometry_msgs.msg.Vector3()
      self.number_of_colors = 0
      self.colors = []
      self.model = ''

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
      buff.write(_get_struct_13di().pack(_x.position.x, _x.position.y, _x.position.z, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.position_on_image.x, _x.position_on_image.y, _x.position_on_image.z, _x.size_on_image.x, _x.size_on_image.y, _x.size_on_image.z, _x.number_of_colors))
      length = len(self.colors)
      buff.write(_struct_I.pack(length))
      for val1 in self.colors:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
      _x = self.model
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      if self.position is None:
        self.position = geometry_msgs.msg.Vector3()
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.position_on_image is None:
        self.position_on_image = geometry_msgs.msg.Vector3()
      if self.size_on_image is None:
        self.size_on_image = geometry_msgs.msg.Vector3()
      if self.colors is None:
        self.colors = None
      end = 0
      _x = self
      start = end
      end += 108
      (_x.position.x, _x.position.y, _x.position.z, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.position_on_image.x, _x.position_on_image.y, _x.position_on_image.z, _x.size_on_image.x, _x.size_on_image.y, _x.size_on_image.z, _x.number_of_colors,) = _get_struct_13di().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.colors = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Vector3()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.colors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.model = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.model = str[start:end]
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
      buff.write(_get_struct_13di().pack(_x.position.x, _x.position.y, _x.position.z, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.position_on_image.x, _x.position_on_image.y, _x.position_on_image.z, _x.size_on_image.x, _x.size_on_image.y, _x.size_on_image.z, _x.number_of_colors))
      length = len(self.colors)
      buff.write(_struct_I.pack(length))
      for val1 in self.colors:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
      _x = self.model
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      if self.position is None:
        self.position = geometry_msgs.msg.Vector3()
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.position_on_image is None:
        self.position_on_image = geometry_msgs.msg.Vector3()
      if self.size_on_image is None:
        self.size_on_image = geometry_msgs.msg.Vector3()
      if self.colors is None:
        self.colors = None
      end = 0
      _x = self
      start = end
      end += 108
      (_x.position.x, _x.position.y, _x.position.z, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.position_on_image.x, _x.position_on_image.y, _x.position_on_image.z, _x.size_on_image.x, _x.size_on_image.y, _x.size_on_image.z, _x.number_of_colors,) = _get_struct_13di().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.colors = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Vector3()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.colors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.model = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.model = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_13di = None
def _get_struct_13di():
    global _struct_13di
    if _struct_13di is None:
        _struct_13di = struct.Struct("<13di")
    return _struct_13di
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
