// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_action_interface:action/DockingTwo.idl
// generated code does not contain a copyright notice

#ifndef MY_ACTION_INTERFACE__ACTION__DETAIL__DOCKING_TWO__STRUCT_H_
#define MY_ACTION_INTERFACE__ACTION__DETAIL__DOCKING_TWO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DockingTwo in the package my_action_interface.
typedef struct my_action_interface__action__DockingTwo_Goal
{
  int32_t order;
} my_action_interface__action__DockingTwo_Goal;

// Struct for a sequence of my_action_interface__action__DockingTwo_Goal.
typedef struct my_action_interface__action__DockingTwo_Goal__Sequence
{
  my_action_interface__action__DockingTwo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__DockingTwo_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/DockingTwo in the package my_action_interface.
typedef struct my_action_interface__action__DockingTwo_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} my_action_interface__action__DockingTwo_Result;

// Struct for a sequence of my_action_interface__action__DockingTwo_Result.
typedef struct my_action_interface__action__DockingTwo_Result__Sequence
{
  my_action_interface__action__DockingTwo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__DockingTwo_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/DockingTwo in the package my_action_interface.
typedef struct my_action_interface__action__DockingTwo_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequence;
} my_action_interface__action__DockingTwo_Feedback;

// Struct for a sequence of my_action_interface__action__DockingTwo_Feedback.
typedef struct my_action_interface__action__DockingTwo_Feedback__Sequence
{
  my_action_interface__action__DockingTwo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__DockingTwo_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_action_interface/action/detail/docking_two__struct.h"

/// Struct defined in action/DockingTwo in the package my_action_interface.
typedef struct my_action_interface__action__DockingTwo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_action_interface__action__DockingTwo_Goal goal;
} my_action_interface__action__DockingTwo_SendGoal_Request;

// Struct for a sequence of my_action_interface__action__DockingTwo_SendGoal_Request.
typedef struct my_action_interface__action__DockingTwo_SendGoal_Request__Sequence
{
  my_action_interface__action__DockingTwo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__DockingTwo_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DockingTwo in the package my_action_interface.
typedef struct my_action_interface__action__DockingTwo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_action_interface__action__DockingTwo_SendGoal_Response;

// Struct for a sequence of my_action_interface__action__DockingTwo_SendGoal_Response.
typedef struct my_action_interface__action__DockingTwo_SendGoal_Response__Sequence
{
  my_action_interface__action__DockingTwo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__DockingTwo_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DockingTwo in the package my_action_interface.
typedef struct my_action_interface__action__DockingTwo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_action_interface__action__DockingTwo_GetResult_Request;

// Struct for a sequence of my_action_interface__action__DockingTwo_GetResult_Request.
typedef struct my_action_interface__action__DockingTwo_GetResult_Request__Sequence
{
  my_action_interface__action__DockingTwo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__DockingTwo_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"

/// Struct defined in action/DockingTwo in the package my_action_interface.
typedef struct my_action_interface__action__DockingTwo_GetResult_Response
{
  int8_t status;
  my_action_interface__action__DockingTwo_Result result;
} my_action_interface__action__DockingTwo_GetResult_Response;

// Struct for a sequence of my_action_interface__action__DockingTwo_GetResult_Response.
typedef struct my_action_interface__action__DockingTwo_GetResult_Response__Sequence
{
  my_action_interface__action__DockingTwo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__DockingTwo_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"

/// Struct defined in action/DockingTwo in the package my_action_interface.
typedef struct my_action_interface__action__DockingTwo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_action_interface__action__DockingTwo_Feedback feedback;
} my_action_interface__action__DockingTwo_FeedbackMessage;

// Struct for a sequence of my_action_interface__action__DockingTwo_FeedbackMessage.
typedef struct my_action_interface__action__DockingTwo_FeedbackMessage__Sequence
{
  my_action_interface__action__DockingTwo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__DockingTwo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ACTION_INTERFACE__ACTION__DETAIL__DOCKING_TWO__STRUCT_H_
