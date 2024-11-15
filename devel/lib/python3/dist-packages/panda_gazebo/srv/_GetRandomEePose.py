# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from panda_gazebo/GetRandomEePoseRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import panda_gazebo.msg

class GetRandomEePoseRequest(genpy.Message):
  _md5sum = "e7019f7e493ccd848f6fee8b2f311b10"
  _type = "panda_gazebo/GetRandomEePoseRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Service that can be used to get a valid EE pose for the robot.
BoundingRegion bounding_region
int32 attempts

================================================================================
MSG: panda_gazebo/BoundingRegion
# Message used to define a bounding region by its min/max x,y z values.
float64 x_min
float64 x_max
float64 y_min
float64 y_max
float64 z_min
float64 z_max"""
  __slots__ = ['bounding_region','attempts']
  _slot_types = ['panda_gazebo/BoundingRegion','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       bounding_region,attempts

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetRandomEePoseRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.bounding_region is None:
        self.bounding_region = panda_gazebo.msg.BoundingRegion()
      if self.attempts is None:
        self.attempts = 0
    else:
      self.bounding_region = panda_gazebo.msg.BoundingRegion()
      self.attempts = 0

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
      buff.write(_get_struct_6di().pack(_x.bounding_region.x_min, _x.bounding_region.x_max, _x.bounding_region.y_min, _x.bounding_region.y_max, _x.bounding_region.z_min, _x.bounding_region.z_max, _x.attempts))
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
      if self.bounding_region is None:
        self.bounding_region = panda_gazebo.msg.BoundingRegion()
      end = 0
      _x = self
      start = end
      end += 52
      (_x.bounding_region.x_min, _x.bounding_region.x_max, _x.bounding_region.y_min, _x.bounding_region.y_max, _x.bounding_region.z_min, _x.bounding_region.z_max, _x.attempts,) = _get_struct_6di().unpack(str[start:end])
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
      buff.write(_get_struct_6di().pack(_x.bounding_region.x_min, _x.bounding_region.x_max, _x.bounding_region.y_min, _x.bounding_region.y_max, _x.bounding_region.z_min, _x.bounding_region.z_max, _x.attempts))
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
      if self.bounding_region is None:
        self.bounding_region = panda_gazebo.msg.BoundingRegion()
      end = 0
      _x = self
      start = end
      end += 52
      (_x.bounding_region.x_min, _x.bounding_region.x_max, _x.bounding_region.y_min, _x.bounding_region.y_max, _x.bounding_region.z_min, _x.bounding_region.z_max, _x.attempts,) = _get_struct_6di().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6di = None
def _get_struct_6di():
    global _struct_6di
    if _struct_6di is None:
        _struct_6di = struct.Struct("<6di")
    return _struct_6di
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from panda_gazebo/GetRandomEePoseResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class GetRandomEePoseResponse(genpy.Message):
  _md5sum = "3516fb5b6d6e148286f2b7522e25070a"
  _type = "panda_gazebo/GetRandomEePoseResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Pose ee_pose
string[] joint_names
float64[] joint_positions
bool success
string message


================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
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
  __slots__ = ['ee_pose','joint_names','joint_positions','success','message']
  _slot_types = ['geometry_msgs/Pose','string[]','float64[]','bool','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ee_pose,joint_names,joint_positions,success,message

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetRandomEePoseResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.ee_pose is None:
        self.ee_pose = geometry_msgs.msg.Pose()
      if self.joint_names is None:
        self.joint_names = []
      if self.joint_positions is None:
        self.joint_positions = []
      if self.success is None:
        self.success = False
      if self.message is None:
        self.message = ''
    else:
      self.ee_pose = geometry_msgs.msg.Pose()
      self.joint_names = []
      self.joint_positions = []
      self.success = False
      self.message = ''

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
      buff.write(_get_struct_7d().pack(_x.ee_pose.position.x, _x.ee_pose.position.y, _x.ee_pose.position.z, _x.ee_pose.orientation.x, _x.ee_pose.orientation.y, _x.ee_pose.orientation.z, _x.ee_pose.orientation.w))
      length = len(self.joint_names)
      buff.write(_struct_I.pack(length))
      for val1 in self.joint_names:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
      length = len(self.joint_positions)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.joint_positions))
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
      _x = self.message
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
      if self.ee_pose is None:
        self.ee_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.ee_pose.position.x, _x.ee_pose.position.y, _x.ee_pose.position.z, _x.ee_pose.orientation.x, _x.ee_pose.orientation.y, _x.ee_pose.orientation.z, _x.ee_pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joint_names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.joint_names.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_positions = s.unpack(str[start:end])
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.message = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.message = str[start:end]
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
      buff.write(_get_struct_7d().pack(_x.ee_pose.position.x, _x.ee_pose.position.y, _x.ee_pose.position.z, _x.ee_pose.orientation.x, _x.ee_pose.orientation.y, _x.ee_pose.orientation.z, _x.ee_pose.orientation.w))
      length = len(self.joint_names)
      buff.write(_struct_I.pack(length))
      for val1 in self.joint_names:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
      length = len(self.joint_positions)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.joint_positions.tostring())
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
      _x = self.message
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
      if self.ee_pose is None:
        self.ee_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.ee_pose.position.x, _x.ee_pose.position.y, _x.ee_pose.position.z, _x.ee_pose.orientation.x, _x.ee_pose.orientation.y, _x.ee_pose.orientation.z, _x.ee_pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joint_names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.joint_names.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_positions = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.message = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class GetRandomEePose(object):
  _type          = 'panda_gazebo/GetRandomEePose'
  _md5sum = 'd52fb2aef180d014e1bace1ad112db90'
  _request_class  = GetRandomEePoseRequest
  _response_class = GetRandomEePoseResponse