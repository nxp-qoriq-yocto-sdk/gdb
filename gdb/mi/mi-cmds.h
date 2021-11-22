/* MI Command Set for GDB, the GNU debugger.

   Copyright (C) 2000-2021 Free Software Foundation, Inc.

   Contributed by Cygnus Solutions (a Red Hat company).

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef MI_MI_CMDS_H
#define MI_MI_CMDS_H

#include <map>
#include "gdbsupport/gdb_optional.h"

enum print_values {
   PRINT_NO_VALUES,
   PRINT_ALL_VALUES,
   PRINT_SIMPLE_VALUES
};

typedef void (mi_cmd_argv_ftype) (const char *command, char **argv, int argc);

/* Declarations of the functions implementing each command.  */

extern mi_cmd_argv_ftype mi_cmd_ada_task_info;
extern mi_cmd_argv_ftype mi_cmd_add_inferior;
extern mi_cmd_argv_ftype mi_cmd_break_insert;
extern mi_cmd_argv_ftype mi_cmd_dprintf_insert;
extern mi_cmd_argv_ftype mi_cmd_break_condition;
extern mi_cmd_argv_ftype mi_cmd_break_commands;
extern mi_cmd_argv_ftype mi_cmd_break_passcount;
extern mi_cmd_argv_ftype mi_cmd_break_watch;
extern mi_cmd_argv_ftype mi_cmd_catch_assert;
extern mi_cmd_argv_ftype mi_cmd_catch_exception;
extern mi_cmd_argv_ftype mi_cmd_catch_handlers;
extern mi_cmd_argv_ftype mi_cmd_catch_load;
extern mi_cmd_argv_ftype mi_cmd_catch_unload;
extern mi_cmd_argv_ftype mi_cmd_catch_throw;
extern mi_cmd_argv_ftype mi_cmd_catch_rethrow;
extern mi_cmd_argv_ftype mi_cmd_catch_catch;
extern mi_cmd_argv_ftype mi_cmd_disassemble;
extern mi_cmd_argv_ftype mi_cmd_data_evaluate_expression;
extern mi_cmd_argv_ftype mi_cmd_data_list_register_names;
extern mi_cmd_argv_ftype mi_cmd_data_list_register_values;
extern mi_cmd_argv_ftype mi_cmd_data_list_changed_registers;
extern mi_cmd_argv_ftype mi_cmd_data_read_memory;
extern mi_cmd_argv_ftype mi_cmd_data_read_memory_bytes;
extern mi_cmd_argv_ftype mi_cmd_data_write_memory;
extern mi_cmd_argv_ftype mi_cmd_data_write_memory_bytes;
extern mi_cmd_argv_ftype mi_cmd_data_write_register_values;
extern mi_cmd_argv_ftype mi_cmd_enable_timings;
extern mi_cmd_argv_ftype mi_cmd_env_cd;
extern mi_cmd_argv_ftype mi_cmd_env_dir;
extern mi_cmd_argv_ftype mi_cmd_env_path;
extern mi_cmd_argv_ftype mi_cmd_env_pwd;
extern mi_cmd_argv_ftype mi_cmd_exec_continue;
extern mi_cmd_argv_ftype mi_cmd_exec_finish;
extern mi_cmd_argv_ftype mi_cmd_exec_interrupt;
extern mi_cmd_argv_ftype mi_cmd_exec_jump;
extern mi_cmd_argv_ftype mi_cmd_exec_next;
extern mi_cmd_argv_ftype mi_cmd_exec_next_instruction;
extern mi_cmd_argv_ftype mi_cmd_exec_return;
extern mi_cmd_argv_ftype mi_cmd_exec_run;
extern mi_cmd_argv_ftype mi_cmd_exec_step;
extern mi_cmd_argv_ftype mi_cmd_exec_step_instruction;
extern mi_cmd_argv_ftype mi_cmd_file_list_exec_source_file;
extern mi_cmd_argv_ftype mi_cmd_file_list_exec_source_files;
extern mi_cmd_argv_ftype mi_cmd_file_list_shared_libraries;
extern mi_cmd_argv_ftype mi_cmd_gdb_exit;
extern mi_cmd_argv_ftype mi_cmd_inferior_tty_set;
extern mi_cmd_argv_ftype mi_cmd_inferior_tty_show;
extern mi_cmd_argv_ftype mi_cmd_info_ada_exceptions;
extern mi_cmd_argv_ftype mi_cmd_info_gdb_mi_command;
extern mi_cmd_argv_ftype mi_cmd_info_os;
extern mi_cmd_argv_ftype mi_cmd_interpreter_exec;
extern mi_cmd_argv_ftype mi_cmd_list_features;
extern mi_cmd_argv_ftype mi_cmd_list_target_features;
extern mi_cmd_argv_ftype mi_cmd_list_thread_groups;
extern mi_cmd_argv_ftype mi_cmd_remove_inferior;
extern mi_cmd_argv_ftype mi_cmd_stack_info_depth;
extern mi_cmd_argv_ftype mi_cmd_stack_info_frame;
extern mi_cmd_argv_ftype mi_cmd_stack_list_args;
extern mi_cmd_argv_ftype mi_cmd_stack_list_frames;
extern mi_cmd_argv_ftype mi_cmd_stack_list_locals;
extern mi_cmd_argv_ftype mi_cmd_stack_list_variables;
extern mi_cmd_argv_ftype mi_cmd_stack_select_frame;
extern mi_cmd_argv_ftype mi_cmd_symbol_list_lines;
extern mi_cmd_argv_ftype mi_cmd_symbol_info_functions;
extern mi_cmd_argv_ftype mi_cmd_symbol_info_module_functions;
extern mi_cmd_argv_ftype mi_cmd_symbol_info_module_variables;
extern mi_cmd_argv_ftype mi_cmd_symbol_info_modules;
extern mi_cmd_argv_ftype mi_cmd_symbol_info_types;
extern mi_cmd_argv_ftype mi_cmd_symbol_info_variables;
extern mi_cmd_argv_ftype mi_cmd_target_detach;
extern mi_cmd_argv_ftype mi_cmd_target_file_get;
extern mi_cmd_argv_ftype mi_cmd_target_file_put;
extern mi_cmd_argv_ftype mi_cmd_target_file_delete;
extern mi_cmd_argv_ftype mi_cmd_target_flash_erase;
extern mi_cmd_argv_ftype mi_cmd_thread_info;
extern mi_cmd_argv_ftype mi_cmd_thread_list_ids;
extern mi_cmd_argv_ftype mi_cmd_thread_select;
extern mi_cmd_argv_ftype mi_cmd_trace_define_variable;
extern mi_cmd_argv_ftype mi_cmd_trace_find;
extern mi_cmd_argv_ftype mi_cmd_trace_frame_collected;
extern mi_cmd_argv_ftype mi_cmd_trace_list_variables;
extern mi_cmd_argv_ftype mi_cmd_trace_save;
extern mi_cmd_argv_ftype mi_cmd_trace_start;
extern mi_cmd_argv_ftype mi_cmd_trace_status;
extern mi_cmd_argv_ftype mi_cmd_trace_stop;
extern mi_cmd_argv_ftype mi_cmd_var_assign;
extern mi_cmd_argv_ftype mi_cmd_var_create;
extern mi_cmd_argv_ftype mi_cmd_var_delete;
extern mi_cmd_argv_ftype mi_cmd_var_evaluate_expression;
extern mi_cmd_argv_ftype mi_cmd_var_info_expression;
extern mi_cmd_argv_ftype mi_cmd_var_info_path_expression;
extern mi_cmd_argv_ftype mi_cmd_var_info_num_children;
extern mi_cmd_argv_ftype mi_cmd_var_info_type;
extern mi_cmd_argv_ftype mi_cmd_var_list_children;
extern mi_cmd_argv_ftype mi_cmd_var_set_format;
extern mi_cmd_argv_ftype mi_cmd_var_set_frozen;
extern mi_cmd_argv_ftype mi_cmd_var_set_visualizer;
extern mi_cmd_argv_ftype mi_cmd_var_show_attributes;
extern mi_cmd_argv_ftype mi_cmd_var_show_format;
extern mi_cmd_argv_ftype mi_cmd_var_update;
extern mi_cmd_argv_ftype mi_cmd_enable_pretty_printing;
extern mi_cmd_argv_ftype mi_cmd_enable_frame_filters;
extern mi_cmd_argv_ftype mi_cmd_var_set_update_range;
extern mi_cmd_argv_ftype mi_cmd_complete;

