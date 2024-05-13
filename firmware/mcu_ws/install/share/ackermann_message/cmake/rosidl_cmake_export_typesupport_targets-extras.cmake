# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:ackermann_message__rosidl_generator_c;__rosidl_typesupport_introspection_c:ackermann_message__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:ackermann_message__rosidl_typesupport_c")

# populate ackermann_message_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "ackermann_message::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'ackermann_message' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND ackermann_message_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
