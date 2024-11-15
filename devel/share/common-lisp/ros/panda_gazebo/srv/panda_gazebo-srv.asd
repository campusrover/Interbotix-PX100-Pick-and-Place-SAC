
(cl:in-package :asdf)

(defsystem "panda_gazebo-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :panda_gazebo-msg
)
  :components ((:file "_package")
    (:file "AddBox" :depends-on ("_package_AddBox"))
    (:file "_package_AddBox" :depends-on ("_package"))
    (:file "AddPlane" :depends-on ("_package_AddPlane"))
    (:file "_package_AddPlane" :depends-on ("_package"))
    (:file "GetControlledJoints" :depends-on ("_package_GetControlledJoints"))
    (:file "_package_GetControlledJoints" :depends-on ("_package"))
    (:file "GetEe" :depends-on ("_package_GetEe"))
    (:file "_package_GetEe" :depends-on ("_package"))
    (:file "GetEePose" :depends-on ("_package_GetEePose"))
    (:file "_package_GetEePose" :depends-on ("_package"))
    (:file "GetEePoseJointConfig" :depends-on ("_package_GetEePoseJointConfig"))
    (:file "_package_GetEePoseJointConfig" :depends-on ("_package"))
    (:file "GetEeRpy" :depends-on ("_package_GetEeRpy"))
    (:file "_package_GetEeRpy" :depends-on ("_package"))
    (:file "GetMoveItControlledJoints" :depends-on ("_package_GetMoveItControlledJoints"))
    (:file "_package_GetMoveItControlledJoints" :depends-on ("_package"))
    (:file "GetRandomEePose" :depends-on ("_package_GetRandomEePose"))
    (:file "_package_GetRandomEePose" :depends-on ("_package"))
    (:file "GetRandomJointPositions" :depends-on ("_package_GetRandomJointPositions"))
    (:file "_package_GetRandomJointPositions" :depends-on ("_package"))
    (:file "LockJoints" :depends-on ("_package_LockJoints"))
    (:file "_package_LockJoints" :depends-on ("_package"))
    (:file "SetEe" :depends-on ("_package_SetEe"))
    (:file "_package_SetEe" :depends-on ("_package"))
    (:file "SetEePose" :depends-on ("_package_SetEePose"))
    (:file "_package_SetEePose" :depends-on ("_package"))
    (:file "SetGripperWidth" :depends-on ("_package_SetGripperWidth"))
    (:file "_package_SetGripperWidth" :depends-on ("_package"))
    (:file "SetJointCommands" :depends-on ("_package_SetJointCommands"))
    (:file "_package_SetJointCommands" :depends-on ("_package"))
    (:file "SetJointEfforts" :depends-on ("_package_SetJointEfforts"))
    (:file "_package_SetJointEfforts" :depends-on ("_package"))
    (:file "SetJointPositions" :depends-on ("_package_SetJointPositions"))
    (:file "_package_SetJointPositions" :depends-on ("_package"))
  ))