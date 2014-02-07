<?php
/**
 * @file
 * schemax_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_message_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function schemax_message_node_info() {
  $items = array(
    'schemax_message' => array(
      'name' => t('Message'),
      'base' => 'node_content',
      'description' => t('Message that can be sent to one or more recipients'),
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => '',
    ),
  );
  return $items;
}
