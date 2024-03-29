// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from choirbot_interfaces:srv/PositionTaskService.idl
// generated code does not contain a copyright notice
#include "choirbot_interfaces/srv/detail/position_task_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "choirbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "choirbot_interfaces/srv/detail/position_task_service__struct.h"
#include "choirbot_interfaces/srv/detail/position_task_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PositionTaskService_Request__ros_msg_type = choirbot_interfaces__srv__PositionTaskService_Request;

static bool _PositionTaskService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionTaskService_Request__ros_msg_type * ros_message = static_cast<const _PositionTaskService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: agent_id
  {
    cdr << ros_message->agent_id;
  }

  return true;
}

static bool _PositionTaskService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionTaskService_Request__ros_msg_type * ros_message = static_cast<_PositionTaskService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: agent_id
  {
    cdr >> ros_message->agent_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_choirbot_interfaces
size_t get_serialized_size_choirbot_interfaces__srv__PositionTaskService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionTaskService_Request__ros_msg_type * ros_message = static_cast<const _PositionTaskService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name agent_id
  {
    size_t item_size = sizeof(ros_message->agent_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PositionTaskService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_choirbot_interfaces__srv__PositionTaskService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_choirbot_interfaces
size_t max_serialized_size_choirbot_interfaces__srv__PositionTaskService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: agent_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionTaskService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_choirbot_interfaces__srv__PositionTaskService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionTaskService_Request = {
  "choirbot_interfaces::srv",
  "PositionTaskService_Request",
  _PositionTaskService_Request__cdr_serialize,
  _PositionTaskService_Request__cdr_deserialize,
  _PositionTaskService_Request__get_serialized_size,
  _PositionTaskService_Request__max_serialized_size
};

static rosidl_message_type_support_t _PositionTaskService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionTaskService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, choirbot_interfaces, srv, PositionTaskService_Request)() {
  return &_PositionTaskService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "choirbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "choirbot_interfaces/srv/detail/position_task_service__struct.h"
// already included above
// #include "choirbot_interfaces/srv/detail/position_task_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "choirbot_interfaces/msg/detail/position_task_array__functions.h"  // tasks

// forward declare type support functions
size_t get_serialized_size_choirbot_interfaces__msg__PositionTaskArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_choirbot_interfaces__msg__PositionTaskArray(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, choirbot_interfaces, msg, PositionTaskArray)();


using _PositionTaskService_Response__ros_msg_type = choirbot_interfaces__srv__PositionTaskService_Response;

static bool _PositionTaskService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionTaskService_Response__ros_msg_type * ros_message = static_cast<const _PositionTaskService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tasks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, choirbot_interfaces, msg, PositionTaskArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tasks, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PositionTaskService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionTaskService_Response__ros_msg_type * ros_message = static_cast<_PositionTaskService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tasks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, choirbot_interfaces, msg, PositionTaskArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tasks))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_choirbot_interfaces
size_t get_serialized_size_choirbot_interfaces__srv__PositionTaskService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionTaskService_Response__ros_msg_type * ros_message = static_cast<const _PositionTaskService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tasks

  current_alignment += get_serialized_size_choirbot_interfaces__msg__PositionTaskArray(
    &(ros_message->tasks), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PositionTaskService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_choirbot_interfaces__srv__PositionTaskService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_choirbot_interfaces
size_t max_serialized_size_choirbot_interfaces__srv__PositionTaskService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tasks
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_choirbot_interfaces__msg__PositionTaskArray(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionTaskService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_choirbot_interfaces__srv__PositionTaskService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionTaskService_Response = {
  "choirbot_interfaces::srv",
  "PositionTaskService_Response",
  _PositionTaskService_Response__cdr_serialize,
  _PositionTaskService_Response__cdr_deserialize,
  _PositionTaskService_Response__get_serialized_size,
  _PositionTaskService_Response__max_serialized_size
};

static rosidl_message_type_support_t _PositionTaskService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionTaskService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, choirbot_interfaces, srv, PositionTaskService_Response)() {
  return &_PositionTaskService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "choirbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "choirbot_interfaces/srv/position_task_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PositionTaskService__callbacks = {
  "choirbot_interfaces::srv",
  "PositionTaskService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, choirbot_interfaces, srv, PositionTaskService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, choirbot_interfaces, srv, PositionTaskService_Response)(),
};

static rosidl_service_type_support_t PositionTaskService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PositionTaskService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, choirbot_interfaces, srv, PositionTaskService)() {
  return &PositionTaskService__handle;
}

#if defined(__cplusplus)
}
#endif
