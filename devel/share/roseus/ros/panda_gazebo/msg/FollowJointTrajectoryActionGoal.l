;; Auto-generated. Do not edit!


(when (boundp 'panda_gazebo::FollowJointTrajectoryActionGoal)
  (if (not (find-package "PANDA_GAZEBO"))
    (make-package "PANDA_GAZEBO"))
  (shadow 'FollowJointTrajectoryActionGoal (find-package "PANDA_GAZEBO")))
(unless (find-package "PANDA_GAZEBO::FOLLOWJOINTTRAJECTORYACTIONGOAL")
  (make-package "PANDA_GAZEBO::FOLLOWJOINTTRAJECTORYACTIONGOAL"))

(in-package "ROS")
;;//! \htmlinclude FollowJointTrajectoryActionGoal.msg.html
(if (not (find-package "ACTIONLIB_MSGS"))
  (ros::roseus-add-msgs "actionlib_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass panda_gazebo::FollowJointTrajectoryActionGoal
  :super ros::object
  :slots (_header _goal_id _goal ))

(defmethod panda_gazebo::FollowJointTrajectoryActionGoal
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:goal_id __goal_id) (instance actionlib_msgs::GoalID :init))
    ((:goal __goal) (instance panda_gazebo::FollowJointTrajectoryGoal :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _goal_id __goal_id)
   (setq _goal __goal)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:goal_id
   (&rest __goal_id)
   (if (keywordp (car __goal_id))
       (send* _goal_id __goal_id)
     (progn
       (if __goal_id (setq _goal_id (car __goal_id)))
       _goal_id)))
  (:goal
   (&rest __goal)
   (if (keywordp (car __goal))
       (send* _goal __goal)
     (progn
       (if __goal (setq _goal (car __goal)))
       _goal)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; actionlib_msgs/GoalID _goal_id
    (send _goal_id :serialization-length)
    ;; panda_gazebo/FollowJointTrajectoryGoal _goal
    (send _goal :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; actionlib_msgs/GoalID _goal_id
       (send _goal_id :serialize s)
     ;; panda_gazebo/FollowJointTrajectoryGoal _goal
       (send _goal :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; actionlib_msgs/GoalID _goal_id
     (send _goal_id :deserialize buf ptr-) (incf ptr- (send _goal_id :serialization-length))
   ;; panda_gazebo/FollowJointTrajectoryGoal _goal
     (send _goal :deserialize buf ptr-) (incf ptr- (send _goal :serialization-length))
   ;;
   self)
  )

(setf (get panda_gazebo::FollowJointTrajectoryActionGoal :md5sum-) "e5dfdfde003fbe231d7141be8b8992c2")
(setf (get panda_gazebo::FollowJointTrajectoryActionGoal :datatype-) "panda_gazebo/FollowJointTrajectoryActionGoal")
(setf (get panda_gazebo::FollowJointTrajectoryActionGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
FollowJointTrajectoryGoal goal

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: panda_gazebo/FollowJointTrajectoryGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Follow_joint_trajectory action
# NOTE: This action extends the control_msgs/FollowJointTrajectoryAction such that
# it also contains values to automatically generate the time axis

# The joint trajectory to follow
trajectory_msgs/JointTrajectory trajectory

# Tolerances for the trajectory.  If the measured joint values fall
# outside the tolerances the trajectory goal is aborted.  Any
# tolerances that are not specified (by being omitted or set to 0) are
# set to the defaults for the action server (often taken from the
# parameter server).

# Tolerances applied to the joints as the trajectory is executed.  If
# violated, the goal aborts with error_code set to
# PATH_TOLERANCE_VIOLATED.
control_msgs/JointTolerance[] path_tolerance

# To report success, the joints must be within goal_tolerance of the
# final trajectory value.  The goal must be achieved by time the
# trajectory ends plus goal_time_tolerance.  (goal_time_tolerance
# allows some leeway in time, so that the trajectory goal can still
# succeed even if the joints reach the goal some time after the
# precise end time of the trajectory).
#
# If the joints are not within goal_tolerance after \"trajectory finish
# time\" + goal_time_tolerance, the goal aborts with error_code set to
# GOAL_TOLERANCE_VIOLATED
control_msgs/JointTolerance[] goal_tolerance
duration goal_time_tolerance

# Extra time axis attributes
# NOTE: Used for automatic time axis generation
bool create_time_axis  # Automatically create a time axis
float64 time_axis_step  # Time axis step size
duration timeout # Action server timeout. If set to 0, no timeout is used and action waits indefinitely.


================================================================================
MSG: trajectory_msgs/JointTrajectory
Header header
string[] joint_names
JointTrajectoryPoint[] points

================================================================================
MSG: trajectory_msgs/JointTrajectoryPoint
# Each trajectory point specifies either positions[, velocities[, accelerations]]
# or positions[, effort] for the trajectory to be executed.
# All specified values are in the same order as the joint names in JointTrajectory.msg

float64[] positions
float64[] velocities
float64[] accelerations
float64[] effort
duration time_from_start

================================================================================
MSG: control_msgs/JointTolerance
# The tolerances specify the amount the position, velocity, and
# accelerations can vary from the setpoints.  For example, in the case
# of trajectory control, when the actual position varies beyond
# (desired position + position tolerance), the trajectory goal may
# abort.
# 
# There are two special values for tolerances:
#  * 0 - The tolerance is unspecified and will remain at whatever the default is
#  * -1 - The tolerance is \"erased\".  If there was a default, the joint will be
#         allowed to move without restriction.

string name
float64 position  # in radians or meters (for a revolute or prismatic joint, respectively)
float64 velocity  # in rad/sec or m/sec
float64 acceleration  # in rad/sec^2 or m/sec^2

")



(provide :panda_gazebo/FollowJointTrajectoryActionGoal "e5dfdfde003fbe231d7141be8b8992c2")

