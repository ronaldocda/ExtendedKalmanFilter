;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::robot_wait_for_user_input_event)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'robot_wait_for_user_input_event (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::ROBOT_WAIT_FOR_USER_INPUT_EVENT")
  (make-package "COMM_WEBOTS::ROBOT_WAIT_FOR_USER_INPUT_EVENT"))
(unless (find-package "COMM_WEBOTS::ROBOT_WAIT_FOR_USER_INPUT_EVENTREQUEST")
  (make-package "COMM_WEBOTS::ROBOT_WAIT_FOR_USER_INPUT_EVENTREQUEST"))
(unless (find-package "COMM_WEBOTS::ROBOT_WAIT_FOR_USER_INPUT_EVENTRESPONSE")
  (make-package "COMM_WEBOTS::ROBOT_WAIT_FOR_USER_INPUT_EVENTRESPONSE"))

(in-package "ROS")





(defclass comm_webots::robot_wait_for_user_input_eventRequest
  :super ros::object
  :slots (_eventType _timeout ))

(defmethod comm_webots::robot_wait_for_user_input_eventRequest
  (:init
   (&key
    ((:eventType __eventType) 0)
    ((:timeout __timeout) 0)
    )
   (send-super :init)
   (setq _eventType (round __eventType))
   (setq _timeout (round __timeout))
   self)
  (:eventType
   (&optional __eventType)
   (if __eventType (setq _eventType __eventType)) _eventType)
  (:timeout
   (&optional __timeout)
   (if __timeout (setq _timeout __timeout)) _timeout)
  (:serialization-length
   ()
   (+
    ;; int32 _eventType
    4
    ;; int32 _timeout
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _eventType
       (write-long _eventType s)
     ;; int32 _timeout
       (write-long _timeout s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _eventType
     (setq _eventType (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _timeout
     (setq _timeout (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass comm_webots::robot_wait_for_user_input_eventResponse
  :super ros::object
  :slots (_event ))

(defmethod comm_webots::robot_wait_for_user_input_eventResponse
  (:init
   (&key
    ((:event __event) 0)
    )
   (send-super :init)
   (setq _event (round __event))
   self)
  (:event
   (&optional __event)
   (if __event (setq _event __event)) _event)
  (:serialization-length
   ()
   (+
    ;; int32 _event
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _event
       (write-long _event s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _event
     (setq _event (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass comm_webots::robot_wait_for_user_input_event
  :super ros::object
  :slots ())

(setf (get comm_webots::robot_wait_for_user_input_event :md5sum-) "117ed5fb1f5c37c2a398a290a90fc55d")
(setf (get comm_webots::robot_wait_for_user_input_event :datatype-) "comm_webots/robot_wait_for_user_input_event")
(setf (get comm_webots::robot_wait_for_user_input_event :request) comm_webots::robot_wait_for_user_input_eventRequest)
(setf (get comm_webots::robot_wait_for_user_input_event :response) comm_webots::robot_wait_for_user_input_eventResponse)

(defmethod comm_webots::robot_wait_for_user_input_eventRequest
  (:response () (instance comm_webots::robot_wait_for_user_input_eventResponse :init)))

(setf (get comm_webots::robot_wait_for_user_input_eventRequest :md5sum-) "117ed5fb1f5c37c2a398a290a90fc55d")
(setf (get comm_webots::robot_wait_for_user_input_eventRequest :datatype-) "comm_webots/robot_wait_for_user_input_eventRequest")
(setf (get comm_webots::robot_wait_for_user_input_eventRequest :definition-)
      "int32 eventType
int32 timeout
---
int32 event

")

(setf (get comm_webots::robot_wait_for_user_input_eventResponse :md5sum-) "117ed5fb1f5c37c2a398a290a90fc55d")
(setf (get comm_webots::robot_wait_for_user_input_eventResponse :datatype-) "comm_webots/robot_wait_for_user_input_eventResponse")
(setf (get comm_webots::robot_wait_for_user_input_eventResponse :definition-)
      "int32 eventType
int32 timeout
---
int32 event

")



(provide :comm_webots/robot_wait_for_user_input_event "117ed5fb1f5c37c2a398a290a90fc55d")


