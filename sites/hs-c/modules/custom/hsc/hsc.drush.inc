<?php
/**
 * @file hsc.drush.inc
 * Hearthstone cards management. 
 */


/**
 * Implements hook_drush_command().
 */
function hsc_drush_command() {
  $commands = array();
  $commands['hsc-print-message'] = array(
    'description' => 'Print a message in the console.',
    'options' => array(
      'message' => 'The message to print.',
    )
  );
  return $commands;
}


/**
 * Callback for command hsc-print-message.
 */
function drush_hsc_print_message() {
  $message = drush_get_option('message', dt('This is a default message.'));
  drush_print(dt('Your message is: @message', array('@message' => $message)));
}
