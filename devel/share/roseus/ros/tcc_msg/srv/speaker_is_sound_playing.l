;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::speaker_is_sound_playing)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'speaker_is_sound_playing (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::SPEAKER_IS_SOUND_PLAYING")
  (make-package "TCC_MSG::SPEAKER_IS_SOUND_PLAYING"))
(unless (find-package "TCC_MSG::SPEAKER_IS_SOUND_PLAYINGREQUEST")
  (make-package "TCC_MSG::SPEAKER_IS_SOUND_PLAYINGREQUEST"))
(unless (find-package "TCC_MSG::SPEAKER_IS_SOUND_PLAYINGRESPONSE")
  (make-package "TCC_MSG::SPEAKER_IS_SOUND_PLAYINGRESPONSE"))

(in-package "ROS")





(defclass tcc_msg::speaker_is_sound_playingRequest
  :super ros::object
  :slots (_sound ))

(defmethod tcc_msg::speaker_is_sound_playingRequest
  (:init
   (&key
    ((:sound __sound) "")
    )
   (send-super :init)
   (setq _sound (string __sound))
   self)
  (:sound
   (&optional __sound)
   (if __sound (setq _sound __sound)) _sound)
  (:serialization-length
   ()
   (+
    ;; string _sound
    4 (length _sound)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _sound
       (write-long (length _sound) s) (princ _sound s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _sound
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _sound (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass tcc_msg::speaker_is_sound_playingResponse
  :super ros::object
  :slots (_value ))

(defmethod tcc_msg::speaker_is_sound_playingResponse
  (:init
   (&key
    ((:value __value) nil)
    )
   (send-super :init)
   (setq _value __value)
   self)
  (:value
   (&optional (__value :null))
   (if (not (eq __value :null)) (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; bool _value
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _value
       (if _value (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _value
     (setq _value (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass tcc_msg::speaker_is_sound_playing
  :super ros::object
  :slots ())

(setf (get tcc_msg::speaker_is_sound_playing :md5sum-) "5e90e3a791904b68b561b7067a8d366b")
(setf (get tcc_msg::speaker_is_sound_playing :datatype-) "tcc_msg/speaker_is_sound_playing")
(setf (get tcc_msg::speaker_is_sound_playing :request) tcc_msg::speaker_is_sound_playingRequest)
(setf (get tcc_msg::speaker_is_sound_playing :response) tcc_msg::speaker_is_sound_playingResponse)

(defmethod tcc_msg::speaker_is_sound_playingRequest
  (:response () (instance tcc_msg::speaker_is_sound_playingResponse :init)))

(setf (get tcc_msg::speaker_is_sound_playingRequest :md5sum-) "5e90e3a791904b68b561b7067a8d366b")
(setf (get tcc_msg::speaker_is_sound_playingRequest :datatype-) "tcc_msg/speaker_is_sound_playingRequest")
(setf (get tcc_msg::speaker_is_sound_playingRequest :definition-)
      "string sound
---
bool value

")

(setf (get tcc_msg::speaker_is_sound_playingResponse :md5sum-) "5e90e3a791904b68b561b7067a8d366b")
(setf (get tcc_msg::speaker_is_sound_playingResponse :datatype-) "tcc_msg/speaker_is_sound_playingResponse")
(setf (get tcc_msg::speaker_is_sound_playingResponse :definition-)
      "string sound
---
bool value

")



(provide :tcc_msg/speaker_is_sound_playing "5e90e3a791904b68b561b7067a8d366b")