/* The virtual base class for all MI commands.  */

struct mi_command
{
  /* Constructor.  */
  mi_command (const char *name, int *suppress_notification);

  /* Destructor.  */
  virtual ~mi_command () { /* Nothing.  */ };

  /* Return the name of this command.  This is the command that the user
     will actually type in, without any arguments.  */
  const std::string &name () const
  { return m_name; }

  /* Execute the MI command.  Can throw an exception if something goes
     wrong.  */
  void invoke (struct mi_parse *parse) const;

protected:

  /* The core of command invocation, this needs to be overridden in each
     base class.  */
  virtual void do_invoke(struct mi_parse *parse) const = 0;

private:

  /* If this command was created with a suppress notifications pointer,
     then this function will set the suppress flag and return a
     gdb::optional with its value set to an object that will restore the
     previous value of the suppress notifications flag.

     If this command was created without a suppress notifications points,
     then this function returns an empty gdb::optional.  */
  gdb::optional<scoped_restore_tmpl<int>> do_suppress_notification () const;

  /* The name of the command.  */
  std::string m_name;

  /* Pointer to integer to set during command's invocation.  */
  int *m_suppress_notification;
};

/* A command held in the MI_CMD_TABLE.  */

typedef std::unique_ptr<struct mi_command> mi_cmd_up;

/* Lookup a command in the MI command table, returns nullptr if COMMAND is
   not found.  */

extern mi_command *mi_cmd_lookup (const char *command);

extern std::map<std::string, mi_cmd_up> mi_cmd_table;

/* Debug flag */
extern int mi_debug_p;

extern void mi_execute_command (const char *cmd, int from_tty);

/* Insert a new mi-command into the command table.  Return true if
   insertion was successful.  */

extern bool insert_mi_cmd_entry (mi_cmd_up command);

#endif /* MI_MI_CMDS_H */
