// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_action_interface:action/DockingTwo.idl
// generated code does not contain a copyright notice

#ifndef MY_ACTION_INTERFACE__ACTION__DETAIL__DOCKING_TWO__BUILDER_HPP_
#define MY_ACTION_INTERFACE__ACTION__DETAIL__DOCKING_TWO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_action_interface/action/detail/docking_two__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_action_interface
{

namespace action
{

namespace builder
{

class Init_DockingTwo_Goal_order
{
public:
  Init_DockingTwo_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_action_interface::action::DockingTwo_Goal order(::my_action_interface::action::DockingTwo_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interface::action::DockingTwo_Goal>()
{
  return my_action_interface::action::builder::Init_DockingTwo_Goal_order();
}

}  // namespace my_action_interface


namespace my_action_interface
{

namespace action
{

namespace builder
{

class Init_DockingTwo_Result_sequence
{
public:
  Init_DockingTwo_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_action_interface::action::DockingTwo_Result sequence(::my_action_interface::action::DockingTwo_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interface::action::DockingTwo_Result>()
{
  return my_action_interface::action::builder::Init_DockingTwo_Result_sequence();
}

}  // namespace my_action_interface


namespace my_action_interface
{

namespace action
{

namespace builder
{

class Init_DockingTwo_Feedback_partial_sequence
{
public:
  Init_DockingTwo_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_action_interface::action::DockingTwo_Feedback partial_sequence(::my_action_interface::action::DockingTwo_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interface::action::DockingTwo_Feedback>()
{
  return my_action_interface::action::builder::Init_DockingTwo_Feedback_partial_sequence();
}

}  // namespace my_action_interface


namespace my_action_interface
{

namespace action
{

namespace builder
{

class Init_DockingTwo_SendGoal_Request_goal
{
public:
  explicit Init_DockingTwo_SendGoal_Request_goal(::my_action_interface::action::DockingTwo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_action_interface::action::DockingTwo_SendGoal_Request goal(::my_action_interface::action::DockingTwo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_SendGoal_Request msg_;
};

class Init_DockingTwo_SendGoal_Request_goal_id
{
public:
  Init_DockingTwo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingTwo_SendGoal_Request_goal goal_id(::my_action_interface::action::DockingTwo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DockingTwo_SendGoal_Request_goal(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interface::action::DockingTwo_SendGoal_Request>()
{
  return my_action_interface::action::builder::Init_DockingTwo_SendGoal_Request_goal_id();
}

}  // namespace my_action_interface


namespace my_action_interface
{

namespace action
{

namespace builder
{

class Init_DockingTwo_SendGoal_Response_stamp
{
public:
  explicit Init_DockingTwo_SendGoal_Response_stamp(::my_action_interface::action::DockingTwo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_action_interface::action::DockingTwo_SendGoal_Response stamp(::my_action_interface::action::DockingTwo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_SendGoal_Response msg_;
};

class Init_DockingTwo_SendGoal_Response_accepted
{
public:
  Init_DockingTwo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingTwo_SendGoal_Response_stamp accepted(::my_action_interface::action::DockingTwo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DockingTwo_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interface::action::DockingTwo_SendGoal_Response>()
{
  return my_action_interface::action::builder::Init_DockingTwo_SendGoal_Response_accepted();
}

}  // namespace my_action_interface


namespace my_action_interface
{

namespace action
{

namespace builder
{

class Init_DockingTwo_GetResult_Request_goal_id
{
public:
  Init_DockingTwo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_action_interface::action::DockingTwo_GetResult_Request goal_id(::my_action_interface::action::DockingTwo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interface::action::DockingTwo_GetResult_Request>()
{
  return my_action_interface::action::builder::Init_DockingTwo_GetResult_Request_goal_id();
}

}  // namespace my_action_interface


namespace my_action_interface
{

namespace action
{

namespace builder
{

class Init_DockingTwo_GetResult_Response_result
{
public:
  explicit Init_DockingTwo_GetResult_Response_result(::my_action_interface::action::DockingTwo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_action_interface::action::DockingTwo_GetResult_Response result(::my_action_interface::action::DockingTwo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_GetResult_Response msg_;
};

class Init_DockingTwo_GetResult_Response_status
{
public:
  Init_DockingTwo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingTwo_GetResult_Response_result status(::my_action_interface::action::DockingTwo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DockingTwo_GetResult_Response_result(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interface::action::DockingTwo_GetResult_Response>()
{
  return my_action_interface::action::builder::Init_DockingTwo_GetResult_Response_status();
}

}  // namespace my_action_interface


namespace my_action_interface
{

namespace action
{

namespace builder
{

class Init_DockingTwo_FeedbackMessage_feedback
{
public:
  explicit Init_DockingTwo_FeedbackMessage_feedback(::my_action_interface::action::DockingTwo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_action_interface::action::DockingTwo_FeedbackMessage feedback(::my_action_interface::action::DockingTwo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_FeedbackMessage msg_;
};

class Init_DockingTwo_FeedbackMessage_goal_id
{
public:
  Init_DockingTwo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingTwo_FeedbackMessage_feedback goal_id(::my_action_interface::action::DockingTwo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DockingTwo_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_action_interface::action::DockingTwo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interface::action::DockingTwo_FeedbackMessage>()
{
  return my_action_interface::action::builder::Init_DockingTwo_FeedbackMessage_goal_id();
}

}  // namespace my_action_interface

#endif  // MY_ACTION_INTERFACE__ACTION__DETAIL__DOCKING_TWO__BUILDER_HPP_
